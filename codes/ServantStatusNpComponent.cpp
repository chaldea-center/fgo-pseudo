void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusNpComponent_StaticFields *static_fields; // x8

  if ( (byte_4B13CF3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusNpComponent_TypeInfo, v1, v2);
    byte_4B13CF3 = 1;
  }
  static_fields = ServantStatusNpComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DETAIL_FONT_SIZE = xmmword_BD3AE0;
  *(_QWORD *)&static_fields->MULTI_NP_POS_Y = 0xC1300000C2480000LL;
  *(_QWORD *)&static_fields->MASK_DEFAULT_HEIGHT = 0x21C000000FCLL;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_HashSet_int__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13CF2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v5, v6);
    byte_4B13CF2 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.costumeIdHash = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeIdHash, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v15; // w21
  int32_t commandLimitCountAdjust; // w21
  Il2CppObject *MasterData_object; // x20

  v4 = this;
  if ( (byte_4B13CF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v5, v6);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v7, v8);
    this = (ServantStatusNpComponent_o *)sub_1BCA7E0(
                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                           v9,
                                           v10);
    byte_4B13CF1 = 1;
  }
  if ( !item )
    goto LABEL_25;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0LL);
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v15 = LimitCountByImageLimitCostumeIn;
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
    commandLimitCountFix = v15;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v15,
            (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0LL),
        !MasterData_object) )
  {
LABEL_25:
    sub_1BCAA3C(this, item);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t SvtId; // w20
  const MethodInfo *v26; // x2
  int32_t CommandLimitCount; // w22
  struct BattleCommandData_o *commandCardData; // x23
  int32_t v29; // w21
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *commandCardPrefab; // x20
  ServantStatusNpComponent_o *v33; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  ServantStatusNpComponent_o *v42; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int32_t v50; // w24
  const MethodInfo *v51; // x2
  int32_t v52; // w25
  int32_t DispLimitCount; // w0
  int32_t cardType; // w26
  int32_t v55; // w21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  BattleCommandData_o *v59; // x27
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct BattleCommandData_o *v66; // x25
  __int64 v67; // x1
  Il2CppObject *v68; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  PartyOrganizationUtility_o *p_commandCardComponent; // x19
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  v3 = item;
  v4 = this;
  if ( (byte_4B13CF0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData_TypeInfo, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v9, v10);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v11, v12);
    sub_1BCA7E0(&NGUITools_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v21, v22);
    this = (ServantStatusNpComponent_o *)sub_1BCA7E0(&StringLiteral_4679/*"CommandCard"*/, v23, v24);
    byte_4B13CF0 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( v3 )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v26);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCount(v3, 1, 0LL);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v29 = (int)this;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v30);
            this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v29, 0LL);
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
      sub_1BCAA3C(this, item);
    }
    commandCardPrefab = (Il2CppObject *)v4->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           commandCardPrefab,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_38;
    v33 = this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v33, 0LL);
    if ( !this )
      goto LABEL_38;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v33, (System_String_o *)StringLiteral_4679/*"CommandCard"*/, 0LL);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !transform )
      goto LABEL_38;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v38, v39);
      byte_4B109C1 = 1;
    }
    UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4B109C7 )
    {
      sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v40, v41);
      byte_4B109C7 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v80.fields.x = x;
    v80.fields.y = y;
    v80.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v80, 0LL);
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)v33,
      (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v33,
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_38;
    v42 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    v42[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v42[1].fields.explanationLabel,
      (int64_t)gameObject,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    if ( !v3 )
      goto LABEL_38;
    v50 = ServantStatusListViewItem__GetSvtId(v3, 1, 0LL);
    v52 = ServantStatusNpComponent__GetCommandLimitCount(v4, v3, v51);
    DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(v3, 1, 0LL);
    cardType = v4->fields.cardType;
    v55 = DispLimitCount;
    v59 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v56, v57, v58);
    BattleCommandData___ctor_44072696(v59, cardType, v50, v52, 0, -1, 0LL);
    v4->fields.commandCardData = v59;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.commandCardData, (int64_t)v59, v60, v61, v62, v63, v64, v65);
    v66 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_38;
    v68 = DataManager__GetMasterData_object_(
            (DataManager_o *)this,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v67);
    this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v55, 0LL);
    if ( !v68 )
      goto LABEL_38;
    this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           (ServantLimitImageMaster_o *)v68,
                                           v50,
                                           (int32_t)this,
                                           0LL);
    if ( !v66 )
      goto LABEL_38;
    v66->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_38;
    item = (ServantStatusListViewItem_o *)v4->fields.commandCardData;
    if ( !item )
      goto LABEL_38;
    LODWORD(item->fields.warBoardPartyItem) = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v42, (BattleCommandData_o *)item, 0LL, 0, 1, 0, 1, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v42, (System_String_o *)StringLiteral_15295/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v42, 1, 0, 1, 0, v4->fields.isCharaHide, 0LL);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v42;
    p_commandCardComponent = (PartyOrganizationUtility_o *)&v4->fields.commandCardComponent;
    sub_1BCA784(p_commandCardComponent, (int64_t)v42, v71, v72, v73, v74, v75, v76);
    this = *(ServantStatusNpComponent_o **)&p_commandCardComponent[-1].fields._SelectedPartyMemberPosition_k__BackingField;
    if ( !this )
      goto LABEL_38;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v77);
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v33, layer, 0LL);
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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v54; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  long double v57; // q0
  __int64 v58; // x8
  __int64 v59; // x0
  TreasureDvcMaster_o *v60; // x22
  __int64 v61; // x23
  __int64 v62; // x24
  struct TreasureDvcEntity_o *v63; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  long double v71; // q0
  __int64 v72; // x0
  __int64 v73; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v75; // x1
  int32_t DispLimitCount; // w23
  __int64 v77; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w29
  Il2CppObject *Master_object; // x0
  __int64 v80; // x1
  __int64 v81; // x24
  __int64 v82; // x25
  ServantLimitImageMaster_o *v83; // x23
  int32_t ServantImageLimitSealAfter; // w23
  UILabel_o *rubyLabel; // x22
  struct UILabel_o *v86; // x22
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v89; // x8
  struct UILabel_o *npRankLabel; // x22
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v92; // x8
  struct UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v95; // x8
  UILabel_o *npLevelLabel; // x22
  System_String_o *v97; // x23
  System_String_o *v98; // x0
  __int64 v99; // x1
  UILabel_o *maxGuageLabel; // x22
  System_String_o *v101; // x23
  Il2CppObject *v102; // x0
  UIWidget_o *explanationLabel; // x22
  __int64 v104; // x9
  long double v105; // q0
  __int64 v106; // x0
  __int64 v107; // x0
  TreasureDvcLvEntity_o *v108; // x0
  __int64 v109; // x1
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v111; // x0
  UILabel_o *v112; // x23
  int32_t v113; // w0
  __int64 v114; // x1
  __int64 v115; // x22
  __int64 v116; // x23
  int32_t v117; // w24
  int32_t v118; // w0
  int32_t *p_cardId; // x8
  int32_t v120; // w9
  struct UILabel_o *v121; // x8
  int32_t mHeight; // w22
  int32_t monitor_high; // w8
  struct UILabel_o *v124; // x9
  int32_t v125; // w22
  int32_t v126; // w29
  UILabel_o *condLabel; // x22
  __int64 v128; // x2
  long double inited; // q0
  int v130; // w22
  int v131; // w28
  int32_t v132; // w23
  __int64 v133; // x0
  __int64 v134; // x0
  int32_t v135; // w21
  Il2CppObject *v136; // x0
  __int64 v137; // x1
  __int64 v138; // x23
  __int64 v139; // x24
  ServantTreasureDeviceReleaseMaster_o *v140; // x22
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int32_t v148; // w21
  int v149; // w21
  int v150; // w8
  struct UISprite_array *v151; // x8
  __int64 v152; // x22
  int v153; // w23
  int v154; // w9
  UISprite_o *v155; // x21
  System_String_o *v156; // x0
  int32_t v157; // [xsp+Ch] [xbp-94h]
  int v158; // [xsp+1Ch] [xbp-84h]
  System_String_o *value; // [xsp+20h] [xbp-80h]
  int v161; // [xsp+34h] [xbp-6Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  v18 = idx;
  if ( (byte_4B13CEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&idx, tdInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v26, v27);
    sub_1BCA7E0(&DataManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Clear__, v30, v31);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v32, v33);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37);
    sub_1BCA7E0(&ServantStatusNpComponent_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v40, v41);
    sub_1BCA7E0(&StringLiteral_20586/*"img_npgage_"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12026/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_20587/*"img_npgage_bg"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v50, v51);
    byte_4B13CEF = 1;
  }
  entity = 0LL;
  v161 = 0;
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
  v158 = v18;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v54 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v54 >= max_length )
      break;
    if ( (unsigned int)v54 >= max_length )
LABEL_168:
      sub_1BCAA44(nameLabel, *(_QWORD *)&idx);
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v54];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_20587/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v54;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  v157 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_16;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0LL);
  v58 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
    v58 = sub_1C1C6BC(v57);
  v59 = *(_QWORD *)(*(_QWORD *)(v58 + 192) + 16LL);
  if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
    v59 = sub_1C1C6BC(v57);
  nameLabel = **(UILabel_o ***)(v59 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_16;
  v60 = (TreasureDvcMaster_o *)nameLabel;
  v62 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v61 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
  *(_QWORD *)&v163.fields.currentCryptoKey = v62;
  *(_QWORD *)&v163.fields.fakeValue = v61;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v163, 0LL);
  if ( !v60 )
    goto LABEL_16;
  v63 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v60, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v63;
  p_tdEntity = &this->fields.tdEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tdEntity, (int64_t)v63, v65, v66, v67, v68, v69, v70);
  if ( !this->fields.tdEntity )
    return;
  v72 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
    v72 = sub_1C1C6BC(v71);
  v73 = *(_QWORD *)(*(_QWORD *)(v72 + 192) + 16LL);
  if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
    v73 = sub_1C1C6BC(v71);
  nameLabel = **(UILabel_o ***)(v73 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameLabel,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v75);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v82 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v81 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v83 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v80);
  *(_QWORD *)&v164.fields.currentCryptoKey = v82;
  *(_QWORD *)&v164.fields.fakeValue = v81;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v164, 0LL);
  if ( !v83 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v83,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
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
    v86 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v86 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v86;
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
    v89 = this->fields.tdEntity;
    if ( !v89 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v89->fields.name;
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
    v92 = this->fields.tdEntity;
    if ( !v92 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v92->fields.rank;
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
    v95 = this->fields.tdEntity;
    if ( !v95 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v95->fields.typeText;
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
    v97 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v98 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_62412480(v97, (System_String_o *)StringLiteral_1120/*"/"*/, v98, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12026/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v161 = 100 * tdInfo->fields.guageCount;
  v102 = (Il2CppObject *)System_Int32__ToString((int32_t)&v161, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v101, v102, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx);
  if ( !explanationLabel )
    goto LABEL_16;
  v104 = 8LL;
  if ( multiFlg )
    v104 = 12LL;
  UIWidget__set_height(
    explanationLabel,
    *(int32_t *)((char *)&ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE + v104),
    0LL);
  v106 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v106 + 309) & 1) == 0 )
    v106 = sub_1C1C6BC(v105);
  v107 = *(_QWORD *)(*(_QWORD *)(v106 + 192) + 16LL);
  if ( (*(_BYTE *)(v107 + 309) & 1) == 0 )
    v107 = sub_1C1C6BC(v105);
  nameLabel = **(UILabel_o ***)(v107 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v108 = TreasureDvcLvMaster__GetEntity(
           (TreasureDvcLvMaster_o *)nameLabel,
           (*p_tdEntity)->fields.id,
           tdInfo->fields.lv,
           0LL);
  if ( v108 )
    Detail = TreasureDvcLvEntity__getDetail(v108, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v111 = ServantStatusNpComponent_TypeInfo;
  v112 = this->fields.explanationLabel;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, v109);
    v111 = ServantStatusNpComponent_TypeInfo;
  }
  v113 = WrapControlText__textBBCodeAdjust(
           v112,
           Detail,
           v111->static_fields->DETAIL_FONT_SIZE,
           v111->static_fields->DETAIL_FONT_SIZE,
           v111->static_fields->DETAIL_MAX_HEIGHT,
           0LL);
  v116 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v115 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v117 = v113;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v114);
  *(_QWORD *)&v165.fields.currentCryptoKey = v116;
  *(_QWORD *)&v165.fields.fakeValue = v115;
  v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v165, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v118, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = &nameLabel->fields.updateAnchors;
  v120 = *p_cardId;
  v121 = this->fields.explanationLabel;
  this->fields.cardType = v120;
  if ( !v121 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v121->fields.mHeight;
  if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor_high = HIDWORD(nameLabel->fields.onChange->monitor);
  if ( mHeight <= monitor_high )
  {
    v126 = 0;
  }
  else
  {
    v124 = this->fields.explanationLabel;
    if ( !v124 )
      goto LABEL_16;
    v125 = v124->fields.mHeight;
    if ( !LODWORD(nameLabel->fields.hitCheck) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel, *(_QWORD *)&idx);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v126 = v125 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(nameLabel, *(_QWORD *)&idx);
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
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx);
    if ( !condLabel )
      goto LABEL_16;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    *(float *)&inited = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( *(float *)&inited == INFINITY )
      v130 = 0x80000000;
    else
      v130 = (int)*(float *)&inited;
    if ( !byte_4B11A22 )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&idx, v128);
      byte_4B11A22 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&idx);
    if ( v130 >= 0 )
      v131 = v130;
    else
      v131 = -v130;
    if ( v158 < 1 )
      this->fields.commandLimitCountAdjust = v157 - 1;
    else
      this->fields.commandLimitCountFix = v157;
    v133 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v133 + 309) & 1) == 0 )
      v133 = sub_1C1C6BC(inited);
    v134 = *(_QWORD *)(*(_QWORD *)(v133 + 192) + 16LL);
    if ( (*(_BYTE *)(v134 + 309) & 1) == 0 )
      v134 = sub_1C1C6BC(inited);
    nameLabel = **(UILabel_o ***)(v134 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v135 = v117;
    v136 = DataManager__GetMasterData_object_(
             (DataManager_o *)nameLabel,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v139 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v138 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v140 = (ServantTreasureDeviceReleaseMaster_o *)v136;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v137);
    *(_QWORD *)&v166.fields.currentCryptoKey = v139;
    *(_QWORD *)&v166.fields.fakeValue = v138;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v166, 0LL);
    v132 = fixedCardLimitCount;
    if ( !v140 )
      goto LABEL_16;
    v126 += v131;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v140, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.costumeIdHash,
      (int64_t)CorrespondsCostume,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
    v117 = v135;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    v132 = fixedCardLimitCount;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_3455238 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( dispMaskTreasureDevice && (dispMaskTreasureDevice == 1 || tdInfo->fields.id != tdId) )
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo, *(_QWORD *)&idx);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( this->fields.maskBase )
    {
      v149 = HIDWORD(nameLabel->fields.onChange->monitor) * v117;
      UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
      v150 = v149 >= 0 ? v149 : v149 + 1;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.maskBase,
        ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v150 >> 1),
        0LL);
      nameLabel = (UILabel_o *)this->fields.maskSprite;
      if ( nameLabel )
      {
        UIWidget__set_height(
          (UIWidget_o *)nameLabel,
          ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v149,
          0LL);
        nameLabel = this->fields.maskInfoLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, closedMessage, 0LL);
          v148 = isCharaHide;
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
  v148 = isCharaHide;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_158:
  v151 = this->fields.guageSpriteList;
  this->fields.fixedCardLimitCountFlag = v132 != 0;
  this->fields.isCharaHide = v148 == 1;
  if ( !v151 )
    goto LABEL_16;
  v152 = 0LL;
  v153 = 100;
  while ( 1 )
  {
    v154 = v151->max_length;
    if ( (int)v152 >= v154 || (int)v152 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v152 >= v154 )
      goto LABEL_168;
    v155 = v151->m_Items[v152];
    v161 = v153;
    v156 = System_Int32__ToString((int32_t)&v161, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_20586/*"img_npgage_"*/, v156, 0LL);
    if ( v155 )
    {
      UISprite__set_spriteName(v155, (System_String_o *)nameLabel, 0LL);
      v151 = this->fields.guageSpriteList;
      ++v152;
      v153 += 100;
      if ( v151 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v126;
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