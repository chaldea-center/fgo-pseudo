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

  if ( (byte_4A578C7 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A578C7 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_1B8880C(upperClassSprite, method);
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
  int32_t FrameType_39669872; // w21
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v29; // x21
  __int64 v30; // x22
  ServantTreasureDvcMaster_o *v31; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+48h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4A578C8 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1B885B0(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__);
    sub_1B885B0(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4A578C8 = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v8 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v7;
    *(_QWORD *)&v35.fields.fakeValue = v6;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
    if ( !v8 )
      goto LABEL_45;
    FrameType_39669872 = ServantExceedMaster__GetFrameType_39669872(v8, &rarity, (int32_t)TreasureDeviceInfo, 0, 0, 0LL);
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
    AtlasManager__SetClass(upperClassSprite, ClassId, FrameType_39669872, 0LL);
    servantFace = this->fields.servantFace;
    v16 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v15 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v16;
    *(_QWORD *)&v36.fields.fakeValue = v15;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
    if ( !servantFace )
      goto LABEL_45;
    ServantFaceIconComponent__Set_38217436(
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
        _9__4_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v21, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0LL);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v23, v24);
      }
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v26 = System_Linq_Enumerable__FirstOrDefault_object_(
              v25,
              (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v26 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v26,
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
            UIIconLabel__Set_38235604(
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
        sub_1B8880C(TreasureDeviceInfo, v10);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v27 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v30 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v29 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v31 = (ServantTreasureDvcMaster_o *)v27;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v30;
    *(_QWORD *)&v37.fields.fakeValue = v29;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
    if ( !v31 )
      goto LABEL_45;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v31,
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
    UIIconLabel__Set_38235604(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A578C9 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonMsgInfoMenber___c_TypeInfo);
    byte_4A578C9 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}