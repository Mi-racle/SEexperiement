<template>
    <div >
        <div class="jumbotron masthead">
            <div class="container">
                <h1>XAnalysis</h1>
                <h2>简洁、直观的静态分析工具，让代码更安全、简单。</h2>
                <h5>当前版本： v1.0.0 | 文档更新于：2020-04-25</h5>
                <hr>
                <router-link class="btn btn-lg" to="/upload">点击开始进入静态分析之旅</router-link>
            </div>
        </div>
    </div>
</template>

<script>
export default {
  name: 'HelloWorld',
  props: {
    msg: String
  }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
    @media screen and (min-width: 768px){
        .masthead h1 {
            font-size: 110px;
            font-weight:bold;
            margin-bottom: 30px;
            color:#ffffff;
        }
        .btn{
            color: #ffffff;
        }
        .masthead h2 {
            color:#ffffff;
            font-weight:normal;
            margin-bottom:30px;
        }
        .masthead {
            padding: 0px 0 0px;
            margin-bottom: 30px;
            margin-top: 30px;
            color: #fff;
        }

        .jumbotron {
            position: relative;
            padding: 200px 200px;
            color: #fff;
            text-align: center;
            text-shadow: 0 1px 3px rgba(0,0,0,.4), 0 0 30px rgba(0,0,0,.075);
            background: #020031;
            background: linear-gradient(45deg,#43d8c9,#035aa6);
            filter: progid:DXImageTransform.Microsoft.gradient(startColorstr="#020031",endColorstr="#6d3353",GradientType=1);
            box-shadow: inset 0 3px 7px rgba(255,255,255,.75), inset 0 -3px 7px rgba(255,255,255,.2);
        }
    }
</style>
