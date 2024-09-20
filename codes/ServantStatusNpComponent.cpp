void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4A58632 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusNpComponent_TypeInfo);
    byte_4A58632 = 1;
  }
  static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DETAIL_FONT_SIZE = xmmword_BB58F0;
  *(_QWORD *)&static_fields->MULTI_NP_POS_Y = 0xC1300000C2480000LL;
  *(_QWORD *)&static_fields->MASK_DEFAULT_HEIGHT = 0x21C000000FCLL;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58631 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A58631 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIdHash, (int32_t)v3, v4, v5);
  this->fields.fixedCardLimitCountFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v8; // w21
  int32_t commandLimitCountAdjust; // w21
  Il2CppObject *MasterData_object; // x20

  v4 = this;
  if ( (byte_4A58630 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58630 = 1;
  }
  if ( !item )
    goto LABEL_25;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0LL);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v8 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0
    || LimitCountByImageLimitCostumeIn == commandLimitCountFix
    || !v4->fields.fixedCardLimitCountFlag )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_25;
    commandLimitCountFix = v8;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v8,
            (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v4->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
  if ( (commandLimitCountAdjust & 0x80000000) != 0
    || commandLimitCountFix <= commandLimitCountAdjust
    || !v4->fields.fixedCardLimitCountFlag )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_25;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0LL),
        !MasterData_object) )
  {
LABEL_25:
    sub_1B8880C(this, item);
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
  int32_t SvtId; // w20
  const MethodInfo *v6; // x2
  int32_t CommandLimitCount; // w22
  struct BattleCommandData_o *commandCardData; // x23
  int32_t v9; // w21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *commandCardPrefab; // x20
  ServantStatusNpComponent_o *v12; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  ServantStatusNpComponent_o *v17; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w24
  const MethodInfo *v22; // x2
  int32_t v23; // w25
  int32_t DispLimitCount; // w0
  int32_t cardType; // w26
  int32_t v26; // w21
  BattleCommandData_o *v27; // x27
  int32_t v28; // w2
  int32_t v29; // w3
  struct BattleCommandData_o *v30; // x25
  Il2CppObject *v31; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  ServantStatusBattleListViewItem_o *p_commandCardComponent; // x19
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_4A5862F & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_15129/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_1B885B0(&StringLiteral_4612/*"CommandCard"*/);
    byte_4A5862F = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v6);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCount(v3, 1, 0LL);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v9 = (int)this;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0LL);
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
      sub_1B8880C(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_38;
    v12 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
    if ( !this )
      goto LABEL_38;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)StringLiteral_4612/*"CommandCard"*/, 0LL);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4A55CE7 )
    {
      sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4A55CE7 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v38.fields.x = x;
    v38.fields.y = y;
    v38.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v38, 0LL);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v12,
      (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v12,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v17 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    v17[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[1].fields.explanationLabel, (int32_t)gameObject, v19, v20);
    if ( !v3 )
      goto LABEL_38;
    v21 = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
    v23 = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v22);
    DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(v3, 1, 0LL);
    cardType = v4->fields.cardType;
    v26 = DispLimitCount;
    v27 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_43210772(v27, cardType, v21, v23, 0, -1, 0LL);
    v4->fields.commandCardData = v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.commandCardData, (int32_t)v27, v28, v29);
    v30 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v31 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v26, 0LL);
    if ( !v31 )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           (ServantLimitImageMaster_o *)v31,
                                           v21,
                                           (int32_t)this,
                                           0LL);
    if ( !v30 )
      goto LABEL_38;
    v30->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_38;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_38;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v17, (BattleCommandData_o *)item, 0LL, 0, 1, 0, 1, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v17, (System_String_o *)StringLiteral_15129/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v17, 1, 0, 1, 0, v4->fields.isCharaHide, 0LL);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v17;
    p_commandCardComponent = (ServantStatusBattleListViewItem_o *)&v4->fields.commandCardComponent;
    sub_1B88554(p_commandCardComponent, (int32_t)v17, v34, v35);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue2B;
    if ( !this )
      goto LABEL_38;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v12, layer, 0LL);
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
        int32_t dispMaskTreasureDevice,
        int32_t fixedCardLimitCount,
        const MethodInfo *method)
{
  int32_t v18; // w23
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v22; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  __int64 v25; // x8
  __int64 v26; // x0
  TreasureDvcMaster_o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x24
  struct TreasureDvcEntity_o *v30; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0
  __int64 v35; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t DispLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w29
  Il2CppObject *Master_object; // x0
  __int64 v40; // x24
  __int64 v41; // x25
  ServantLimitImageMaster_o *v42; // x23
  int32_t ServantImageLimitSealAfter; // w23
  UILabel_o *rubyLabel; // x22
  struct UILabel_o *v45; // x22
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v48; // x8
  struct UILabel_o *npRankLabel; // x22
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v51; // x8
  struct UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v54; // x8
  UILabel_o *npLevelLabel; // x22
  System_String_o *v56; // x23
  System_String_o *v57; // x0
  UILabel_o *maxGuageLabel; // x22
  System_String_o *v59; // x23
  Il2CppObject *v60; // x0
  UIWidget_o *explanationLabel; // x22
  __int64 v62; // x9
  __int64 v63; // x0
  __int64 v64; // x0
  TreasureDvcLvEntity_o *v65; // x0
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v67; // x0
  UILabel_o *v68; // x23
  int32_t v69; // w0
  __int64 v70; // x22
  __int64 v71; // x23
  int32_t v72; // w24
  int32_t v73; // w0
  int32_t *p_cardId; // x8
  int32_t v75; // w9
  struct UILabel_o *v76; // x8
  int32_t mHeight; // w22
  int32_t monitor_high; // w8
  struct UILabel_o *v79; // x9
  int32_t v80; // w22
  int32_t v81; // w29
  UILabel_o *condLabel; // x22
  float MULTI_NP_POS_Y; // s0
  int v84; // w22
  int v85; // w28
  int32_t v86; // w23
  __int64 v87; // x0
  __int64 v88; // x0
  int32_t v89; // w21
  Il2CppObject *v90; // x0
  __int64 v91; // x23
  __int64 v92; // x24
  ServantTreasureDeviceReleaseMaster_o *v93; // x22
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w21
  int v98; // w21
  int v99; // w8
  struct UISprite_array *v100; // x8
  __int64 v101; // x22
  int v102; // w23
  int v103; // w9
  UISprite_o *v104; // x21
  System_String_o *v105; // x0
  int32_t v106; // [xsp+Ch] [xbp-94h]
  int v107; // [xsp+1Ch] [xbp-84h]
  System_String_o *value; // [xsp+20h] [xbp-80h]
  int v110; // [xsp+34h] [xbp-6Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v18 = idx;
  if ( (byte_4A5862E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantStatusNpComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&StringLiteral_20367/*"img_npgage_"*/);
    sub_1B885B0(&StringLiteral_11888/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_20368/*"img_npgage_bg"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5862E = 1;
  }
  entity = 0LL;
  v110 = 0;
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
  v107 = v18;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v22 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v22 >= max_length )
      break;
    if ( (unsigned int)v22 >= max_length )
LABEL_168:
      sub_1B88814(nameLabel, *(_QWORD *)&idx);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v22];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20368/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v22;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  v106 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_16;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0LL);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BDA48C(v26);
  nameLabel = **(UILabel_o ***)(v26 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_16;
  v27 = (TreasureDvcMaster_o *)nameLabel;
  v29 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v28 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v29;
  *(_QWORD *)&v112.fields.fakeValue = v28;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v112, 0LL);
  if ( !v27 )
    goto LABEL_16;
  v30 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v27, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v30;
  p_tdEntity = &this->fields.tdEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdEntity, (int32_t)v30, v32, v33);
  if ( !this->fields.tdEntity )
    return;
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1BDA48C(v34);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1BDA48C(v35);
  nameLabel = **(UILabel_o ***)(v35 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v41 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v40 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v42 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v41;
  *(_QWORD *)&v113.fields.fakeValue = v40;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v113, 0LL);
  if ( !v42 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v42,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                             ServantEntity->fields.id,
                             0LL);
  if ( !MasterData_object )
    goto LABEL_16;
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
    v45 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v45 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v45;
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
    v48 = this->fields.tdEntity;
    if ( !v48 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v48->fields.name;
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
    v51 = this->fields.tdEntity;
    if ( !v51 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v51->fields.rank;
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
    v54 = this->fields.tdEntity;
    if ( !v54 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v54->fields.typeText;
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
    v56 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v57 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_61718292(v56, (System_String_o *)StringLiteral_1123/*"/"*/, v57, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v110 = 100 * tdInfo->fields.guageCount;
  v60 = (Il2CppObject *)System_Int32__ToString((int32_t)&v110, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v59, v60, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_16;
  v62 = 8LL;
  if ( multiFlg )
    v62 = 12LL;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v62),
    0LL);
  v63 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
    v63 = sub_1BDA48C(v63);
  v64 = *(_QWORD *)(*(_QWORD *)(v63 + 192) + 16LL);
  if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
    v64 = sub_1BDA48C(v64);
  nameLabel = **(UILabel_o ***)(v64 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v65 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v65 )
    Detail = TreasureDvcLvEntity__getDetail(v65, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v67 = ServantStatusNpComponent_TypeInfo;
  v68 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v67 = ServantStatusNpComponent_TypeInfo;
  }
  v69 = WrapControlText__textBBCodeAdjust(
          v68,
          Detail,
          v67->static_fields->DETAIL_FONT_SIZE,
          v67->static_fields->DETAIL_FONT_SIZE,
          v67->static_fields->DETAIL_MAX_HEIGHT,
          0LL);
  v71 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v70 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v72 = v69;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v71;
  *(_QWORD *)&v114.fields.fakeValue = v70;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v114, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v73, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v75 = *p_cardId;
  v76 = this->fields.explanationLabel;
  this->fields.cardType = v75;
  if ( !v76 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v76->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor_high = HIDWORD(nameLabel->fields.onChange->monitor);
  if ( mHeight <= monitor_high )
  {
    v81 = 0;
  }
  else
  {
    v79 = this->fields.explanationLabel;
    if ( !v79 )
      goto LABEL_16;
    v80 = v79->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v81 = v80 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(nameLabel, *(_QWORD *)&idx);
  }
  if ( multiFlg )
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
      v84 = 0x80000000;
    else
      v84 = (int)MULTI_NP_POS_Y;
    if ( !byte_4A5638F )
    {
      sub_1B885B0(&System_Math_TypeInfo);
      byte_4A5638F = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v84 >= 0 )
      v85 = v84;
    else
      v85 = -v84;
    if ( v107 < 1 )
      this->fields.commandLimitCountAdjust = v106 - 1;
    else
      this->fields.commandLimitCountFix = v106;
    v87 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v87 + 309) & 1) == 0 )
      v87 = sub_1BDA48C(v87);
    v88 = *(_QWORD *)(*(_QWORD *)(v87 + 192) + 16LL);
    if ( (*(_BYTE *)(v88 + 309) & 1) == 0 )
      v88 = sub_1BDA48C(v88);
    nameLabel = **(UILabel_o ***)(v88 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v89 = v72;
    v90 = DataManager__GetMasterData_object_(
            (DataManager_o *)nameLabel,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v92 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v91 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v93 = (ServantTreasureDeviceReleaseMaster_o *)v90;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v115.fields.currentCryptoKey = v92;
    *(_QWORD *)&v115.fields.fakeValue = v91;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v115, 0LL);
    v86 = fixedCardLimitCount;
    if ( !v93 )
      goto LABEL_16;
    v81 += v85;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v93, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIdHash, (int32_t)CorrespondsCostume, v95, v96);
    v72 = v89;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    v86 = fixedCardLimitCount;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_33B3210 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( dispMaskTreasureDevice && (dispMaskTreasureDevice == 1 || tdInfo->fields.id != tdId) )
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( this->fields.maskBase )
    {
      v98 = HIDWORD(nameLabel->fields.onChange->monitor) * v72;
      UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
      v99 = v98 >= 0 ? v98 : v98 + 1;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.maskBase,
        ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v99 >> 1),
        0LL);
      nameLabel = (UILabel_o *)this->fields.maskSprite;
      if ( nameLabel )
      {
        UIWidget__set_height(
          (UIWidget_o *)nameLabel,
          ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v98,
          0LL);
        nameLabel = this->fields.maskInfoLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, closedMessage, 0LL);
          v97 = isCharaHide;
          goto LABEL_158;
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
  v97 = isCharaHide;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_158:
  v100 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = v86 != 0;
  this->fields.isCharaHide = v97 == 1;
  if ( !v100 )
    goto LABEL_16;
  v101 = 0LL;
  v102 = 100;
  while ( 1 )
  {
    v103 = v100->max_length;
    if ( (int)v101 >= v103 || (int)v101 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v101 >= v103 )
      goto LABEL_168;
    v104 = v100->m_Items[v101];
    v110 = v102;
    v105 = System_Int32__ToString((int32_t)&v110, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_20367/*"img_npgage_"*/, v105, 0LL);
    if ( v104 )
    {
      UISprite__set_spriteName(v104, (System_String_o *)nameLabel, 0LL);
      v100 = this->fields.guageSpriteList;
      ++v101;
      v102 += 100;
      if ( v100 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v81;
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