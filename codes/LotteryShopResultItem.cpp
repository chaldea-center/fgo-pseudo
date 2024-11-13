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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  LotteryShopResultItem___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v16; // x21
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0

  if ( (byte_4B111BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v5, v6);
    sub_1BCA7E0(&LotteryShopResultItem___c_TypeInfo, v7, v8);
    byte_4B111BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = LotteryShopResultItem___c_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo, v10);
    v13 = LotteryShopResultItem___c_TypeInfo;
  }
  _9__5_0 = v13->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v10);
      v13 = LotteryShopResultItem___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(_9__5_0, v16, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    Instance = (Il2CppObject *)sub_1BCA784(&static_fields->__9__5_0, _9__5_0);
  }
  if ( !v14 )
    sub_1BCAA3C(Instance, v10);
  CommonUI__CloseServantEquipStatusDialog(v14, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  int32_t svtId; // w22
  CommonUI_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  EquipTargetInfo_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ServantStatusDialog_EndDelegate_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1

  if ( (byte_4B111BB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v6, v7);
    sub_1BCA7E0(&Method_LotteryShopResultItem_OnClickDetail__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B111BB = 1;
  }
  v12 = Method_LotteryShopResultItem_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopResultItem_OnClickDetail__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopResultItem_OnClickDetail__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  svtId = this->fields.svtId;
  v16 = (CommonUI_o *)Instance;
  v20 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v17, v18, v19);
  EquipTargetInfo___ctor_39602340(v20, svtId, 0, 1, 0, 0LL);
  v24 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v21, v22, v23);
  ServantStatusDialog_EndDelegate___ctor(
    v24,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v16 )
    sub_1BCAA3C(v25, v26);
  CommonUI__OpenServantEquipStatusDialog_30781828(v16, 11, v20, v24, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  ServantFaceIconComponent__Set_38928428(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B111BD & 1) == 0 )
  {
    sub_1BCA7E0(&LotteryShopResultItem___c_TypeInfo, v1, v2);
    byte_4B111BD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(LotteryShopResultItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  LotteryShopResultItem___c_TypeInfo->static_fields->__9 = (struct LotteryShopResultItem___c_o *)v4;
  sub_1BCA784(LotteryShopResultItem___c_TypeInfo->static_fields, v4);
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