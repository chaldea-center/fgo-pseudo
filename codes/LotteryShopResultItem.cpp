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
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *v9; // x19
  LotteryShopResultItem___c_c *v10; // x8
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v13; // x21
  struct LotteryShopResultItem___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4212F9B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v4);
    sub_B0D8A4(&LotteryShopResultItem___c_TypeInfo, v5);
    byte_4212F9B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  v10 = LotteryShopResultItem___c_TypeInfo;
  if ( (BYTE3(LotteryShopResultItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v10 = LotteryShopResultItem___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(_9__5_0, v13, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    v14 = LotteryShopResultItem___c_TypeInfo->static_fields;
    v14->__9__5_0 = _9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__CloseServantEquipStatusDialog(v9, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  int32_t v8; // w22
  CommonUI_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  EquipTargetInfo_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusDialog_EndDelegate_o *v15; // x22
  __int64 v16; // x0

  if ( (byte_4212F9A & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v3);
    sub_B0D8A4(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212F9A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = *(_DWORD *)&this->fields.isNew;
  v9 = (CommonUI_o *)Instance;
  v12 = (EquipTargetInfo_o *)sub_B0D974(EquipTargetInfo_TypeInfo, v10, v11);
  EquipTargetInfo___ctor_28810548(v12, v8, 0, 1, 0, 0LL);
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
  ServantStatusDialog_EndDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v9 )
    sub_B0D97C(v16);
  CommonUI__OpenServantEquipStatusDialog_17032132(v9, 11, v12, v15, 0LL, 0LL);
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
    sub_B0D97C(0LL);
  ServantFaceIconComponent__Set_29623744(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0

  if ( (byte_4210FA5 & 1) == 0 )
  {
    sub_B0D8A4(&LotteryShopResultItem___c_TypeInfo, v1);
    byte_4210FA5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(LotteryShopResultItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LotteryShopResultItem___c_o *)v3;
  sub_B0D840(static_fields, v3);
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