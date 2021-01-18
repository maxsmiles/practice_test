// pages/demo3/demo3.js
Page({

  /**
   * 页面的初始数据
   */
  data: {
    dataList:[
      {title:"这是标题1",time:"2019",url:"/images/000.jpg"},
      {title:"这是标题2",time:"2020",url:"/images/111.jpg"},
      {title:"这是标题3",time:"2021",url:"/images/000.jpg"}
    ],
    resData:[],
    num:1
  },

  nextPages:function() {
    this.data.num++
    this.getList(this.data.num);
  },
  getList:function(p=1){
    wx.request({
      url: 'https://edu.newsight.cn/wxList.php',
      data:{
        num:5,
        page:p
      },
      success:res=>{
        console.log(res.data)
        this.setData({
          resData:res.data
        })
      }
    })
  },
  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
    this.getList();
  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {

  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {

  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {

  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {

  },

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh: function () {

  },

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom: function () {

  },

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage: function () {

  }
})