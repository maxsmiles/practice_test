import pymysql 
def get_one(): 
    # 1. 连接 
    conn = pymysql.connect(host='127.0.0.1',port=3306,user='root',passwd='123456',db='xuexiao',charset='utf8')
    # 2. 打开游标 
    cur = conn.cursor() 
    # 3. 执行 
    sql ='select * from student where ssex = %s' 
    cur.execute(sql,('女')) 
    #result = cur.fetchone() # 返回一个元组() 默认找第1个! 
    result = cur.fetchall() # 返回多个元祖 ((),(),(),...) 
    print(result)
    for stu in result: 
        print(f'id:{stu[0]},名字:{stu[1]}') 
    # 4.关闭资源 
    cur.close() 
    conn.close() 
if __name__ == '__main__': 
    get_one()