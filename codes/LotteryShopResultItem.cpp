void __fastcall LotteryShopResultItem___ctor(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LotteryShopResultItem__EndShowServantEquipStatusDialog(
        LotteryShopResultItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19
  LotteryShopResultItem___c_c *v6; // x8
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v9; // x21
  struct LotteryShopResultItem___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4389E59 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__);
    sub_B775C4(&LotteryShopResultItem___c_TypeInfo);
    byte_4389E59 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  v6 = LotteryShopResultItem___c_TypeInfo;
  if ( (BYTE3(LotteryShopResultItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v6 = LotteryShopResultItem___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__5_0, v9, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    v10 = LotteryShopResultItem___c_TypeInfo->static_fields;
    v10->__9__5_0 = _9__5_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    sub_B7769C(Instance, v4);
  CommonUI__CloseServantEquipStatusDialog(v5, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int32_t v4; // w22
  CommonUI_o *v5; // x20
  EquipTargetInfo_o *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4389E58 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&EquipTargetInfo_TypeInfo);
    sub_B775C4(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389E58 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = *(_DWORD *)&this->fields.isNew;
  v5 = (CommonUI_o *)Instance;
  v6 = (EquipTargetInfo_o *)sub_B77694(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_31639132(v6, v4, 0, 1, 0, 0LL);
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v5 )
    sub_B7769C(v8, v9);
  CommonUI__OpenServantEquipStatusDialog_18071300(v5, 11, v6, v7, 0LL, 0LL);
}


void __fastcall LotteryShopResultItem__Set(
        LotteryShopResultItem_o *this,
        int32_t svtId,
        bool isGet,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *iconComp; // x0

  iconComp = this->fields.iconComp;
  *(_DWORD *)&this->fields.isNew = svtId;
  *(&this->fields.isNew + 4) = !isGet;
  if ( !iconComp )
    sub_B7769C(0LL, svtId);
  ServantFaceIconComponent__Set_31755472(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0

  if ( (byte_438895F & 1) == 0 )
  {
    sub_B775C4(&LotteryShopResultItem___c_TypeInfo);
    byte_438895F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(LotteryShopResultItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LotteryShopResultItem___c_o *)v1;
  sub_B77560(static_fields);
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