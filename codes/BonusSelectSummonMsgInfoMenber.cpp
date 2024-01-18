void __fastcall BonusSelectSummonMsgInfoMenber___ctor(BonusSelectSummonMsgInfoMenber_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BonusSelectSummonMsgInfoMenber__CheckAssert(
        BonusSelectSummonMsgInfoMenber_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonMsgInfoMenber__Init(BonusSelectSummonMsgInfoMenber_o *this, const MethodInfo *method)
{
  UISprite_o *upperClassSprite; // x0

  if ( (byte_4187DCD & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    byte_4187DCD = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_B2C434(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0LL);
}


void __fastcall BonusSelectSummonMsgInfoMenber__Set(
        BonusSelectSummonMsgInfoMenber_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantExceedMaster_o *v20; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v22; // x1
  int32_t FrameType_30786888; // w0
  int32_t classId; // w22
  int32_t v25; // w21
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  UserServantMaster_o *v30; // x21
  System_Collections_Generic_List_UserServantEntity__o *v31; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v32; // x0
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x22
  Il2CppObject *v35; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  UserServantEntity_o *v44; // x0
  WarQuestSelectionMaster_o *v45; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v47; // x21
  __int64 v48; // x22
  ServantTreasureDvcMaster_o *v49; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+50h] [xbp-50h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4187DCE & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, servantEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_B2C35C(&Method_System_Func_UserServantEntity__int___ctor__, v11);
    sub_B2C35C(&System_Func_UserServantEntity__int__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v14);
    sub_B2C35C(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v15);
    sub_B2C35C(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v16);
    byte_4187DCE = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v20 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v19;
    *(_QWORD *)&v53.fields.fakeValue = v18;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
    if ( !v20 )
      goto LABEL_56;
    FrameType_30786888 = ServantExceedMaster__GetFrameType_30786888(
                           v20,
                           &rarity,
                           (int32_t)TreasureDeviceInfo,
                           0,
                           0,
                           0LL);
    classId = servantEntity->fields.classId;
    v25 = FrameType_30786888;
    if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    }
    if ( SvtClassAttri__IsExtraClass1(classId, 0LL) )
    {
      classId = 1004;
    }
    else
    {
      if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SvtClassAttri_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      }
      if ( SvtClassAttri__IsExtraClass2(classId, 0LL) )
        classId = 1005;
    }
    upperClassSprite = this->fields.upperClassSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetClass(upperClassSprite, classId, v25, 0LL);
    servantFace = this->fields.servantFace;
    v29 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v28 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = v29;
    *(_QWORD *)&v54.fields.fakeValue = v28;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
    if ( !servantFace )
      goto LABEL_56;
    ServantFaceIconComponent__Set_30790452(
      servantFace,
      (int32_t)TreasureDeviceInfo,
      0,
      0,
      0,
      0LL,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v30 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v30 )
      goto LABEL_56;
    if ( UserServantMaster__TryGetEntityListBySvtId(v30, &userServantList, (int32_t)TreasureDeviceInfo, 1, 0LL) )
    {
      v31 = userServantList;
      v32 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( (BYTE3(BonusSelectSummonMsgInfoMenber___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v32 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__4_0,
          v35,
          Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_UserServantEntity__int___ctor__);
        v36 = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        v36->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v36->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v44 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                     v43,
                                     (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v44 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(v44, &tdInfo, -1, -1, 0, 0LL);
        if ( tdInfo )
        {
          TreasureDeviceInfo = this->fields.treasureDeviceIconLabel;
          if ( TreasureDeviceInfo )
          {
            UIIconLabel__Set_41609428(
              TreasureDeviceInfo,
              33,
              tdInfo->fields.lv,
              tdInfo->fields.maxLv,
              0,
              0LL,
              0,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_56:
        sub_B2C434(TreasureDeviceInfo, v22);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v45 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v48 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v47 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v49 = (ServantTreasureDvcMaster_o *)v45;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v55.fields.currentCryptoKey = v48;
    *(_QWORD *)&v55.fields.fakeValue = v47;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v55, 0LL);
    if ( !v49 )
      goto LABEL_56;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v49,
                                            (int32_t)TreasureDeviceInfo,
                                            1,
                                            0LL);
    if ( !TreasureDeviceInfo )
      goto LABEL_56;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcEntity__getLevelMax(
                                            (ServantTreasureDvcEntity_o *)TreasureDeviceInfo,
                                            0LL);
    if ( !treasureDeviceIconLabel )
      goto LABEL_56;
    UIIconLabel__Set_41609428(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0

  if ( (byte_4184EA0 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1);
    byte_4184EA0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___ctor(
        BonusSelectSummonMsgInfoMenber___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BonusSelectSummonMsgInfoMenber___c___Set_b__4_0(
        BonusSelectSummonMsgInfoMenber___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}