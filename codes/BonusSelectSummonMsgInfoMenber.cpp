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

  if ( (byte_43516A2 & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_43516A2 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_B7076C(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0LL);
}


void __fastcall BonusSelectSummonMsgInfoMenber__Set(
        BonusSelectSummonMsgInfoMenber_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantExceedMaster_o *v8; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v10; // x1
  int32_t FrameType_31474608; // w0
  int32_t classId; // w22
  int32_t v13; // w21
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  UserServantMaster_o *v18; // x21
  System_Collections_Generic_List_UserServantEntity__o *v19; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v20; // x0
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x22
  Il2CppObject *v23; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  UserServantEntity_o *v32; // x0
  WarQuestSelectionMaster_o *v33; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v35; // x21
  __int64 v36; // x22
  ServantTreasureDvcMaster_o *v37; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+50h] [xbp-50h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_43516A3 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_B70694(&Method_System_Func_UserServantEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantEntity__int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&SvtClassAttri_TypeInfo);
    sub_B70694(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__);
    sub_B70694(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_43516A3 = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v8 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v7;
    *(_QWORD *)&v41.fields.fakeValue = v6;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v41, 0LL);
    if ( !v8 )
      goto LABEL_56;
    FrameType_31474608 = ServantExceedMaster__GetFrameType_31474608(v8, &rarity, (int32_t)TreasureDeviceInfo, 0, 0, 0LL);
    classId = servantEntity->fields.classId;
    v13 = FrameType_31474608;
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
    AtlasManager__SetClass(upperClassSprite, classId, v13, 0LL);
    servantFace = this->fields.servantFace;
    v17 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v17;
    *(_QWORD *)&v42.fields.fakeValue = v16;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v42, 0LL);
    if ( !servantFace )
      goto LABEL_56;
    ServantFaceIconComponent__Set_31478240(
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
    v18 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v18 )
      goto LABEL_56;
    if ( UserServantMaster__TryGetEntityListBySvtId(v18, &userServantList, (int32_t)TreasureDeviceInfo, 1, 0LL) )
    {
      v19 = userServantList;
      v20 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( (BYTE3(BonusSelectSummonMsgInfoMenber___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v20 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__4_0,
          v23,
          Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__,
          (const MethodInfo_29AD124 *)Method_System_Func_UserServantEntity__int___ctor__);
        v24 = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        v24->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v24->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_1CBFF6C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v32 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                     v31,
                                     (const MethodInfo_1CBC6C4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v32 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(v32, &tdInfo, -1, -1, 0, 0LL);
        if ( tdInfo )
        {
          TreasureDeviceInfo = this->fields.treasureDeviceIconLabel;
          if ( TreasureDeviceInfo )
          {
            UIIconLabel__Set_41432452(
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
        sub_B7076C(TreasureDeviceInfo, v10);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v33 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v36 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v35 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v37 = (ServantTreasureDvcMaster_o *)v33;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v36;
    *(_QWORD *)&v43.fields.fakeValue = v35;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v43, 0LL);
    if ( !v37 )
      goto LABEL_56;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v37,
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
    UIIconLabel__Set_41432452(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0

  if ( (byte_434ED43 & 1) == 0 )
  {
    sub_B70694(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_434ED43 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}