void __fastcall LotteryShopResultItem___ctor(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LotteryShopResultItem__EndShowServantEquipStatusDialog(
        LotteryShopResultItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  LotteryShopResultItem___c_c *v5; // x8
  CommonUI_o *v6; // x19
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v8; // x21
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0

  if ( (byte_4BD73FA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__);
    sub_1C21E38(&LotteryShopResultItem___c_TypeInfo);
    byte_4BD73FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = LotteryShopResultItem___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v5 = LotteryShopResultItem___c_TypeInfo;
  }
  _9__5_0 = v5->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = LotteryShopResultItem___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__5_0, v8, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    Instance = (Il2CppObject *)sub_1C21DDC(&static_fields->__9__5_0, _9__5_0);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseServantEquipStatusDialog(v6, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  int32_t svtId; // w22
  CommonUI_o *v7; // x20
  EquipTargetInfo_o *v8; // x21
  ServantStatusDialog_EndDelegate_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BD73F9 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&EquipTargetInfo_TypeInfo);
    sub_1C21E38(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__);
    sub_1C21E38(&Method_LotteryShopResultItem_OnClickDetail__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73F9 = 1;
  }
  v3 = Method_LotteryShopResultItem_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopResultItem_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_LotteryShopResultItem_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  svtId = this->fields.svtId;
  v7 = (CommonUI_o *)Instance;
  v8 = (EquipTargetInfo_o *)sub_1C22084(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_40142420(v8, svtId, 0, 1, 0, 0LL);
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v7 )
    sub_1C22094(v10, v11);
  CommonUI__OpenServantEquipStatusDialog_31143688(v7, 11, v8, v9, 0LL, 0LL);
}


void __fastcall LotteryShopResultItem__Set(
        LotteryShopResultItem_o *this,
        int32_t svtId,
        bool isGet,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *iconComp; // x0

  iconComp = this->fields.iconComp;
  this->fields.svtId = svtId;
  this->fields.isNew = !isGet;
  if ( !iconComp )
    sub_1C22094(0LL, svtId);
  ServantFaceIconComponent__Set_39461076(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD73FB & 1) == 0 )
  {
    sub_1C21E38(&LotteryShopResultItem___c_TypeInfo);
    byte_4BD73FB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(LotteryShopResultItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  LotteryShopResultItem___c_TypeInfo->static_fields->__9 = (struct LotteryShopResultItem___c_o *)v1;
  sub_1C21DDC(LotteryShopResultItem___c_TypeInfo->static_fields, v1);
}


void __fastcall LotteryShopResultItem___c___ctor(LotteryShopResultItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LotteryShopResultItem___c___EndShowServantEquipStatusDialog_b__5_0(
        LotteryShopResultItem___c_o *this,
        const MethodInfo *method)
{
  ;
}