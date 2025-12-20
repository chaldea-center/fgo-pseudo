void ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2A4EC & 1) == 0 )
  {
    sub_1C94098(&ServantStatusNpComponent_TypeInfo);
    byte_4D2A4EC = 1;
  }
  static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x3900000012LL;
  static_fields->DETAIL_LINE_HEIGHT = 19;
  *(_QWORD *)&static_fields->MULTI_NP_POS_Y = 0xC1300000C2480000LL;
  *(_QWORD *)&static_fields->MASK_DEFAULT_HEIGHT = 0x21C000000FCLL;
}


void ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2A4EB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D2A4EB = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.fixedCardLimitCountFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t ServantStatusNpComponent__GetCommandLimitCount(
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
  if ( (byte_4D2A4EA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2A4EA = 1;
  }
  if ( !item )
    goto LABEL_25;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(item, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v8 = LimitCountByImageLimitCostumeIn;
  if ( commandLimitCountFix < 0
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
            (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v4->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
  if ( commandLimitCountAdjust < 0
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
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0),
        !MasterData_object) )
  {
LABEL_25:
    sub_1C942F0(this, item);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           (int32_t)this,
           commandLimitCountAdjust,
           0);
}


void ServantStatusNpComponent__ModifyCommandCard(
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
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w24
  const MethodInfo *v26; // x2
  int32_t v27; // w25
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  int32_t cardType; // w26
  int32_t v30; // w21
  BattleCommandData_o *v31; // x27
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct BattleCommandData_o *v38; // x25
  Il2CppObject *v39; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  GrandQuestFolderBoardItem_o *p_commandCardComponent; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_4D2A4E9 & 1) == 0 )
  {
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_15189/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_1C94098(&StringLiteral_4585/*"CommandCard"*/);
    byte_4D2A4E9 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v6);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v9 = (int)this;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0);
            if ( MasterData_object )
            {
              commandCardData->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                        (ServantLimitImageMaster_o *)MasterData_object,
                                                        SvtId,
                                                        (int32_t)this,
                                                        0);
              this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
              if ( this )
              {
                BattleCommandComponent__setData(
                  (BattleCommandComponent_o *)this,
                  v4->fields.commandCardData,
                  0,
                  0,
                  1,
                  0,
                  1,
                  0);
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
                    0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_1C942F0(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_38;
    v12 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
    if ( !this )
      goto LABEL_38;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)StringLiteral_4585/*"CommandCard"*/, 0);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4D25F1F )
    {
      sub_1C94098(&UnityEngine_Quaternion_TypeInfo);
      byte_4D25F1F = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0);
    v50.fields.x = x;
    v50.fields.y = y;
    v50.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v50, 0);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v12,
      (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v12,
                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v17 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    v17[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v17[1].fields.explanationLabel,
      (int32_t)gameObject,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( !v3 )
      goto LABEL_38;
    v25 = ServantStatusListViewItem__GetSvtId(v3, 1, 0);
    v27 = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v26);
    ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0);
    cardType = v4->fields.cardType;
    v30 = ConvertOverwriteDispImageLimitCount;
    v31 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_47436164(v31, cardType, v25, v27, 0, -1, 0);
    v4->fields.commandCardData = v31;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.commandCardData, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    v38 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v39 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v30, 0);
    if ( !v39 )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           (ServantLimitImageMaster_o *)v39,
                                           v25,
                                           (int32_t)this,
                                           0);
    if ( !v38 )
      goto LABEL_38;
    v38->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_38;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_38;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v17, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v17, (System_String_o *)StringLiteral_15189/*"Unlit/Transparent Colored"*/, 0);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v17, 1, 0, 1, 0, v4->fields.isCharaHide, 0);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v17;
    p_commandCardComponent = (GrandQuestFolderBoardItem_o *)&v4->fields.commandCardComponent;
    sub_1C9403C(p_commandCardComponent, (int32_t)v17, v42, v43, v44, v45, v46, v47);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue2;
    if ( !this )
      goto LABEL_38;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v12, layer, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusNpComponent__Set(
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
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x0
  TreasureDvcMaster_o *v28; // x22
  __int64 v29; // x23
  __int64 v30; // x24
  struct TreasureDvcEntity_o *v31; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x29
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  long double v39; // q0
  __int64 v40; // x0
  __int64 v41; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t ConvertOverwriteDispImageLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  Il2CppObject *Master_object; // x0
  __int64 v46; // x25
  __int64 v47; // x26
  ServantLimitImageMaster_o *v48; // x24
  int32_t ServantImageLimitSealAfter; // w23
  Il2CppObject *v50; // x22
  UILabel_o *rubyLabel; // x23
  struct UILabel_o *v52; // x23
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v55; // x8
  struct UILabel_o *npRankLabel; // x23
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v58; // x8
  UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  int TempOverwriteTreasureDeviceLv_k__BackingField; // w22
  int32_t v62; // w8
  bool v63; // w24
  int32_t *p_guageCount; // x9
  int v65; // w25
  UILabel_o *npLevelLabel; // x22
  System_String_o *v67; // x23
  System_String_o *v68; // x0
  UILabel_o *maxGuageLabel; // x22
  System_String_o *v70; // x23
  Il2CppObject *v71; // x0
  UIWidget_o *explanationLabel; // x22
  __int64 v73; // x9
  long double v74; // q0
  __int64 v75; // x0
  __int64 v76; // x0
  TreasureDvcLvEntity_o *v77; // x0
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v79; // x0
  UILabel_o *v80; // x23
  int32_t v81; // w0
  __int64 v82; // x22
  __int64 v83; // x23
  int32_t v84; // w28
  int32_t v85; // w0
  int32_t *p_cardId; // x8
  int32_t v87; // w9
  struct UILabel_o *v88; // x8
  int32_t mHeight; // w22
  int32_t monitor; // w8
  struct UILabel_o *v91; // x9
  int32_t v92; // w22
  int32_t v93; // w29
  UILabel_o *condLabel; // x22
  long double inited; // q0
  int v96; // w22
  int32_t v97; // w21
  int v98; // w28
  __int64 v99; // x0
  __int64 v100; // x0
  Il2CppObject *v101; // x0
  __int64 v102; // x23
  __int64 v103; // x24
  ServantTreasureDeviceReleaseMaster_o *v104; // x22
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  int32_t v112; // w21
  int v113; // w20
  int v114; // w8
  struct UISprite_array *v115; // x8
  __int64 v116; // x21
  int32_t v117; // w22
  int v118; // w9
  UISprite_o *v119; // x20
  System_String_o *v120; // x0
  int32_t dvcId; // [xsp+4h] [xbp-9Ch]
  int v122; // [xsp+10h] [xbp-90h]
  int32_t v123; // [xsp+14h] [xbp-8Ch]
  System_String_o *value; // [xsp+18h] [xbp-88h]
  TreasureDvcInfo_o *v126; // [xsp+28h] [xbp-78h]
  int32_t lv[2]; // [xsp+30h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  v18 = idx;
  if ( (byte_4D2A4E8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&ServantStatusNpComponent_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&StringLiteral_20642/*"img_npgage_"*/);
    sub_1C94098(&StringLiteral_11991/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    sub_1C94098(&StringLiteral_20643/*"img_npgage_bg"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A4E8 = 1;
  }
  *(_QWORD *)lv = 0;
  entity = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_182;
  value = title;
  v122 = v18;
  v123 = condLimitCount;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_182;
  v22 = 0;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v22 >= max_length )
      break;
    if ( (unsigned int)v22 >= max_length )
LABEL_183:
      sub_1C942F8(nameLabel);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v22];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20643/*"img_npgage_bg"*/, 0);
      guageSpriteList = this->fields.guageSpriteList;
      ++v22;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_182;
  }
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_182;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C6A12C(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C6A12C(v25);
  nameLabel = **(UILabel_o ***)(v27 + 184);
  if ( !nameLabel )
    goto LABEL_182;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_182;
  v28 = (TreasureDvcMaster_o *)nameLabel;
  v30 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v129.fields.currentCryptoKey = v30;
  *(_QWORD *)&v129.fields.fakeValue = v29;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v129, 0);
  if ( !v28 )
    goto LABEL_182;
  v31 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v28, (int32_t)nameLabel, tdId, 0);
  this->fields.tdEntity = v31;
  p_tdEntity = &this->fields.tdEntity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.tdEntity, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  if ( !this->fields.tdEntity )
    return;
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C6A12C(v39);
  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C6A12C(v39);
  nameLabel = **(UILabel_o ***)(v41 + 184);
  if ( !nameLabel )
    goto LABEL_182;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  dvcId = tdId;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v47 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v46 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v48 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v130.fields.currentCryptoKey = v47;
  *(_QWORD *)&v130.fields.fakeValue = v46;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v130, 0);
  if ( !v48 )
    goto LABEL_182;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v48,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                             ServantEntity->fields.id,
                             0);
  if ( !MasterData_object )
    goto LABEL_182;
  ServantLimitAddMaster__TryGetEntity(
    (ServantLimitAddMaster_o *)MasterData_object,
    &entity,
    (int32_t)nameLabel,
    ServantImageLimitSealAfter,
    0);
  v50 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_182;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0);
    if ( !rubyLabel )
      goto LABEL_182;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_182;
    v52 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0);
    if ( !v52 )
      goto LABEL_182;
    name = (System_String_o *)nameLabel;
    nameLabel = v52;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_182;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_182;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0);
    v55 = this->fields.tdEntity;
    if ( !v55 )
      goto LABEL_182;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_182;
    name = v55->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_182;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0);
    if ( !npRankLabel )
      goto LABEL_182;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v58 = this->fields.tdEntity;
    if ( !v58 )
      goto LABEL_182;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_182;
    rank = v58->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_182;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(entity, 0);
    if ( !(_DWORD)nameLabel )
    {
      npTypeLabel = this->fields.npTypeLabel;
LABEL_179:
      nameLabel = (UILabel_o *)entity;
      if ( !entity )
        goto LABEL_182;
      nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0);
      if ( !npTypeLabel )
        goto LABEL_182;
      typeText = (System_String_o *)nameLabel;
      goto LABEL_76;
    }
    if ( !v50 )
      goto LABEL_182;
    nameLabel = (UILabel_o *)CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v50, (int32_t)nameLabel, 0, 0, 0);
    npTypeLabel = this->fields.npTypeLabel;
    if ( ((unsigned __int8)nameLabel & 1) != 0 )
      goto LABEL_179;
  }
  else
  {
    npTypeLabel = this->fields.npTypeLabel;
  }
  if ( !*p_tdEntity || !npTypeLabel )
    goto LABEL_182;
  typeText = (*p_tdEntity)->fields.typeText;
LABEL_76:
  UILabel__set_text(npTypeLabel, typeText, 0);
  if ( !tdInfo )
    goto LABEL_182;
  TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  v62 = tdInfo->fields.lv;
  lv[1] = v62;
  if ( TempOverwriteTreasureDeviceLv_k__BackingField < 1 )
  {
    v63 = multiFlg;
    p_guageCount = &tdInfo->fields.guageCount;
  }
  else
  {
    lv[1] = TempOverwriteTreasureDeviceLv_k__BackingField;
    v63 = multiFlg;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !nameLabel )
      goto LABEL_182;
    nameLabel = (UILabel_o *)TreasureDvcLvMaster__GetEntity(
                               (TreasureDvcLvMaster_o *)nameLabel,
                               tdInfo->fields.id,
                               TempOverwriteTreasureDeviceLv_k__BackingField,
                               0);
    if ( !nameLabel )
      goto LABEL_182;
    v62 = tdInfo->fields.lv;
    p_guageCount = (int32_t *)&nameLabel->fields.m_CancellationTokenSource;
  }
  v65 = *p_guageCount;
  npLevelLabel = this->fields.npLevelLabel;
  if ( v62 <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_182;
  }
  else
  {
    v67 = System_Int32__ToString((int32_t)&lv[1], 0);
    v68 = System_Int32__ToString((int)tdInfo + 24, 0);
    nameLabel = (UILabel_o *)System_String__Concat_64456008(v67, (System_String_o *)StringLiteral_1041/*"/"*/, v68, 0);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_182;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0);
  lv[0] = 100 * v65;
  v71 = (Il2CppObject *)System_Int32__ToString((int32_t)lv, 0);
  nameLabel = (UILabel_o *)System_String__Format(v70, v71, 0);
  if ( !maxGuageLabel )
    goto LABEL_182;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_182;
  v73 = 4;
  if ( v63 )
    v73 = 8;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v73),
    0);
  v75 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
    v75 = sub_1C6A12C(v74);
  v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
  if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
    v76 = sub_1C6A12C(v74);
  nameLabel = **(UILabel_o ***)(v76 + 184);
  if ( !nameLabel )
    goto LABEL_182;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_182;
  v77 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)nameLabel, (*p_tdEntity)->fields.id, lv[1], 0);
  if ( v77 )
    Detail = TreasureDvcLvEntity__getDetail(v77, 0);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v79 = ServantStatusNpComponent_TypeInfo;
  v80 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v79 = ServantStatusNpComponent_TypeInfo;
  }
  v81 = WrapControlText__textBBCodeAdjust(
          v80,
          Detail,
          v79->static_fields->DETAIL_FONT_SIZE,
          v79->static_fields->DETAIL_FONT_SIZE,
          0);
  v83 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v82 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v84 = v81;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v131.fields.currentCryptoKey = v83;
  *(_QWORD *)&v131.fields.fakeValue = v82;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v131, 0);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v85, dvcId, 0);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v87 = *p_cardId;
  v88 = this->fields.explanationLabel;
  this->fields.cardType = v87;
  if ( !v88 )
    goto LABEL_182;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v88->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor = (int32_t)nameLabel->fields.onChange->monitor;
  if ( mHeight <= monitor )
  {
    v93 = 0;
  }
  else
  {
    v91 = this->fields.explanationLabel;
    if ( !v91 )
      goto LABEL_182;
    v92 = v91->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v93 = v92 - monitor;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0)) == 0 )
  {
LABEL_182:
    sub_1C942F0(nameLabel, *(_QWORD *)&idx);
  }
  if ( v63 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_182;
    UILabel__set_text(nameLabel, value, 0);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    if ( !condLabel )
      goto LABEL_182;
    v126 = tdInfo;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0, 0);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0);
    *(float *)&inited = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&inited == INFINITY )
      v96 = 0x80000000;
    else
      v96 = (int)*(float *)&inited;
    if ( !byte_4D277C6 )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D277C6 = 1;
    }
    v97 = v84;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v96 >= 0 )
      v98 = v96;
    else
      v98 = -v96;
    if ( v122 < 1 )
      this->fields.commandLimitCountAdjust = v123 - 1;
    else
      this->fields.commandLimitCountFix = v123;
    v99 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
      v99 = sub_1C6A12C(inited);
    v100 = *(_QWORD *)(*(_QWORD *)(v99 + 192) + 16LL);
    if ( (*(_BYTE *)(v100 + 309) & 1) == 0 )
      v100 = sub_1C6A12C(inited);
    nameLabel = **(UILabel_o ***)(v100 + 184);
    if ( !nameLabel )
      goto LABEL_182;
    v101 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v103 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v102 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v104 = (ServantTreasureDeviceReleaseMaster_o *)v101;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v132.fields.currentCryptoKey = v103;
    *(_QWORD *)&v132.fields.fakeValue = v102;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v132, 0);
    if ( !v104 )
      goto LABEL_182;
    v93 += v98;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v104, (int32_t)nameLabel, 0);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash,
      (int32_t)CorrespondsCostume,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    v84 = v97;
    tdInfo = v126;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_182;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    if ( !nameLabel )
      goto LABEL_182;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_3718A18 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( dispMaskTreasureDevice && (dispMaskTreasureDevice == 1 || tdInfo->fields.id != dvcId) )
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( this->fields.maskBase )
    {
      v113 = LODWORD(nameLabel->fields.onChange->monitor) * v84;
      UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0);
      v114 = v113 >= 0 ? v113 : v113 + 1;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.maskBase,
        ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v114 >> 1),
        0);
      nameLabel = (UILabel_o *)this->fields.maskSprite;
      if ( nameLabel )
      {
        UIWidget__set_height(
          (UIWidget_o *)nameLabel,
          ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v113,
          0);
        nameLabel = this->fields.maskInfoLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, closedMessage, 0);
          v112 = isCharaHide;
          goto LABEL_168;
        }
      }
    }
    goto LABEL_182;
  }
  nameLabel = (UILabel_o *)this->fields.maskBase;
  if ( !nameLabel )
    goto LABEL_182;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  nameLabel = this->fields.maskInfoLabel;
  v112 = isCharaHide;
  if ( !nameLabel )
    goto LABEL_182;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_168:
  v115 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = fixedCardLimitCount != 0;
  this->fields.isCharaHide = v112 == 1;
  if ( !v115 )
    goto LABEL_182;
  v116 = 0;
  v117 = 100;
  while ( (int)v116 < v65 )
  {
    v118 = v115->max_length;
    if ( (int)v116 >= v118 )
      break;
    if ( (unsigned int)v116 >= v118 )
      goto LABEL_183;
    v119 = v115->m_Items[v116];
    lv[0] = v117;
    v120 = System_Int32__ToString((int32_t)lv, 0);
    nameLabel = (UILabel_o *)System_String__Concat_64417744((System_String_o *)StringLiteral_20642/*"img_npgage_"*/, v120, 0);
    if ( v119 )
    {
      UISprite__set_spriteName(v119, (System_String_o *)nameLabel, 0);
      v115 = this->fields.guageSpriteList;
      ++v116;
      v117 += 100;
      if ( v115 )
        continue;
    }
    goto LABEL_182;
  }
  this->fields._Adjust_k__BackingField = v93;
}


void ServantStatusNpComponent__SetCondColor(
        ServantStatusNpComponent_o *this,
        UnityEngine_Color_o labelColor,
        UnityEngine_Color_o spriteColor,
        const MethodInfo *method)
{
  UIWidget_o *condSprite; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  condSprite = (UIWidget_o *)this->fields.condSprite;
  if ( !condSprite
    || (a = labelColor.fields.a,
        b = labelColor.fields.b,
        g = labelColor.fields.g,
        r = labelColor.fields.r,
        UIWidget__set_color(condSprite, spriteColor, 0),
        (condSprite = (UIWidget_o *)this->fields.condLabel) == 0) )
  {
    sub_1C942F0(condSprite, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(condSprite, v10, 0);
}


int32_t ServantStatusNpComponent__get_Adjust(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  return this->fields._Adjust_k__BackingField;
}


void ServantStatusNpComponent__set_Adjust(ServantStatusNpComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Adjust_k__BackingField = value;
}