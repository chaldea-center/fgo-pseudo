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
  __int64 v2; // x2
  UISprite_o *upperClassSprite; // x0

  if ( (byte_4B12854 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B12854 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_1BCAA3C(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0LL);
}


void __fastcall BonusSelectSummonMsgInfoMenber__Set(
        BonusSelectSummonMsgInfoMenber_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  __int64 v29; // x22
  __int64 v30; // x23
  ServantExceedMaster_o *v31; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v33; // x1
  int32_t FrameType_40396588; // w21
  __int64 v35; // x1
  int32_t ClassId; // w22
  __int64 v37; // x1
  UISprite_o *upperClassSprite; // x23
  __int64 v39; // x1
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v41; // x22
  __int64 v42; // x23
  __int64 v43; // x1
  Il2CppObject *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_List_UserServantEntity__o *v48; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v49; // x0
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v51; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v64; // x21
  __int64 v65; // x22
  ServantTreasureDvcMaster_o *v66; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+48h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4B12855 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, servantEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v15, v16);
    sub_1BCA7E0(&System_Func_UserServantEntity__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v23, v24);
    sub_1BCA7E0(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v25, v26);
    byte_4B12855 = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantEntity);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v30 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v29 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v31 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    *(_QWORD *)&v70.fields.currentCryptoKey = v30;
    *(_QWORD *)&v70.fields.fakeValue = v29;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
    if ( !v31 )
      goto LABEL_45;
    FrameType_40396588 = ServantExceedMaster__GetFrameType_40396588(
                           v31,
                           &rarity,
                           (int32_t)TreasureDeviceInfo,
                           0,
                           0,
                           0LL);
    ClassId = ServantEntity__GetClassId(servantEntity, 1, 0LL);
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v35);
    if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
    {
      ClassId = 1004;
    }
    else
    {
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v37);
      if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
        ClassId = 1005;
    }
    upperClassSprite = this->fields.upperClassSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
    AtlasManager__SetClass(upperClassSprite, ClassId, FrameType_40396588, 0LL);
    servantFace = this->fields.servantFace;
    v42 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v41 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    *(_QWORD *)&v71.fields.currentCryptoKey = v42;
    *(_QWORD *)&v71.fields.fakeValue = v41;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
    if ( !servantFace )
      goto LABEL_45;
    ServantFaceIconComponent__Set_38928428(
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
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
    v44 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v44 )
      goto LABEL_45;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v44,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0LL) )
    {
      v48 = userServantList;
      v49 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo, v45);
        v49 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v49->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49, v45);
          v49 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v49->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantEntity__int__TypeInfo, v45, v46, v47);
        System_Func_object__int____ctor(_9__4_0, v51, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0LL);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
          (int64_t)_9__4_0,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
      }
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v60 = System_Linq_Enumerable__FirstOrDefault_object_(
              v59,
              (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v60 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v60,
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
            UIIconLabel__Set_38947284(
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
        sub_1BCAA3C(TreasureDeviceInfo, v33);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
    v61 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v65 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v64 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v66 = (ServantTreasureDvcMaster_o *)v61;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
    *(_QWORD *)&v72.fields.currentCryptoKey = v65;
    *(_QWORD *)&v72.fields.fakeValue = v64;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v72, 0LL);
    if ( !v66 )
      goto LABEL_45;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v66,
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
    UIIconLabel__Set_38947284(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12856 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1, v2);
    byte_4B12856 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}