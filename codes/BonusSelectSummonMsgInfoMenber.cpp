void BonusSelectSummonMsgInfoMenber___ctor(BonusSelectSummonMsgInfoMenber_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BonusSelectSummonMsgInfoMenber__CheckAssert(BonusSelectSummonMsgInfoMenber_o *this, const MethodInfo *method)
{
  ;
}


void BonusSelectSummonMsgInfoMenber__Init(BonusSelectSummonMsgInfoMenber_o *this, const MethodInfo *method)
{
  UISprite_o *upperClassSprite; // x0

  if ( (byte_4D28B1E & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    byte_4D28B1E = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0) )
  {
    sub_1C942F0(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0);
}


void BonusSelectSummonMsgInfoMenber__Set(
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
  int32_t FrameType_43459292; // w21
  int32_t ClassId; // w0
  UISprite_o *upperClassSprite; // x23
  int32_t v14; // w22
  ServantFaceIconComponent_o *servantFace; // x21
  Il2CppObject *v16; // x21
  System_Collections_Generic_List_UserServantEntity__o *v17; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v18; // x0
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v20; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v32; // x21
  __int64 v33; // x22
  ServantTreasureDvcMaster_o *v34; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+58h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+6Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4D28B1F & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C94098(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__);
    sub_1C94098(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4D28B1F = 1;
  }
  rarity = 0;
  tdInfo = 0;
  userServantList = 0;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v8 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v38.fields.currentCryptoKey = v7;
    *(_QWORD *)&v38.fields.fakeValue = v6;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v38, 0);
    if ( !v8 )
      goto LABEL_33;
    FrameType_43459292 = ServantExceedMaster__GetFrameType_43459292(v8, &rarity, (int32_t)TreasureDeviceInfo, 0, 0, 0);
    ClassId = ServantEntity__GetClassId(servantEntity, 1, 0, 0);
    upperClassSprite = this->fields.upperClassSprite;
    v14 = ClassId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClass(upperClassSprite, v14, FrameType_43459292, 0, 0);
    servantFace = this->fields.servantFace;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                            servantEntity->fields.id,
                                            0);
    if ( !servantFace )
      goto LABEL_33;
    ServantFaceIconComponent__Set_41846260(
      servantFace,
      (int32_t)TreasureDeviceInfo,
      0,
      0,
      0,
      0,
      0,
      2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    v16 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                            servantEntity->fields.id,
                                            0);
    if ( !v16 )
      goto LABEL_33;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v16,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0) )
    {
      v17 = userServantList;
      v18 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v18 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v18->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v20, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
          (int32_t)_9__4_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v29 = System_Linq_Enumerable__FirstOrDefault_object_(
              v28,
              (const MethodInfo_31C4BAC *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v29 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v29,
                                                &tdInfo,
                                                -1,
                                                -1,
                                                0,
                                                0);
        if ( tdInfo )
        {
          TreasureDeviceInfo = this->fields.treasureDeviceIconLabel;
          if ( TreasureDeviceInfo )
          {
            UIIconLabel__Set_41867060(
              TreasureDeviceInfo,
              33,
              tdInfo->fields.lv,
              tdInfo->fields.maxLv,
              0,
              0,
              0,
              0,
              0,
              0,
              0);
            return;
          }
        }
LABEL_33:
        sub_1C942F0(TreasureDeviceInfo, v10);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v30 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v33 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v32 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v34 = (ServantTreasureDvcMaster_o *)v30;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v33;
    *(_QWORD *)&v39.fields.fakeValue = v32;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v39, 0);
    if ( !v34 )
      goto LABEL_33;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v34,
                                            (int32_t)TreasureDeviceInfo,
                                            1,
                                            0);
    if ( !TreasureDeviceInfo )
      goto LABEL_33;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcEntity__getLevelMax(
                                            (ServantTreasureDvcEntity_o *)TreasureDeviceInfo,
                                            0);
    if ( !treasureDeviceIconLabel )
      goto LABEL_33;
    UIIconLabel__Set_41867060(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0, 0, 0, 0, 0, 0);
  }
}


void BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28B20 & 1) == 0 )
  {
    sub_1C94098(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4D28B20 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonMsgInfoMenber___c___ctor(BonusSelectSummonMsgInfoMenber___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BonusSelectSummonMsgInfoMenber___c___Set_b__4_0(
        BonusSelectSummonMsgInfoMenber___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C942F0(this, 0);
  return entity->fields.treasureDeviceLv1;
}