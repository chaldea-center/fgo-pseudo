void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4A063C3 & 1) == 0 )
  {
    sub_1B686D4(&ServantStatusNpComponent_TypeInfo, v1);
    byte_4A063C3 = 1;
  }
  static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DETAIL_FONT_SIZE = xmmword_BA7580;
  *(_QWORD *)&static_fields->MULTI_NP_POS_Y = 0xC1300000C2480000LL;
  *(_QWORD *)&static_fields->MASK_DEFAULT_HEIGHT = 0x21C000000FCLL;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A063C2 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4A063C2 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_3374AEC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v4;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.costumeIdHash, (int32_t)v4, v5, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v11; // w21
  int32_t commandLimitCountAdjust; // w21
  Il2CppObject *MasterData_object; // x20

  v4 = this;
  if ( (byte_4A063C1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v6);
    this = (ServantStatusNpComponent_o *)sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A063C1 = 1;
  }
  if ( !item )
    goto LABEL_23;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0LL);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v11 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0 || LimitCountByImageLimitCostumeIn == commandLimitCountFix )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_23;
    commandLimitCountFix = v11;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v11,
            (const MethodInfo_33751E0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v4->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
  if ( (commandLimitCountAdjust & 0x80000000) != 0 || commandLimitCountFix <= commandLimitCountAdjust )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_23;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_33751E0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0LL),
        !MasterData_object) )
  {
LABEL_23:
    sub_1B68930(this, item);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           (int32_t)this,
           commandLimitCountAdjust,
           0LL);
}


void __fastcall ServantStatusNpComponent__ModifyCommandCard(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x21
  ServantStatusNpComponent_o *v4; // x19
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
  int32_t SvtId; // w20
  const MethodInfo *v16; // x2
  int32_t CommandLimitCount; // w22
  struct BattleCommandData_o *commandCardData; // x23
  int32_t v19; // w21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *commandCardPrefab; // x20
  ServantStatusNpComponent_o *v22; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v27; // x1
  __int64 v28; // x1
  ServantStatusNpComponent_o *v29; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w24
  const MethodInfo *v34; // x2
  int32_t v35; // w25
  int32_t DispLimitCount; // w0
  int32_t cardType; // w26
  int32_t v38; // w21
  BattleCommandData_o *v39; // x27
  int32_t v40; // w2
  int32_t v41; // w3
  struct BattleCommandData_o *v42; // x25
  Il2CppObject *v43; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  ServantStatusBattleListViewItem_o *p_commandCardComponent; // x19
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_4A063C0 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandData_TypeInfo, item);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B686D4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v6);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v8);
    sub_1B686D4(&NGUITools_TypeInfo, v9);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B686D4(&StringLiteral_15064/*"Unlit/Transparent Colored"*/, v13);
    this = (ServantStatusNpComponent_o *)sub_1B686D4(&StringLiteral_4588/*"CommandCard"*/, v14);
    byte_4A063C0 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v16);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCount(v3, 1, 0LL);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v19 = (int)this;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v19, 0LL);
            if ( MasterData_object )
            {
              commandCardData->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                        (ServantLimitImageMaster_o *)MasterData_object,
                                                        SvtId,
                                                        (int32_t)this,
                                                        0LL);
              this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
              if ( this )
              {
                BattleCommandComponent__setData(
                  (BattleCommandComponent_o *)this,
                  v4->fields.commandCardData,
                  0LL,
                  0,
                  1,
                  0,
                  1,
                  0LL);
                this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
                if ( this )
                {
                  BattleCommandComponent__updateView(
                    (BattleCommandComponent_o *)this,
                    1,
                    0,
                    1,
                    0,
                    v4->fields.isCharaHide,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_1B68930(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_38;
    v22 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0LL);
    if ( !this )
      goto LABEL_38;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v22, (System_String_o *)StringLiteral_4588/*"CommandCard"*/, 0LL);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    if ( !byte_4A03901 )
    {
      sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v27);
      byte_4A03901 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4A03907 )
    {
      sub_1B686D4(&UnityEngine_Quaternion_TypeInfo, v28);
      byte_4A03907 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v50.fields.x = x;
    v50.fields.y = y;
    v50.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v50, 0LL);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v22,
      (const MethodInfo_2E98868 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v22,
                                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v29 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    v29[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v29[1].fields.explanationLabel, (int32_t)gameObject, v31, v32);
    if ( !v3 )
      goto LABEL_38;
    v33 = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
    v35 = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v34);
    DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(v3, 1, 0LL);
    cardType = v4->fields.cardType;
    v38 = DispLimitCount;
    v39 = (BattleCommandData_o *)sub_1B68920(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_42927492(v39, cardType, v33, v35, 0, -1, 0LL);
    v4->fields.commandCardData = v39;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.commandCardData, (int32_t)v39, v40, v41);
    v42 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v43 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v38, 0LL);
    if ( !v43 )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           (ServantLimitImageMaster_o *)v43,
                                           v33,
                                           (int32_t)this,
                                           0LL);
    if ( !v42 )
      goto LABEL_38;
    v42->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_38;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_38;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v29, (BattleCommandData_o *)item, 0LL, 0, 1, 0, 1, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v29, (System_String_o *)StringLiteral_15064/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v29, 1, 0, 1, 0, v4->fields.isCharaHide, 0LL);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v29;
    p_commandCardComponent = (ServantStatusBattleListViewItem_o *)&v4->fields.commandCardComponent;
    sub_1B68678(p_commandCardComponent, (int32_t)v29, v46, v47);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue2B;
    if ( !this )
      goto LABEL_38;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v22, layer, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusNpComponent__Set(
        ServantStatusNpComponent_o *this,
        int32_t idx,
        TreasureDvcInfo_o *tdInfo,
        ServantStatusListViewItem_o *item,
        int32_t tdId,
        bool multiFlg,
        int32_t condLimitCount,
        System_String_o *title,
        System_String_o *closedMessage,
        int32_t isCharaHide,
        const MethodInfo *method)
{
  int32_t v16; // w28
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v36; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  __int64 v39; // x8
  __int64 v40; // x0
  TreasureDvcMaster_o *v41; // x22
  __int64 v42; // x23
  __int64 v43; // x24
  struct TreasureDvcEntity_o *v44; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  __int64 v49; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t DispLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w29
  Il2CppObject *Master_object; // x0
  __int64 v54; // x24
  __int64 v55; // x25
  ServantLimitImageMaster_o *v56; // x23
  int32_t ServantImageLimitSealAfter; // w23
  bool v58; // w24
  UILabel_o *rubyLabel; // x22
  struct UILabel_o *v60; // x22
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v63; // x8
  struct UILabel_o *npRankLabel; // x22
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v66; // x8
  struct UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v69; // x8
  UILabel_o *npLevelLabel; // x22
  System_String_o *v71; // x23
  System_String_o *v72; // x0
  UILabel_o *maxGuageLabel; // x22
  System_String_o *v74; // x23
  Il2CppObject *v75; // x0
  UIWidget_o *explanationLabel; // x22
  __int64 v77; // x9
  __int64 v78; // x0
  __int64 v79; // x0
  TreasureDvcLvEntity_o *v80; // x0
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v82; // x0
  UILabel_o *v83; // x23
  int32_t v84; // w0
  __int64 v85; // x22
  __int64 v86; // x23
  int32_t v87; // w21
  int32_t v88; // w0
  int32_t *p_cardId; // x8
  int32_t v90; // w9
  struct UILabel_o *v91; // x8
  int32_t mHeight; // w22
  int32_t monitor_high; // w8
  struct UILabel_o *v94; // x9
  int32_t v95; // w22
  int32_t v96; // w29
  UILabel_o *condLabel; // x22
  float MULTI_NP_POS_Y; // s0
  int v99; // w22
  int v100; // w28
  __int64 v101; // x0
  __int64 v102; // x0
  Il2CppObject *v103; // x0
  __int64 v104; // x23
  __int64 v105; // x24
  ServantTreasureDeviceReleaseMaster_o *v106; // x22
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  int32_t v110; // w21
  int v111; // w21
  int v112; // w8
  struct UISprite_array *v113; // x8
  __int64 v114; // x22
  int v115; // w23
  int v116; // w9
  UISprite_o *v117; // x21
  System_String_o *v118; // x0
  int v119; // [xsp+8h] [xbp-88h]
  int32_t v120; // [xsp+Ch] [xbp-84h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int v123; // [xsp+24h] [xbp-6Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  v16 = idx;
  if ( (byte_4A063BF & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&idx);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v18);
    sub_1B686D4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v19);
    sub_1B686D4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v20);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v21);
    sub_1B686D4(&DataManager_TypeInfo, v22);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_1B686D4(&ImageLimitCount_TypeInfo, v24);
    sub_1B686D4(&LocalizationManager_TypeInfo, v25);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1B686D4(&ServantStatusNpComponent_TypeInfo, v27);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28);
    sub_1B686D4(&StringLiteral_20297/*"img_npgage_"*/, v29);
    sub_1B686D4(&StringLiteral_11838/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v30);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v31);
    sub_1B686D4(&StringLiteral_20298/*"img_npgage_bg"*/, v32);
    sub_1B686D4(&StringLiteral_1/*""*/, v33);
    byte_4A063BF = 1;
  }
  entity = 0LL;
  v123 = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_16;
  value = title;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v36 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v36 >= max_length )
      break;
    if ( (unsigned int)v36 >= max_length )
LABEL_166:
      sub_1B68938(nameLabel, *(_QWORD *)&idx);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v36];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20298/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v36;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  v119 = v16;
  v120 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_16;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0LL);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1BBA5B0(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1BBA5B0(v40);
  nameLabel = **(UILabel_o ***)(v40 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_16;
  v41 = (TreasureDvcMaster_o *)nameLabel;
  v43 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v42 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v125.fields.currentCryptoKey = v43;
  *(_QWORD *)&v125.fields.fakeValue = v42;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v125, 0LL);
  if ( !v41 )
    goto LABEL_16;
  v44 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v41, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v44;
  p_tdEntity = &this->fields.tdEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.tdEntity, (int32_t)v44, v46, v47);
  if ( !this->fields.tdEntity )
    return;
  v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
    v48 = sub_1BBA5B0(v48);
  v49 = *(_QWORD *)(*(_QWORD *)(v48 + 192) + 16LL);
  if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
    v49 = sub_1BBA5B0(v49);
  nameLabel = **(UILabel_o ***)(v49 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v55 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v54 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v56 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v126.fields.currentCryptoKey = v55;
  *(_QWORD *)&v126.fields.fakeValue = v54;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v126, 0LL);
  if ( !v56 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v56,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                             ServantEntity->fields.id,
                             0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  v58 = multiFlg;
  ServantLimitAddMaster__TryGetEntity(
    (ServantLimitAddMaster_o *)MasterData_object,
    &entity,
    (int32_t)nameLabel,
    ServantImageLimitSealAfter,
    0LL);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0LL);
    if ( !rubyLabel )
      goto LABEL_16;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0LL);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    v60 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v60 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v60;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_16;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0LL);
    v63 = this->fields.tdEntity;
    if ( !v63 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v63->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0LL);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0LL);
    if ( !npRankLabel )
      goto LABEL_16;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v66 = this->fields.tdEntity;
    if ( !v66 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v66->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0LL);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    npTypeLabel = this->fields.npTypeLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0LL);
    if ( !npTypeLabel )
      goto LABEL_16;
    typeText = (System_String_o *)nameLabel;
    nameLabel = npTypeLabel;
  }
  else
  {
    v69 = this->fields.tdEntity;
    if ( !v69 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v69->fields.typeText;
  }
  UILabel__set_text(nameLabel, typeText, 0LL);
  if ( !tdInfo )
    goto LABEL_16;
  npLevelLabel = this->fields.npLevelLabel;
  if ( tdInfo->fields.lv <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  else
  {
    v71 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v72 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_61430728(v71, (System_String_o *)StringLiteral_1123/*"/"*/, v72, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v123 = 100 * tdInfo->fields.guageCount;
  v75 = (Il2CppObject *)System_Int32__ToString((int32_t)&v123, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v74, v75, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_16;
  v77 = 8LL;
  if ( multiFlg )
    v77 = 12LL;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v77),
    0LL);
  v78 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1BBA5B0(v78);
  v79 = *(_QWORD *)(*(_QWORD *)(v78 + 192) + 16LL);
  if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
    v79 = sub_1BBA5B0(v79);
  nameLabel = **(UILabel_o ***)(v79 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v80 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v80 )
    Detail = TreasureDvcLvEntity__getDetail(v80, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v82 = ServantStatusNpComponent_TypeInfo;
  v83 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v82 = ServantStatusNpComponent_TypeInfo;
  }
  v84 = WrapControlText__textBBCodeAdjust(
          v83,
          Detail,
          v82->static_fields->DETAIL_FONT_SIZE,
          v82->static_fields->DETAIL_FONT_SIZE,
          v82->static_fields->DETAIL_MAX_HEIGHT,
          0LL);
  v86 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v85 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v87 = v84;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v127.fields.currentCryptoKey = v86;
  *(_QWORD *)&v127.fields.fakeValue = v85;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v127, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v88, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v90 = *p_cardId;
  v91 = this->fields.explanationLabel;
  this->fields.cardType = v90;
  if ( !v91 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v91->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor_high = HIDWORD(nameLabel->fields.onChange->monitor);
  if ( mHeight <= monitor_high )
  {
    v96 = 0;
  }
  else
  {
    v94 = this->fields.explanationLabel;
    if ( !v94 )
      goto LABEL_16;
    v95 = v94->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v96 = v95 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B68930(nameLabel, *(_QWORD *)&idx);
  }
  if ( v58 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, value, 0LL);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    if ( !condLabel )
      goto LABEL_16;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    MULTI_NP_POS_Y = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( MULTI_NP_POS_Y == INFINITY )
      v99 = 0x80000000;
    else
      v99 = (int)MULTI_NP_POS_Y;
    if ( !byte_4A03F8E )
    {
      sub_1B686D4(&System_Math_TypeInfo, *(_QWORD *)&idx);
      byte_4A03F8E = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v99 >= 0 )
      v100 = v99;
    else
      v100 = -v99;
    if ( v119 < 1 )
      this->fields.commandLimitCountAdjust = v120 - 1;
    else
      this->fields.commandLimitCountFix = v120;
    v101 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v101 + 309) & 1) == 0 )
      v101 = sub_1BBA5B0(v101);
    v102 = *(_QWORD *)(*(_QWORD *)(v101 + 192) + 16LL);
    if ( (*(_BYTE *)(v102 + 309) & 1) == 0 )
      v102 = sub_1BBA5B0(v102);
    nameLabel = **(UILabel_o ***)(v102 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v103 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v105 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v104 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v106 = (ServantTreasureDeviceReleaseMaster_o *)v103;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v128.fields.currentCryptoKey = v105;
    *(_QWORD *)&v128.fields.fakeValue = v104;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v128, 0LL);
    if ( !v106 )
      goto LABEL_16;
    v96 += v100;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v106, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.costumeIdHash,
      (int32_t)CorrespondsCostume,
      v108,
      v109);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_3375180 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( tdInfo->fields.id != tdId )
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( this->fields.maskBase )
    {
      v111 = HIDWORD(nameLabel->fields.onChange->monitor) * v87;
      UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
      v112 = v111 >= 0 ? v111 : v111 + 1;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.maskBase,
        ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v112 >> 1),
        0LL);
      nameLabel = (UILabel_o *)this->fields.maskSprite;
      if ( nameLabel )
      {
        UIWidget__set_height(
          (UIWidget_o *)nameLabel,
          ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v111,
          0LL);
        nameLabel = this->fields.maskInfoLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, closedMessage, 0LL);
          v110 = isCharaHide;
          goto LABEL_156;
        }
      }
    }
    goto LABEL_16;
  }
  nameLabel = (UILabel_o *)this->fields.maskBase;
  if ( !nameLabel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  nameLabel = this->fields.maskInfoLabel;
  v110 = isCharaHide;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_156:
  v113 = this->fields.guageSpriteList;
  this->fields.isCharaHide = v110 == 1;
  if ( !v113 )
    goto LABEL_16;
  v114 = 0LL;
  v115 = 100;
  while ( 1 )
  {
    v116 = v113->max_length;
    if ( (int)v114 >= v116 || (int)v114 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v114 >= v116 )
      goto LABEL_166;
    v117 = v113->m_Items[v114];
    v123 = v115;
    v118 = System_Int32__ToString((int32_t)&v123, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_61419468((System_String_o *)StringLiteral_20297/*"img_npgage_"*/, v118, 0LL);
    if ( v117 )
    {
      UISprite__set_spriteName(v117, (System_String_o *)nameLabel, 0LL);
      v113 = this->fields.guageSpriteList;
      ++v114;
      v115 += 100;
      if ( v113 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v96;
}


int32_t __fastcall ServantStatusNpComponent__get_Adjust(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  return this->fields._Adjust_k__BackingField;
}


void __fastcall ServantStatusNpComponent__set_Adjust(
        ServantStatusNpComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Adjust_k__BackingField = value;
}