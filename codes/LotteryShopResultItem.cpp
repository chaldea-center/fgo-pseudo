void __fastcall LotteryShopResultItem___ctor(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LotteryShopResultItem__EndShowServantEquipStatusDialog(
        LotteryShopResultItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  LotteryShopResultItem___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v11; // x21
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A23CEB & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, isDecide);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B715CC(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v4);
    sub_1B715CC(&LotteryShopResultItem___c_TypeInfo, v5);
    byte_4A23CEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = LotteryShopResultItem___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v8 = LotteryShopResultItem___c_TypeInfo;
  }
  _9__5_0 = v8->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = LotteryShopResultItem___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(_9__5_0, v11, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14);
  }
  if ( !v9 )
    sub_1B71828(Instance, v7);
  CommonUI__CloseServantEquipStatusDialog(v9, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  int32_t svtId; // w22
  CommonUI_o *v11; // x20
  EquipTargetInfo_o *v12; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4A23CEA & 1) == 0 )
  {
    sub_1B715CC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B715CC(&EquipTargetInfo_TypeInfo, v3);
    sub_1B715CC(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v4);
    sub_1B715CC(&Method_LotteryShopResultItem_OnClickDetail__, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A23CEA = 1;
  }
  v7 = Method_LotteryShopResultItem_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopResultItem_OnClickDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B715E4(Method_LotteryShopResultItem_OnClickDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B715B0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  svtId = this->fields.svtId;
  v11 = (CommonUI_o *)Instance;
  v12 = (EquipTargetInfo_o *)sub_1B71818(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_38677680(v12, svtId, 0, 1, 0, 0LL);
  v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B71818(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v11 )
    sub_1B71828(v14, v15);
  CommonUI__OpenServantEquipStatusDialog_30415112(v11, 11, v12, v13, 0LL, 0LL);
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
    sub_1B71828(0LL, svtId);
  ServantFaceIconComponent__Set_38011932(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A23CEC & 1) == 0 )
  {
    sub_1B715CC(&LotteryShopResultItem___c_TypeInfo, v1);
    byte_4A23CEC = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(LotteryShopResultItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  LotteryShopResultItem___c_TypeInfo->static_fields->__9 = (struct LotteryShopResultItem___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)LotteryShopResultItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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