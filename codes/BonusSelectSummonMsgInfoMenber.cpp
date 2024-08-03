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

  if ( (byte_49F8BF9 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49F8BF9 = 1;
  }
  upperClassSprite = this->fields.upperClassSprite;
  if ( !upperClassSprite
    || (UISprite__set_spriteName(upperClassSprite, string_TypeInfo->static_fields->Empty, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.servantFace) == 0LL)
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)upperClassSprite, 0LL),
        (upperClassSprite = (UISprite_o *)this->fields.treasureDeviceIconLabel) == 0LL) )
  {
    sub_1B64324(upperClassSprite);
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
  int32_t FrameType_39340536; // w21
  int32_t ClassId; // w22
  UISprite_o *upperClassSprite; // x23
  ServantFaceIconComponent_o *servantFace; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  Il2CppObject *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_UserServantEntity__o *v30; // x21
  BonusSelectSummonMsgInfoMenber___c_c *v31; // x0
  System_Func_object__int__o *_9__4_0; // x22
  Il2CppObject *v33; // x23
  struct BonusSelectSummonMsgInfoMenber___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x19
  __int64 v41; // x21
  __int64 v42; // x22
  ServantTreasureDvcMaster_o *v43; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+48h] [xbp-58h] BYREF
  int32_t rarity; // [xsp+5Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_49F8BFA & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, servantEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1B640C8(&System_Func_UserServantEntity__int__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v13);
    sub_1B640C8(&Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, v14);
    sub_1B640C8(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v15);
    byte_49F8BFA = 1;
  }
  rarity = 0;
  tdInfo = 0LL;
  userServantList = 0LL;
  if ( servantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v18 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v17 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v19 = (ServantExceedMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v18;
    *(_QWORD *)&v47.fields.fakeValue = v17;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
    if ( !v19 )
      goto LABEL_45;
    FrameType_39340536 = ServantExceedMaster__GetFrameType_39340536(
                           v19,
                           &rarity,
                           (int32_t)TreasureDeviceInfo,
                           0,
                           0,
                           0LL);
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
    AtlasManager__SetClass(upperClassSprite, ClassId, FrameType_39340536, 0LL);
    servantFace = this->fields.servantFace;
    v26 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v25 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v26;
    *(_QWORD *)&v48.fields.fakeValue = v25;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v48, 0LL);
    if ( !servantFace )
      goto LABEL_45;
    ServantFaceIconComponent__Set_37902064(
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
    v27 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                            servantEntity->fields.id,
                                            0LL);
    if ( !v27 )
      goto LABEL_45;
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)v27,
           &userServantList,
           (int32_t)TreasureDeviceInfo,
           1,
           0LL) )
    {
      v30 = userServantList;
      v31 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      if ( !BonusSelectSummonMsgInfoMenber___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfoMenber___c_TypeInfo);
        v31 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v31->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = BonusSelectSummonMsgInfoMenber___c_TypeInfo;
        }
        v33 = (Il2CppObject *)v31->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_UserServantEntity__int__TypeInfo, v28, v29);
        System_Func_object__int____ctor(_9__4_0, v33, Method_BonusSelectSummonMsgInfoMenber___c__Set_b__4_0__, 0LL);
        static_fields = BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_UserServantEntity__int__o *)_9__4_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v35, v36);
      }
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                   (System_Func_TSource__TKey__o *)_9__4_0,
                                                                   (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
      v38 = System_Linq_Enumerable__FirstOrDefault_object_(
              v37,
              (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
      if ( v38 )
      {
        TreasureDeviceInfo = (UIIconLabel_o *)UserServantEntity__getTreasureDeviceInfo(
                                                (UserServantEntity_o *)v38,
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
            UIIconLabel__Set_37921148(
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
        sub_1B64324(TreasureDeviceInfo);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    v42 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v41 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v43 = (ServantTreasureDvcMaster_o *)v39;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v42;
    *(_QWORD *)&v49.fields.fakeValue = v41;
    TreasureDeviceInfo = (UIIconLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49, 0LL);
    if ( !v43 )
      goto LABEL_45;
    TreasureDeviceInfo = (UIIconLabel_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                            v43,
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
    UIIconLabel__Set_37921148(treasureDeviceIconLabel, 33, 1, (int32_t)TreasureDeviceInfo, 0, 0LL, 0, 0, 0, 0LL);
  }
}


void __fastcall BonusSelectSummonMsgInfoMenber___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8BFB & 1) == 0 )
  {
    sub_1B640C8(&BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1);
    byte_49F8BFB = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BonusSelectSummonMsgInfoMenber___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonMsgInfoMenber___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BonusSelectSummonMsgInfoMenber___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.treasureDeviceLv1;
}