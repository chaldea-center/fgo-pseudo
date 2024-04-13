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
  int v2; // w2
  __int64 v3; // x3
  UISprite_o *upperClassSprite; // x0

  if ( (byte_42E8667 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8667 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_B5D69C(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0LL);
}


void __fastcall BonusSelectSummonMsgInfoMenber__Set(
        BonusSelectSummonMsgInfoMenber_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v43; // x22
  __int64 v44; // x23
  ServantExceedMaster_o *v45; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v47; // x1
  int32_t FrameType_30843000; // w0
  int32_t classId; // w22
  int32_t v50; // w21
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v53; // x22
  __int64 v54; // x23
  UserServantMaster_o *v55; // x21
  System_Collections_Generic_List_UserServantEntity__o *v56; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v57; // x0
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x22
  Il2CppObject *v60; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  UserServantEntity_o *v69; // x0
  WarQuestSelectionMaster_o *v70; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v72; // x21
  __int64 v73; // x22
  ServantTreasureDvcMaster_o *v74; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+50h] [xbp-50h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_42E8668 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)servantEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__int___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_UserServantEntity__int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v36, v37, v38);
    sub_B5D5C4(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v39, v40, v41);
    byte_42E8668 = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v44 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v43 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v45 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v44;
    *(_QWORD *)&v78.fields.fakeValue = v43;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v78, 0LL);
    if ( !v45 )
      goto LABEL_56;
    FrameType_30843000 = ServantExceedMaster__GetFrameType_30843000(
                           v45,
                           &rarity,
                           (int32_t)TreasureDeviceInfo,
                           0,
                           0,
                           0LL);
    classId = servantEntity->fields.classId;
    v50 = FrameType_30843000;
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
    AtlasManager__SetClass(upperClassSprite, classId, v50, 0LL);
    servantFace = this->fields.servantFace;
    v54 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v53 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v79.fields.currentCryptoKey = v54;
    *(_QWORD *)&v79.fields.fakeValue = v53;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v79, 0LL);
    if ( !servantFace )
      goto LABEL_56;
    ServantFaceIconComponent__Set_30846632(
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
    v55 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v55 )
      goto LABEL_56;
    if ( UserServantMaster__TryGetEntityListBySvtId(v55, &userServantList, (int32_t)TreasureDeviceInfo, 1, 0LL) )
    {
      v56 = userServantList;
      v57 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( (BYTE3(BonusSelectSummonMsgInfoMenber___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v57 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      static_fields = v57->static_fields;
      _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        }
        v60 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__4_0,
          v60,
          Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_UserServantEntity__int___ctor__);
        v61 = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        v61->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v61->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v56,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v69 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                     v68,
                                     (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v69 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(v69, &tdInfo, -1, -1, 0, 0LL);
        if ( tdInfo )
        {
          TreasureDeviceInfo = this->fields.treasureDeviceIconLabel;
          if ( TreasureDeviceInfo )
          {
            UIIconLabel__Set_41886452(
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
        sub_B5D69C(TreasureDeviceInfo, v47);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v70 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v73 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v72 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v74 = (ServantTreasureDvcMaster_o *)v70;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v80.fields.currentCryptoKey = v73;
    *(_QWORD *)&v80.fields.fakeValue = v72;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
    if ( !v74 )
      goto LABEL_56;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v74,
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
    UIIconLabel__Set_41886452(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E28 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1, v2, v3);
    byte_42E5E28 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}