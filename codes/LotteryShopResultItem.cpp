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
  CommonUI_o *v8; // x19
  LotteryShopResultItem___c_c *v9; // x8
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v12; // x21
  struct LotteryShopResultItem___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_41862B9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v4);
    sub_B2C35C(&LotteryShopResultItem___c_TypeInfo, v5);
    byte_41862B9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  v9 = LotteryShopResultItem___c_TypeInfo;
  if ( (BYTE3(LotteryShopResultItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v9 = LotteryShopResultItem___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__5_0, v12, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    v13 = LotteryShopResultItem___c_TypeInfo->static_fields;
    v13->__9__5_0 = _9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v8 )
    sub_B2C434(Instance, v7);
  CommonUI__CloseServantEquipStatusDialog(v8, _9__5_0, 0LL);
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
  EquipTargetInfo_o *v10; // x21
  ServantStatusDialog_EndDelegate_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_41862B8 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v3);
    sub_B2C35C(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_41862B8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = *(_DWORD *)&this->fields.isNew;
  v9 = (CommonUI_o *)Instance;
  v10 = (EquipTargetInfo_o *)sub_B2C42C(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_29550540(v10, v8, 0, 1, 0, 0LL);
  v11 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v9 )
    sub_B2C434(v12, v13);
  CommonUI__OpenServantEquipStatusDialog_17986440(v9, 11, v10, v11, 0LL, 0LL);
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
    sub_B2C434(0LL, svtId);
  ServantFaceIconComponent__Set_30790452(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0

  if ( (byte_4184224 & 1) == 0 )
  {
    sub_B2C35C(&LotteryShopResultItem___c_TypeInfo, v1);
    byte_4184224 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(LotteryShopResultItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LotteryShopResultItem___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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