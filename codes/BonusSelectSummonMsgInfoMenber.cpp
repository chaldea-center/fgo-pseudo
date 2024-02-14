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

  if ( (byte_4214BEB & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    byte_4214BEB = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_B0D97C(upperClassSprite);
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
  int32_t FrameType_29620180; // w0
  int32_t classId; // w22
  int32_t v24; // w21
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  UserServantMaster_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_UserServantEntity__o *v32; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v33; // x0
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x22
  Il2CppObject *v36; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  UserServantEntity_o *v45; // x0
  WarQuestSelectionMaster_o *v46; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v48; // x21
  __int64 v49; // x22
  ServantTreasureDvcMaster_o *v50; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+50h] [xbp-50h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4214BEC & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, servantEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__int___ctor__, v11);
    sub_B0D8A4(&System_Func_UserServantEntity__int__TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v14);
    sub_B0D8A4(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v15);
    sub_B0D8A4(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v16);
    byte_4214BEC = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v20 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = v19;
    *(_QWORD *)&v54.fields.fakeValue = v18;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
    if ( !v20 )
      goto LABEL_56;
    FrameType_29620180 = ServantExceedMaster__GetFrameType_29620180(
                           v20,
                           &rarity,
                           (int32_t)TreasureDeviceInfo,
                           0,
                           0,
                           0LL);
    classId = servantEntity->fields.classId;
    v24 = FrameType_29620180;
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
    AtlasManager__SetClass(upperClassSprite, classId, v24, 0LL);
    servantFace = this->fields.servantFace;
    v28 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v27 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v55.fields.currentCryptoKey = v28;
    *(_QWORD *)&v55.fields.fakeValue = v27;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
    if ( !servantFace )
      goto LABEL_56;
    ServantFaceIconComponent__Set_29623744(
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
    v29 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v29 )
      goto LABEL_56;
    if ( UserServantMaster__TryGetEntityListBySvtId(v29, &userServantList, (int32_t)TreasureDeviceInfo, 1, 0LL) )
    {
      v32 = userServantList;
      v33 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( (BYTE3(BonusSelectSummonMsgInfoMenber___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v33 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_UserServantEntity__int__TypeInfo,
                                                                                    v30,
                                                                                    v31);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__4_0,
          v36,
          Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__,
          (const MethodInfo_2619564 *)Method_System_Func_UserServantEntity__int___ctor__);
        v37 = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        v37->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v37->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v45 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                     v44,
                                     (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v45 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(v45, &tdInfo, -1, -1, 0, 0LL);
        if ( tdInfo )
        {
          TreasureDeviceInfo = this->fields.treasureDeviceIconLabel;
          if ( TreasureDeviceInfo )
          {
            UIIconLabel__Set_41076120(
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
        sub_B0D97C(TreasureDeviceInfo);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v46 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v49 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v48 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v50 = (ServantTreasureDvcMaster_o *)v46;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v49;
    *(_QWORD *)&v56.fields.fakeValue = v48;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v56, 0LL);
    if ( !v50 )
      goto LABEL_56;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v50,
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
    UIIconLabel__Set_41076120(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0

  if ( (byte_4211DCF & 1) == 0 )
  {
    sub_B0D8A4(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1);
    byte_4211DCF = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return entity->fields.treasureDeviceLv1;
}