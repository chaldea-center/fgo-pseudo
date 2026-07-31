void LotteryShopResultItem___ctor(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LotteryShopResultItem__EndShowServantEquipStatusDialog(
        LotteryShopResultItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  LotteryShopResultItem___c_c *v6; // x8
  CommonUI_o *v7; // x19
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v10; // x21
  struct LotteryShopResultItem___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932B5F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__);
    sub_21FFC50(&LotteryShopResultItem___c_TypeInfo);
    byte_5932B5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = LotteryShopResultItem___c_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&LotteryShopResultItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo, v4, v5);
    v6 = LotteryShopResultItem___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__5_0, v10, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0);
    v11 = LotteryShopResultItem___c_TypeInfo->static_fields;
    v11->__9__5_0 = _9__5_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__5_0, (int32_t)_9__5_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseServantEquipStatusDialog(v7, _9__5_0, 0);
}


void LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
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

  if ( (byte_5932B5E & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&EquipTargetInfo_TypeInfo);
    sub_21FFC50(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__);
    sub_21FFC50(&Method_LotteryShopResultItem_OnClickDetail__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932B5E = 1;
  }
  v3 = Method_LotteryShopResultItem_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopResultItem_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_LotteryShopResultItem_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  svtId = this->fields.svtId;
  v7 = (CommonUI_o *)Instance;
  v8 = (EquipTargetInfo_o *)sub_21FFEBC(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_48662504(v8, svtId, 0, 1, 0, 0);
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0);
  if ( !v7 )
    sub_21FFECC(v10, v11);
  CommonUI__OpenServantEquipStatusDialog_37307296(v7, 11, v8, v9, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void LotteryShopResultItem__Set(LotteryShopResultItem_o *this, int32_t svtId, bool isGet, const MethodInfo *method)
{
  ServantFaceIconComponent_o *iconComp; // x0

  iconComp = this->fields.iconComp;
  this->fields.svtId = svtId;
  this->fields.isNew = !isGet;
  if ( !iconComp )
    sub_21FFECC(0, *(_QWORD *)&svtId);
  ServantFaceIconComponent__Set_48021296(iconComp, svtId, 0, 0, 0, 0, 0, 2, !isGet, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}


void LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932B60 & 1) == 0 )
  {
    sub_21FFC50(&LotteryShopResultItem___c_TypeInfo);
    byte_5932B60 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(LotteryShopResultItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LotteryShopResultItem___c_TypeInfo->static_fields->__9 = (struct LotteryShopResultItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)LotteryShopResultItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LotteryShopResultItem___c___ctor(LotteryShopResultItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LotteryShopResultItem___c___EndShowServantEquipStatusDialog_b__5_0(
        LotteryShopResultItem___c_o *this,
        const MethodInfo *method)
{
  ;
}