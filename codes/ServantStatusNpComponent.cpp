void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19F67 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusNpComponent_TypeInfo, v1);
    byte_4B19F67 = 1;
  }
  static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x3900000012LL;
  static_fields->DETAIL_LINE_HEIGHT = 19;
  *(_QWORD *)&static_fields->MULTI_NP_POS_Y = 0xC1300000C2480000LL;
  *(_QWORD *)&static_fields->MASK_DEFAULT_HEIGHT = 0x21C000000FCLL;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B19F66 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4B19F66 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.costumeIdHash, (int32_t)v4, v5, v6);
  this->fields.fixedCardLimitCountFlag = 1;
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
  if ( (byte_4B19F65 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v6);
    this = (ServantStatusNpComponent_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B19F65 = 1;
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
  v11 = LimitCountByImageLimitCostumeIn;
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
    commandLimitCountFix = v11;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v11,
            (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0LL),
        !MasterData_object) )
  {
LABEL_25:
    sub_1BCB254(this, item);
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
  const MethodInfo *v32; // x3
  int32_t v33; // w24
  const MethodInfo *v34; // x2
  int32_t v35; // w25
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  int32_t cardType; // w26
  int32_t v38; // w21
  BattleCommandData_o *v39; // x27
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct BattleCommandData_o *v42; // x25
  Il2CppObject *v43; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  CGThumbnailListItem_o *p_commandCardComponent; // x19
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_4B19F64 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommandData_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v8);
    sub_1BCAFF8(&NGUITools_TypeInfo, v9);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_15011/*"Unlit/Transparent Colored"*/, v13);
    this = (ServantStatusNpComponent_o *)sub_1BCAFF8(&StringLiteral_4544/*"CommandCard"*/, v14);
    byte_4B19F64 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v16);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0LL);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v19 = (int)this;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
      sub_1BCB254(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v22, (System_String_o *)StringLiteral_4544/*"CommandCard"*/, 0LL);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v27);
      byte_4B16191 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4B16197 )
    {
      sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v28);
      byte_4B16197 = 1;
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
      (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v22,
                                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v29 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    v29[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v29[1].fields.explanationLabel, (int32_t)gameObject, v31, v32);
    if ( !v3 )
      goto LABEL_38;
    v33 = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
    v35 = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v34);
    ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0LL);
    cardType = v4->fields.cardType;
    v38 = ConvertOverwriteDispImageLimitCount;
    v39 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_45632924(v39, cardType, v33, v35, 0, -1, 0LL);
    v4->fields.commandCardData = v39;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.commandCardData, (int32_t)v39, v40, v41);
    v42 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v43 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v29, (System_String_o *)StringLiteral_15011/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v29, 1, 0, 1, 0, v4->fields.isCharaHide, 0LL);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v29;
    p_commandCardComponent = (CGThumbnailListItem_o *)&v4->fields.commandCardComponent;
    sub_1BCAF9C(p_commandCardComponent, (int32_t)v29, v46, v47);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.sortValue1;
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
        int32_t dispMaskTreasureDevice,
        int32_t fixedCardLimitCount,
        const MethodInfo *method)
{
  int32_t v18; // w23
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
  __int64 v34; // x1
  __int64 v35; // x1
  UILabel_o *nameLabel; // x0
  __int64 v37; // x2
  struct UISprite_array *guageSpriteList; // x8
  __int64 v39; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  long double v42; // q0
  __int64 v43; // x8
  __int64 v44; // x0
  TreasureDvcMaster_o *v45; // x22
  __int64 v46; // x23
  __int64 v47; // x24
  struct TreasureDvcEntity_o *v48; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  long double v52; // q0
  __int64 v53; // x0
  __int64 v54; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t ConvertOverwriteDispImageLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w29
  Il2CppObject *Master_object; // x0
  __int64 v59; // x24
  __int64 v60; // x25
  ServantLimitImageMaster_o *v61; // x23
  int32_t ServantImageLimitSealAfter; // w23
  UILabel_o *rubyLabel; // x22
  struct UILabel_o *v64; // x22
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v67; // x8
  struct UILabel_o *npRankLabel; // x22
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v70; // x8
  struct UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v73; // x8
  UILabel_o *npLevelLabel; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x0
  UILabel_o *maxGuageLabel; // x22
  System_String_o *v78; // x23
  Il2CppObject *v79; // x0
  UIWidget_o *explanationLabel; // x22
  __int64 v81; // x9
  long double v82; // q0
  __int64 v83; // x0
  __int64 v84; // x0
  TreasureDvcLvEntity_o *v85; // x0
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v87; // x0
  UILabel_o *v88; // x23
  int32_t v89; // w0
  __int64 v90; // x22
  __int64 v91; // x23
  int32_t v92; // w24
  int32_t v93; // w0
  int32_t *p_cardId; // x8
  int32_t v95; // w9
  struct UILabel_o *v96; // x8
  int32_t mHeight; // w22
  int32_t monitor; // w8
  struct UILabel_o *v99; // x9
  int32_t v100; // w22
  int32_t v101; // w29
  UILabel_o *condLabel; // x22
  long double inited; // q0
  int v104; // w22
  int v105; // w28
  int32_t v106; // w23
  __int64 v107; // x0
  __int64 v108; // x0
  int32_t v109; // w21
  Il2CppObject *v110; // x0
  __int64 v111; // x23
  __int64 v112; // x24
  ServantTreasureDeviceReleaseMaster_o *v113; // x22
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  int32_t v117; // w21
  int v118; // w21
  int v119; // w8
  struct UISprite_array *v120; // x8
  __int64 v121; // x22
  int v122; // w23
  int v123; // w9
  UISprite_o *v124; // x21
  System_String_o *v125; // x0
  int32_t v126; // [xsp+Ch] [xbp-94h]
  int v127; // [xsp+1Ch] [xbp-84h]
  System_String_o *value; // [xsp+20h] [xbp-80h]
  int v130; // [xsp+34h] [xbp-6Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  v18 = idx;
  if ( (byte_4B19F63 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v21);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v22);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v23);
    sub_1BCAFF8(&DataManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v25);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v26);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v27);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1BCAFF8(&ServantStatusNpComponent_TypeInfo, v29);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v30);
    sub_1BCAFF8(&StringLiteral_20279/*"img_npgage_"*/, v31);
    sub_1BCAFF8(&StringLiteral_11839/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v32);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v33);
    sub_1BCAFF8(&StringLiteral_20280/*"img_npgage_bg"*/, v34);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v35);
    byte_4B19F63 = 1;
  }
  entity = 0LL;
  v130 = 0;
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
  v127 = v18;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v39 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v39 >= max_length )
      break;
    if ( (unsigned int)v39 >= max_length )
LABEL_168:
      sub_1BCB25C(nameLabel, *(_QWORD *)&idx, v37);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v39];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20280/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v39;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  v126 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_16;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0LL);
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C1B45C(v42);
  v44 = *(_QWORD *)(*(_QWORD *)(v43 + 192) + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C1B45C(v42);
  nameLabel = **(UILabel_o ***)(v44 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_16;
  v45 = (TreasureDvcMaster_o *)nameLabel;
  v47 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v46 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v132.fields.currentCryptoKey = v47;
  *(_QWORD *)&v132.fields.fakeValue = v46;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v132, 0LL);
  if ( !v45 )
    goto LABEL_16;
  v48 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v45, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v48;
  p_tdEntity = &this->fields.tdEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tdEntity, (int32_t)v48, v50, v51);
  if ( !this->fields.tdEntity )
    return;
  v53 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
    v53 = sub_1C1B45C(v52);
  v54 = *(_QWORD *)(*(_QWORD *)(v53 + 192) + 16LL);
  if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
    v54 = sub_1C1B45C(v52);
  nameLabel = **(UILabel_o ***)(v54 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v60 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v59 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v61 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v60;
  *(_QWORD *)&v133.fields.fakeValue = v59;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v133, 0LL);
  if ( !v61 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v61,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
    v64 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v64 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v64;
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
    v67 = this->fields.tdEntity;
    if ( !v67 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v67->fields.name;
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
    v70 = this->fields.tdEntity;
    if ( !v70 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v70->fields.rank;
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
    v73 = this->fields.tdEntity;
    if ( !v73 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v73->fields.typeText;
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
    v75 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v76 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_62488672(v75, (System_String_o *)StringLiteral_1039/*"/"*/, v76, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v130 = 100 * tdInfo->fields.guageCount;
  v79 = (Il2CppObject *)System_Int32__ToString((int32_t)&v130, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v78, v79, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
  if ( !explanationLabel )
    goto LABEL_16;
  v81 = 4LL;
  if ( multiFlg )
    v81 = 8LL;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v81),
    0LL);
  v83 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v83 + 309) & 1) == 0 )
    v83 = sub_1C1B45C(v82);
  v84 = *(_QWORD *)(*(_QWORD *)(v83 + 192) + 16LL);
  if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
    v84 = sub_1C1B45C(v82);
  nameLabel = **(UILabel_o ***)(v84 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v85 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v85 )
    Detail = TreasureDvcLvEntity__getDetail(v85, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v87 = ServantStatusNpComponent_TypeInfo;
  v88 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v87 = ServantStatusNpComponent_TypeInfo;
  }
  v89 = WrapControlText__textBBCodeAdjust(
          v88,
          Detail,
          v87->static_fields->DETAIL_FONT_SIZE,
          v87->static_fields->DETAIL_FONT_SIZE,
          0LL);
  v91 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v90 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v92 = v89;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v134.fields.currentCryptoKey = v91;
  *(_QWORD *)&v134.fields.fakeValue = v90;
  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v134, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v93, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v95 = *p_cardId;
  v96 = this->fields.explanationLabel;
  this->fields.cardType = v95;
  if ( !v96 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v96->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor = (int32_t)nameLabel->fields.onChange->monitor;
  if ( mHeight <= monitor )
  {
    v101 = 0;
  }
  else
  {
    v99 = this->fields.explanationLabel;
    if ( !v99 )
      goto LABEL_16;
    v100 = v99->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v101 = v100 - monitor;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCB254(nameLabel, *(_QWORD *)&idx);
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
    UILabel__SetCondensedScale(
      condLabel,
      ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH,
      0,
      0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    *(float *)&inited = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&inited == INFINITY )
      v104 = 0x80000000;
    else
      v104 = (int)*(float *)&inited;
    if ( !byte_4B1715D )
    {
      sub_1BCAFF8(&System_Math_TypeInfo, *(_QWORD *)&idx);
      byte_4B1715D = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v104 >= 0 )
      v105 = v104;
    else
      v105 = -v104;
    if ( v127 < 1 )
      this->fields.commandLimitCountAdjust = v126 - 1;
    else
      this->fields.commandLimitCountFix = v126;
    v107 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v107 + 309) & 1) == 0 )
      v107 = sub_1C1B45C(inited);
    v108 = *(_QWORD *)(*(_QWORD *)(v107 + 192) + 16LL);
    if ( (*(_BYTE *)(v108 + 309) & 1) == 0 )
      v108 = sub_1C1B45C(inited);
    nameLabel = **(UILabel_o ***)(v108 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v109 = v92;
    v110 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v112 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v111 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v113 = (ServantTreasureDeviceReleaseMaster_o *)v110;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v135.fields.currentCryptoKey = v112;
    *(_QWORD *)&v135.fields.fakeValue = v111;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v135, 0LL);
    v106 = fixedCardLimitCount;
    if ( !v113 )
      goto LABEL_16;
    v101 += v105;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v113, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.costumeIdHash, (int32_t)CorrespondsCostume, v115, v116);
    v92 = v109;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    v106 = fixedCardLimitCount;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
      v118 = LODWORD(nameLabel->fields.onChange->monitor) * v92;
      UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
      v119 = v118 >= 0 ? v118 : v118 + 1;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.maskBase,
        ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v119 >> 1),
        0LL);
      nameLabel = (UILabel_o *)this->fields.maskSprite;
      if ( nameLabel )
      {
        UIWidget__set_height(
          (UIWidget_o *)nameLabel,
          ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v118,
          0LL);
        nameLabel = this->fields.maskInfoLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, closedMessage, 0LL);
          v117 = isCharaHide;
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
  v117 = isCharaHide;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_158:
  v120 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = v106 != 0;
  this->fields.isCharaHide = v117 == 1;
  if ( !v120 )
    goto LABEL_16;
  v121 = 0LL;
  v122 = 100;
  while ( 1 )
  {
    v123 = v120->max_length;
    if ( (int)v121 >= v123 || (int)v121 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v121 >= v123 )
      goto LABEL_168;
    v124 = v120->m_Items[v121];
    v130 = v122;
    v125 = System_Int32__ToString((int32_t)&v130, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_62450424((System_String_o *)StringLiteral_20279/*"img_npgage_"*/, v125, 0LL);
    if ( v124 )
    {
      UISprite__set_spriteName(v124, (System_String_o *)nameLabel, 0LL);
      v120 = this->fields.guageSpriteList;
      ++v121;
      v122 += 100;
      if ( v120 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v101;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusNpComponent__SetCondColor(
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
        UIWidget__set_color(condSprite, spriteColor, 0LL),
        (condSprite = (UIWidget_o *)this->fields.condLabel) == 0LL) )
  {
    sub_1BCB254(condSprite, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(condSprite, v10, 0LL);
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