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

  if ( (byte_4C3F3EC & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    byte_4C3F3EC = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0) )
  {
    sub_1C372B4(upperClassSprite);
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
  int32_t FrameType_42684808; // w21
  int32_t ClassId; // w0
  UISprite_o *upperClassSprite; // x23
  int32_t v13; // w22
  ServantFaceIconComponent_o *servantFace; // x21
  Il2CppObject *v15; // x21
  System_Collections_Generic_List_UserServantEntity__o *v16; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v17; // x0
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v19; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v27; // x21
  __int64 v28; // x22
  ServantTreasureDvcMaster_o *v29; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+58h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+6Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4C3F3ED & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C37058(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__);
    sub_1C37058(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4C3F3ED = 1;
  }
  rarity = 0;
  tdInfo = 0;
  userServantList = 0;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v8 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v7;
    *(_QWORD *)&v33.fields.fakeValue = v6;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v33, 0);
    if ( !v8 )
      goto LABEL_33;
    FrameType_42684808 = ServantExceedMaster__GetFrameType_42684808(v8, &rarity, (int32_t)TreasureDeviceInfo, 0, 0, 0);
    ClassId = ServantEntity__GetClassId(servantEntity, 1, 0, 0);
    upperClassSprite = this->fields.upperClassSprite;
    v13 = ClassId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClass(upperClassSprite, v13, FrameType_42684808, 0, 0);
    servantFace = this->fields.servantFace;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                            servantEntity->fields.id,
                                            0);
    if ( !servantFace )
      goto LABEL_33;
    ServantFaceIconComponent__Set_41006624(
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
    v15 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                            servantEntity->fields.id,
                                            0);
    if ( !v15 )
      goto LABEL_33;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v15,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0) )
    {
      v16 = userServantList;
      v17 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v17 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v17->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v17->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v19, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v21, v22);
      }
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v24 = System_Linq_Enumerable__FirstOrDefault_object_(
              v23,
              (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v24 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v24,
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
            UIIconLabel__Set_41110308(
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
        sub_1C372B4(TreasureDeviceInfo);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v25 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v28 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v27 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v29 = (ServantTreasureDvcMaster_o *)v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v28;
    *(_QWORD *)&v34.fields.fakeValue = v27;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v34, 0);
    if ( !v29 )
      goto LABEL_33;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v29,
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
    UIIconLabel__Set_41110308(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0, 0, 0, 0, 0, 0);
  }
}


void BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F3EE & 1) == 0 )
  {
    sub_1C37058(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4C3F3EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return entity->fields.treasureDeviceLv1;
}