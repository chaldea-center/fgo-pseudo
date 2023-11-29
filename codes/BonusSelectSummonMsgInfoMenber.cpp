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
  ServantFaceIconComponent_o *servantFace; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x0

  if ( (byte_40FB0FC & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    byte_40FB0FC = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (servantFace = this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear(servantFace, 0LL),
        (treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UIIconLabel__Clear(treasureDeviceIconLabel, 0LL);
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
  int32_t v21; // w0
  int32_t FrameType_30699216; // w0
  int32_t classId; // w22
  int32_t v24; // w21
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  UserServantMaster_o *v30; // x21
  int32_t v31; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_UserServantEntity__o *v36; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v37; // x0
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x22
  Il2CppObject *v40; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  UserServantEntity_o *v49; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x0
  WarQuestSelectionMaster_o *v51; // x0
  UIIconLabel_o *v52; // x19
  __int64 v53; // x21
  __int64 v54; // x22
  ServantTreasureDvcMaster_o *v55; // x20
  int32_t v56; // w0
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  int32_t LevelMax; // w0
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+50h] [xbp-50h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_40FB0FD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, servantEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_B16FFC(&Method_System_Func_UserServantEntity__int___ctor__, v11);
    sub_B16FFC(&System_Func_UserServantEntity__int__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v14);
    sub_B16FFC(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v15);
    sub_B16FFC(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v16);
    byte_40FB0FD = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v20 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v62.fields.currentCryptoKey = v19;
    *(_QWORD *)&v62.fields.fakeValue = v18;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
    if ( !v20 )
      goto LABEL_56;
    FrameType_30699216 = ServantExceedMaster__GetFrameType_30699216(v20, &rarity, v21, 0, 0, 0LL);
    classId = servantEntity->fields.classId;
    v24 = FrameType_30699216;
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
    *(_QWORD *)&v63.fields.currentCryptoKey = v28;
    *(_QWORD *)&v63.fields.fakeValue = v27;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
    if ( !servantFace )
      goto LABEL_56;
    ServantFaceIconComponent__Set_30702780(servantFace, v29, 0, 0, 0, 0LL, 0LL, 2, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v30 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(servantEntity->fields.id, 0LL);
    if ( !v30 )
      goto LABEL_56;
    if ( UserServantMaster__TryGetEntityListBySvtId(v30, &userServantList, v31, 1, 0LL) )
    {
      v36 = userServantList;
      v37 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( (BYTE3(BonusSelectSummonMsgInfoMenber___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v37 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_UserServantEntity__int__TypeInfo,
                                                                                    v32,
                                                                                    v33,
                                                                                    v34,
                                                                                    v35);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__4_0,
          v40,
          Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantEntity__int___ctor__);
        v41 = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        v41->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v41->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v49 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                     v48,
                                     (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v49 )
      {
        UserServantEntity__getTreasureDeviceInfo(v49, &tdInfo, -1, -1, 0, 0LL);
        if ( tdInfo )
        {
          treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
          if ( treasureDeviceIconLabel )
          {
            UIIconLabel__Set_40377052(
              treasureDeviceIconLabel,
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
        sub_B170D4();
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v51 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    v52 = this->fields.treasureDeviceIconLabel;
    v54 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v53 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v55 = (ServantTreasureDvcMaster_o *)v51;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v54;
    *(_QWORD *)&v64.fields.fakeValue = v53;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
    if ( !v55 )
      goto LABEL_56;
    EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v55, v56, 1, 0LL);
    if ( !EntityFromSvtIdOnly )
      goto LABEL_56;
    LevelMax = ServantTreasureDvcEntity__getLevelMax(EntityFromSvtIdOnly, 0LL);
    if ( !v52 )
      goto LABEL_56;
    UIIconLabel__Set_40377052(v52, 33, 1, LevelMax, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7098 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1);
    byte_40F7098 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.treasureDeviceLv1;
}