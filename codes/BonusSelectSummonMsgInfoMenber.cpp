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

  if ( (byte_4BD8B10 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    byte_4BD8B10 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_1C22094(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0LL);
}


void __fastcall BonusSelectSummonMsgInfoMenber__Set(
        BonusSelectSummonMsgInfoMenber_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantExceedMaster_o *v8; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v10; // x1
  int32_t FrameType_40935596; // w21
  int32_t ClassId; // w22
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  Il2CppObject *v17; // x21
  System_Collections_Generic_List_UserServantEntity__o *v18; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v19; // x0
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v21; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v33; // x21
  __int64 v34; // x22
  ServantTreasureDvcMaster_o *v35; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+58h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+6Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4BD8B11 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C21E38(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&SvtClassAttri_TypeInfo);
    sub_1C21E38(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__);
    sub_1C21E38(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4BD8B11 = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v8 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v7;
    *(_QWORD *)&v39.fields.fakeValue = v6;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v39, 0LL);
    if ( !v8 )
      goto LABEL_45;
    FrameType_40935596 = ServantExceedMaster__GetFrameType_40935596(v8, &rarity, (int32_t)TreasureDeviceInfo, 0, 0, 0LL);
    ClassId = ServantEntity__GetClassId(servantEntity, 1, 0LL);
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
    {
      ClassId = 1004;
    }
    else
    {
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
        ClassId = 1005;
    }
    upperClassSprite = this->fields.upperClassSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClass(upperClassSprite, ClassId, FrameType_40935596, 0LL);
    servantFace = this->fields.servantFace;
    v16 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v15 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v16;
    *(_QWORD *)&v40.fields.fakeValue = v15;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v40, 0LL);
    if ( !servantFace )
      goto LABEL_45;
    ServantFaceIconComponent__Set_39461076(
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
      0LL,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v17 )
      goto LABEL_45;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v17,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0LL) )
    {
      v18 = userServantList;
      v19 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v19 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v19->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v19->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v21, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0LL);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
          (int64_t)_9__4_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v30 = System_Linq_Enumerable__FirstOrDefault_object_(
              v29,
              (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v30 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v30,
                                                &tdInfo,
                                                -1,
                                                -1,
                                                0,
                                                0LL);
        if ( tdInfo )
        {
          TreasureDeviceInfo = this->fields.treasureDeviceIconLabel;
          if ( TreasureDeviceInfo )
          {
            UIIconLabel__Set_39480396(
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
LABEL_45:
        sub_1C22094(TreasureDeviceInfo, v10);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v31 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v34 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v33 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v35 = (ServantTreasureDvcMaster_o *)v31;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v34;
    *(_QWORD *)&v41.fields.fakeValue = v33;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v41, 0LL);
    if ( !v35 )
      goto LABEL_45;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v35,
                                            (int32_t)TreasureDeviceInfo,
                                            1,
                                            0LL);
    if ( !TreasureDeviceInfo )
      goto LABEL_45;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcEntity__getLevelMax(
                                            (ServantTreasureDvcEntity_o *)TreasureDeviceInfo,
                                            0LL);
    if ( !treasureDeviceIconLabel )
      goto LABEL_45;
    UIIconLabel__Set_39480396(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8B12 & 1) == 0 )
  {
    sub_1C21E38(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4BD8B12 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}