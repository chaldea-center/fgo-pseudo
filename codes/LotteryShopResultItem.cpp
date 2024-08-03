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
  __int64 v8; // x2
  LotteryShopResultItem___c_c *v9; // x8
  CommonUI_o *v10; // x19
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v12; // x21
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A005D3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v4);
    sub_1B640C8(&LotteryShopResultItem___c_TypeInfo, v5);
    byte_4A005D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = LotteryShopResultItem___c_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v9 = LotteryShopResultItem___c_TypeInfo;
  }
  _9__5_0 = v9->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = LotteryShopResultItem___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(_9__5_0, v12, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
  }
  if ( !v10 )
    sub_1B64324(Instance);
  CommonUI__CloseServantEquipStatusDialog(v10, _9__5_0, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  EquipTargetInfo_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusDialog_EndDelegate_o *v17; // x22
  __int64 v18; // x0

  if ( (byte_4A005D2 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B640C8(&EquipTargetInfo_TypeInfo, v3);
    sub_1B640C8(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v4);
    sub_1B640C8(&Method_LotteryShopResultItem_OnClickDetail__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A005D2 = 1;
  }
  v7 = Method_LotteryShopResultItem_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopResultItem_OnClickDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_LotteryShopResultItem_OnClickDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  svtId = this->fields.svtId;
  v11 = (CommonUI_o *)Instance;
  v14 = (EquipTargetInfo_o *)sub_1B64314(EquipTargetInfo_TypeInfo, v12, v13);
  EquipTargetInfo___ctor_38565608(v14, svtId, 0, 1, 0, 0LL);
  v17 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16);
  ServantStatusDialog_EndDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v11 )
    sub_1B64324(v18);
  CommonUI__OpenServantEquipStatusDialog_30360564(v11, 11, v14, v17, 0LL, 0LL);
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
    sub_1B64324(0LL);
  ServantFaceIconComponent__Set_37902064(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A005D4 & 1) == 0 )
  {
    sub_1B640C8(&LotteryShopResultItem___c_TypeInfo, v1);
    byte_4A005D4 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(LotteryShopResultItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  LotteryShopResultItem___c_TypeInfo->static_fields->__9 = (struct LotteryShopResultItem___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)LotteryShopResultItem___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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