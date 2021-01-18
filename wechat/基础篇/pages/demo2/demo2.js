// pages/demo2/demo2.js
Page({

  /**
   * 页面的初始数据
   */
  data: {
    title:"微信小程序开发",
    content:"这里是内容",
    listarr:["平面设计","数据挖掘","前端开发"],
    day:3,
    array: [{
      message: 'foo',
    }, {
      message: 'bar'
    }]
  },

  myTap:function(){
    console.log("开始点击了")
  },

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
    //console.log("生命周期函数--监听页面加载")
    this.setData({
      title:"test"
    });
    //console.log(wx.getSystemInfoSync())
    wx.showToast({
      title: '成功',
      icon: 'success',
      duration: 2000
    })
  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {
    console.log("监听页面初次渲染完成")
  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {
    console.log("监听页面显示")
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