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

  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, **(System_String_o ***)(qword_594C0B8 + 184), 0),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0) )
  {
    sub_21FFECC(upperClassSprite, method);
  }
  UIIconLabel__Clear((UIIconLabel_o *)upperClassSprite, 0);
}


void BonusSelectSummonMsgInfoMenber__Set(
        BonusSelectSummonMsgInfoMenber_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x22
  __int64 v9; // x23
  ServantExceedMaster_o *v10; // x21
  UIIconLabel_o *TreasureDeviceInfo; // x0
  __int64 v12; // x1
  int32_t FrameType_49644120; // w21
  int32_t ClassId; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *upperClassSprite; // x23
  int32_t v18; // w22
  ServantFaceIconComponent_o *servantFace; // x21
  Il2CppObject *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_UserServantEntity__o *v23; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v24; // x0
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v27; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x21
  __int64 v41; // x22
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  ServantTreasureDvcMaster_o *v43; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+60h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+68h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+7Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_593484F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_21FFC50(&System_Func_UserServantEntity__int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__);
    sub_21FFC50(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_593484F = 1;
  }
  rarity = 0;
  tdInfo = 0;
  userServantList = 0;
  if ( servantEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantEntity, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v10 = (ServantExceedMaster_o *)Master_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    *(_QWORD *)&v47.fields.currentCryptoKey = v8;
    *(_QWORD *)&v47.fields.fakeValue = v9;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v47, 0);
    if ( !v10 )
      goto LABEL_33;
    FrameType_49644120 = ServantExceedMaster__GetFrameType_49644120(v10, &rarity, (int32_t)TreasureDeviceInfo, 0, 0, 0);
    ClassId = ServantEntity__GetClassId(servantEntity, 1, 0, 0);
    upperClassSprite = this->fields.upperClassSprite;
    v18 = ClassId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v16);
    AtlasManager__SetClass(upperClassSprite, v18, FrameType_49644120, 0, 0);
    servantFace = this->fields.servantFace;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                            servantEntity->fields.id,
                                            0);
    if ( !servantFace )
      goto LABEL_33;
    ServantFaceIconComponent__Set_48021296(
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
      1,
      0);
    v20 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                            servantEntity->fields.id,
                                            0);
    if ( !v20 )
      goto LABEL_33;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v20,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0) )
    {
      v23 = userServantList;
      v24 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !*(&BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo, v21, v22);
        v24 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v21, v22);
          static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v27, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0);
        v28 = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        v28->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__4_0, (int32_t)_9__4_0, v29, v30, v31, v32, v33, v34);
      }
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v36 = System_Linq_Enumerable__FirstOrDefault_object_(
              v35,
              (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v36 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v36,
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
            UIIconLabel__Set_48040364(
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
        sub_21FFECC(TreasureDeviceInfo, v12);
      }
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
    v37 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    v40 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v41 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v43 = (ServantTreasureDvcMaster_o *)v37;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39);
    *(_QWORD *)&v48.fields.currentCryptoKey = v40;
    *(_QWORD *)&v48.fields.fakeValue = v41;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v48, 0);
    if ( !v43 )
      goto LABEL_33;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v43,
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
    UIIconLabel__Set_48040364(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0, 0, 0, 0, 0, 0);
  }
}


void BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934850 & 1) == 0 )
  {
    sub_21FFC50(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_5934850 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return entity->fields.treasureDeviceLv1;
}