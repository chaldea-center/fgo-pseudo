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

  if ( (byte_4B40EF1 & 1) == 0 )
  {
    sub_1BDB878(&string_TypeInfo, method);
    byte_4B40EF1 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_1BDBAD4(upperClassSprite, method);
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
  Il2CppObject *Master_object; // x0
  __int64 v17; // x22
  __int64 v18; // x23
  ServantExceedMaster_o *v19; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v21; // x1
  int32_t FrameType_41632636; // w21
  int32_t ClassId; // w22
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  Il2CppObject *v28; // x21
  System_Collections_Generic_List_UserServantEntity__o *v29; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v30; // x0
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v32; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v40; // x21
  __int64 v41; // x22
  ServantTreasureDvcMaster_o *v42; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+58h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+6Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B40EF2 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, servantEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantExceedMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1BDB878(&System_Func_UserServantEntity__int__TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BDB878(&SvtClassAttri_TypeInfo, v13);
    sub_1BDB878(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v14);
    sub_1BDB878(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v15);
    byte_4B40EF2 = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v18 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v17 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v19 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = v18;
    *(_QWORD *)&v46.fields.fakeValue = v17;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v46, 0LL);
    if ( !v19 )
      goto LABEL_45;
    FrameType_41632636 = ServantExceedMaster__GetFrameType_41632636(
                           v19,
                           &rarity,
                           (int32_t)TreasureDeviceInfo,
                           0,
                           0,
                           0LL);
    ClassId = ServantEntity__GetClassId(servantEntity, 1, 0, 0LL);
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
    AtlasManager__SetClass(upperClassSprite, ClassId, FrameType_41632636, 0, 0LL);
    servantFace = this->fields.servantFace;
    v27 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v26 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v27;
    *(_QWORD *)&v47.fields.fakeValue = v26;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v47, 0LL);
    if ( !servantFace )
      goto LABEL_45;
    ServantFaceIconComponent__Set_40019528(
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
      0,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v28 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v28 )
      goto LABEL_45;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v28,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0LL) )
    {
      v29 = userServantList;
      v30 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v30 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v30->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v32, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0LL);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v34, v35);
      }
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v37 = System_Linq_Enumerable__FirstOrDefault_object_(
              v36,
              (const MethodInfo_3058594 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v37 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v37,
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
            UIIconLabel__Set_40036752(
              TreasureDeviceInfo,
              33,
              tdInfo->fields.lv,
              tdInfo->fields.maxLv,
              0,
              0LL,
              0,
              0,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_45:
        sub_1BDBAD4(TreasureDeviceInfo, v21);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v38 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v41 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v40 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v42 = (ServantTreasureDvcMaster_o *)v38;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v41;
    *(_QWORD *)&v48.fields.fakeValue = v40;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v48, 0LL);
    if ( !v42 )
      goto LABEL_45;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v42,
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
    UIIconLabel__Set_40036752(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B40EF3 & 1) == 0 )
  {
    sub_1BDB878(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1);
    byte_4B40EF3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}