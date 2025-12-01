void ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4CC4A6F & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusNpComponent_TypeInfo);
    byte_4CC4A6F = 1;
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

  if ( (byte_4CC4A6E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CC4A6E = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4CC4A6D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC4A6D = 1;
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
            (const MethodInfo_36C1454 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
           (const MethodInfo_36C1454 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0),
        !MasterData_object) )
  {
LABEL_25:
    sub_1C71608(this, item);
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
  if ( (byte_4CC4A6C & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_15136/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_1C713B0(&StringLiteral_4575/*"CommandCard"*/);
    byte_4CC4A6C = 1;
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
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
      sub_1C71608(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)StringLiteral_4575/*"CommandCard"*/, 0);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4CC0D0F )
    {
      sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4CC0D0F = 1;
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
      (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v12,
                                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v17 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    v17[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1C71354(
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
    v31 = (BattleCommandData_o *)sub_1C715FC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_46927792(v31, cardType, v25, v27, 0, -1, 0);
    v4->fields.commandCardData = v31;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.commandCardData, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    v38 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v39 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v17, (System_String_o *)StringLiteral_15136/*"Unlit/Transparent Colored"*/, 0);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v17, 1, 0, 1, 0, v4->fields.isCharaHide, 0);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v17;
    p_commandCardComponent = (GrandQuestFolderBoardItem_o *)&v4->fields.commandCardComponent;
    sub_1C71354(p_commandCardComponent, (int32_t)v17, v42, v43, v44, v45, v46, v47);
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
  struct TreasureDvcEntity_o **p_tdEntity; // x28
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
  int32_t LimitCountByImageLimitCostumeIn; // w29
  Il2CppObject *Master_object; // x0
  __int64 v46; // x24
  __int64 v47; // x25
  ServantLimitImageMaster_o *v48; // x23
  int32_t ServantImageLimitSealAfter; // w23
  Il2CppObject *v50; // x29
  UILabel_o *rubyLabel; // x22
  struct UILabel_o *v52; // x22
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v55; // x8
  struct UILabel_o *npRankLabel; // x22
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v58; // x8
  UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  UILabel_o *npLevelLabel; // x22
  int32_t *p_lv; // x29
  System_String_o *v63; // x23
  System_String_o *v64; // x0
  UILabel_o *maxGuageLabel; // x22
  System_String_o *v66; // x23
  Il2CppObject *v67; // x0
  UIWidget_o *explanationLabel; // x22
  __int64 v69; // x9
  long double v70; // q0
  __int64 v71; // x0
  __int64 v72; // x0
  TreasureDvcLvEntity_o *v73; // x0
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v75; // x0
  UILabel_o *v76; // x23
  int32_t v77; // w0
  __int64 v78; // x22
  __int64 v79; // x23
  int32_t v80; // w24
  int32_t v81; // w0
  int32_t *p_cardId; // x8
  int32_t v83; // w9
  struct UILabel_o *v84; // x8
  int32_t mHeight; // w22
  int32_t monitor; // w8
  struct UILabel_o *v87; // x9
  int32_t v88; // w22
  int32_t v89; // w29
  UILabel_o *condLabel; // x22
  long double inited; // q0
  int v92; // w22
  int v93; // w28
  int32_t v94; // w23
  __int64 v95; // x0
  __int64 v96; // x0
  int32_t v97; // w21
  Il2CppObject *v98; // x0
  __int64 v99; // x23
  __int64 v100; // x24
  ServantTreasureDeviceReleaseMaster_o *v101; // x22
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  int32_t v109; // w21
  int v110; // w21
  int v111; // w8
  struct UISprite_array *v112; // x8
  __int64 v113; // x22
  int v114; // w23
  int v115; // w9
  UISprite_o *v116; // x21
  System_String_o *v117; // x0
  int32_t v118; // [xsp+Ch] [xbp-94h]
  int v119; // [xsp+1Ch] [xbp-84h]
  System_String_o *value; // [xsp+20h] [xbp-80h]
  int v122; // [xsp+34h] [xbp-6Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16

  v18 = idx;
  if ( (byte_4CC4A6B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantStatusNpComponent_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&StringLiteral_20543/*"img_npgage_"*/);
    sub_1C713B0(&StringLiteral_11949/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    sub_1C713B0(&StringLiteral_20544/*"img_npgage_bg"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4A6B = 1;
  }
  entity = 0;
  v122 = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_16;
  value = title;
  v119 = v18;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v22 = 0;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v22 >= max_length )
      break;
    if ( (unsigned int)v22 >= max_length )
LABEL_175:
      sub_1C71610(nameLabel);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v22];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20544/*"img_npgage_bg"*/, 0);
      guageSpriteList = this->fields.guageSpriteList;
      ++v22;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  v118 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_16;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C47444(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C47444(v25);
  nameLabel = **(UILabel_o ***)(v27 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_16;
  v28 = (TreasureDvcMaster_o *)nameLabel;
  v30 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v124.fields.currentCryptoKey = v30;
  *(_QWORD *)&v124.fields.fakeValue = v29;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v124, 0);
  if ( !v28 )
    goto LABEL_16;
  v31 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v28, (int32_t)nameLabel, tdId, 0);
  this->fields.tdEntity = v31;
  p_tdEntity = &this->fields.tdEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tdEntity, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  if ( !this->fields.tdEntity )
    return;
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C47444(v39);
  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C47444(v39);
  nameLabel = **(UILabel_o ***)(v41 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v47 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v46 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v48 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v125.fields.currentCryptoKey = v47;
  *(_QWORD *)&v125.fields.fakeValue = v46;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v125, 0);
  if ( !v48 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v48,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                             ServantEntity->fields.id,
                             0);
  if ( !MasterData_object )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(
    (ServantLimitAddMaster_o *)MasterData_object,
    &entity,
    (int32_t)nameLabel,
    ServantImageLimitSealAfter,
    0);
  v50 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0);
    if ( !rubyLabel )
      goto LABEL_16;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    v52 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0);
    if ( !v52 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v52;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_16;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0);
    v55 = this->fields.tdEntity;
    if ( !v55 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
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
      goto LABEL_16;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0);
    if ( !npRankLabel )
      goto LABEL_16;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v58 = this->fields.tdEntity;
    if ( !v58 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
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
      goto LABEL_16;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(entity, 0);
    if ( !(_DWORD)nameLabel )
    {
      npTypeLabel = this->fields.npTypeLabel;
LABEL_172:
      nameLabel = (UILabel_o *)entity;
      if ( !entity )
        goto LABEL_16;
      nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0);
      if ( !npTypeLabel )
        goto LABEL_16;
      typeText = (System_String_o *)nameLabel;
      goto LABEL_76;
    }
    if ( !v50 )
      goto LABEL_16;
    nameLabel = (UILabel_o *)CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v50, (int32_t)nameLabel, 0, 0, 0);
    npTypeLabel = this->fields.npTypeLabel;
    if ( ((unsigned __int8)nameLabel & 1) != 0 )
      goto LABEL_172;
  }
  else
  {
    npTypeLabel = this->fields.npTypeLabel;
  }
  if ( !*p_tdEntity || !npTypeLabel )
    goto LABEL_16;
  typeText = (*p_tdEntity)->fields.typeText;
LABEL_76:
  UILabel__set_text(npTypeLabel, typeText, 0);
  if ( !tdInfo )
    goto LABEL_16;
  npLevelLabel = this->fields.npLevelLabel;
  p_lv = &tdInfo->fields.lv;
  if ( tdInfo->fields.lv <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  else
  {
    v63 = System_Int32__ToString((int32_t)p_lv, 0);
    v64 = System_Int32__ToString((int)tdInfo + 24, 0);
    nameLabel = (UILabel_o *)System_String__Concat_64069988(v63, (System_String_o *)StringLiteral_1041/*"/"*/, v64, 0);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0);
  v122 = 100 * tdInfo->fields.guageCount;
  v67 = (Il2CppObject *)System_Int32__ToString((int32_t)&v122, 0);
  nameLabel = (UILabel_o *)System_String__Format(v66, v67, 0);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_16;
  v69 = 4;
  if ( multiFlg )
    v69 = 8;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v69),
    0);
  v71 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
    v71 = sub_1C47444(v70);
  v72 = *(_QWORD *)(*(_QWORD *)(v71 + 192) + 16LL);
  if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
    v72 = sub_1C47444(v70);
  nameLabel = **(UILabel_o ***)(v72 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v73 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)nameLabel, (*p_tdEntity)->fields.id, *p_lv, 0);
  if ( v73 )
    Detail = TreasureDvcLvEntity__getDetail(v73, 0);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v75 = ServantStatusNpComponent_TypeInfo;
  v76 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v75 = ServantStatusNpComponent_TypeInfo;
  }
  v77 = WrapControlText__textBBCodeAdjust(
          v76,
          Detail,
          v75->static_fields->DETAIL_FONT_SIZE,
          v75->static_fields->DETAIL_FONT_SIZE,
          0);
  v79 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v78 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v80 = v77;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v126.fields.currentCryptoKey = v79;
  *(_QWORD *)&v126.fields.fakeValue = v78;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v126, 0);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v81, tdId, 0);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v83 = *p_cardId;
  v84 = this->fields.explanationLabel;
  this->fields.cardType = v83;
  if ( !v84 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v84->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor = (int32_t)nameLabel->fields.onChange->monitor;
  if ( mHeight <= monitor )
  {
    v89 = 0;
  }
  else
  {
    v87 = this->fields.explanationLabel;
    if ( !v87 )
      goto LABEL_16;
    v88 = v87->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v89 = v88 - monitor;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !nameLabel )
    goto LABEL_16;
  if ( multiFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, value, 0);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    if ( !condLabel )
      goto LABEL_16;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0, 0);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0);
    *(float *)&inited = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&inited == INFINITY )
      v92 = 0x80000000;
    else
      v92 = (int)*(float *)&inited;
    if ( !byte_4CC1CE4 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC1CE4 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v92 >= 0 )
      v93 = v92;
    else
      v93 = -v92;
    if ( v119 < 1 )
      this->fields.commandLimitCountAdjust = v118 - 1;
    else
      this->fields.commandLimitCountFix = v118;
    v95 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v95 + 309) & 1) == 0 )
      v95 = sub_1C47444(inited);
    v96 = *(_QWORD *)(*(_QWORD *)(v95 + 192) + 16LL);
    if ( (*(_BYTE *)(v96 + 309) & 1) == 0 )
      v96 = sub_1C47444(inited);
    nameLabel = **(UILabel_o ***)(v96 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v97 = v80;
    v98 = DataManager__GetMasterData_object_(
            (DataManager_o *)nameLabel,
            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v100 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v99 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v101 = (ServantTreasureDeviceReleaseMaster_o *)v98;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v127.fields.currentCryptoKey = v100;
    *(_QWORD *)&v127.fields.fakeValue = v99;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v127, 0);
    v94 = fixedCardLimitCount;
    if ( !v101 )
      goto LABEL_16;
    v89 += v93;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v101, (int32_t)nameLabel, 0);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.costumeIdHash,
      (int32_t)CorrespondsCostume,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    v80 = v97;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    v94 = fixedCardLimitCount;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_36C13F4 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
      v110 = LODWORD(nameLabel->fields.onChange->monitor) * v80;
      UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0);
      v111 = v110 >= 0 ? v110 : v110 + 1;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.maskBase,
        ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v111 >> 1),
        0);
      nameLabel = (UILabel_o *)this->fields.maskSprite;
      if ( nameLabel )
      {
        UIWidget__set_height(
          (UIWidget_o *)nameLabel,
          ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v110,
          0);
        nameLabel = this->fields.maskInfoLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, closedMessage, 0);
          v109 = isCharaHide;
          goto LABEL_161;
        }
      }
    }
LABEL_16:
    sub_1C71608(nameLabel, *(_QWORD *)&idx);
  }
  nameLabel = (UILabel_o *)this->fields.maskBase;
  if ( !nameLabel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  nameLabel = this->fields.maskInfoLabel;
  v109 = isCharaHide;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_161:
  v112 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = v94 != 0;
  this->fields.isCharaHide = v109 == 1;
  if ( !v112 )
    goto LABEL_16;
  v113 = 0;
  v114 = 100;
  while ( 1 )
  {
    v115 = v112->max_length;
    if ( (int)v113 >= v115 || (int)v113 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v113 >= v115 )
      goto LABEL_175;
    v116 = v112->m_Items[v113];
    v122 = v114;
    v117 = System_Int32__ToString((int32_t)&v122, 0);
    nameLabel = (UILabel_o *)System_String__Concat_64031724((System_String_o *)StringLiteral_20543/*"img_npgage_"*/, v117, 0);
    if ( v116 )
    {
      UISprite__set_spriteName(v116, (System_String_o *)nameLabel, 0);
      v112 = this->fields.guageSpriteList;
      ++v113;
      v114 += 100;
      if ( v112 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v89;
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
    sub_1C71608(condSprite, method);
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