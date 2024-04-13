void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantStatusNpComponent_c *v4; // x8

  if ( (byte_42ECBA1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusNpComponent_TypeInfo, v1, v2, v3);
    byte_42ECBA1 = 1;
  }
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_MAX_HEIGHT = 500;
  v4 = ServantStatusNpComponent_TypeInfo;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_DEFAULT_HEIGHT = 57;
  v4->static_fields->DETAIL_LINE_HEIGHT = 19;
  v4->static_fields->MULTI_NP_POS_Y = -50.0;
  v4->static_fields->MASK_BASE_POS_Y = -11.0;
  v4->static_fields->MASK_DEFAULT_HEIGHT = 252;
  v4->static_fields->COND_TITLE_MAX_WIDTH = 540;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_HashSet_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ECBA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v5, v6, v7);
    byte_42ECBA0 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields.costumeIdHash = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusNpComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v18; // w21
  int32_t commandLimitCountAdjust; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x20

  v5 = this;
  if ( (byte_42ECB9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v6, v7, v8);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v9, v10, v11);
    this = (ServantStatusNpComponent_o *)sub_B5D5C4(
                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                           v12,
                                           v13,
                                           v14);
    byte_42ECB9F = 1;
  }
  if ( !item )
    goto LABEL_24;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0LL);
  commandLimitCountFix = v5->fields.commandLimitCountFix;
  v18 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0 || LimitCountByImageLimitCostumeIn == commandLimitCountFix )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v5->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountFix = v18;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v18,
            (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v5->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v5->fields.commandLimitCountAdjust;
  if ( (commandLimitCountAdjust & 0x80000000) != 0 || commandLimitCountFix <= commandLimitCountAdjust )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v5->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v5->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)this,
                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_24:
    sub_B5D69C(this, item);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           MasterData_WarQuestSelectionMaster,
           (int32_t)this,
           commandLimitCountAdjust,
           0LL);
}


void __fastcall ServantStatusNpComponent__ModifyCommandCard(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  DataManager_o *CommandLimitCount; // x0
  __int64 v37; // x1
  struct BattleCommandData_o *commandCardData; // x8
  struct BattleCommandData_o *v39; // x23
  ServantLimitImageMaster_o *v40; // x21
  int32_t SvtId; // w0
  int32_t dispLimitCount; // w22
  int32_t v43; // w20
  struct UnityEngine_GameObject_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v45; // x21
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  DataManager_o *v50; // x23
  System_Int32_array **gameObject; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x2
  int32_t cardType; // w25
  int32_t v60; // w24
  int32_t v61; // w26
  BattleCommandData_o *v62; // x27
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct BattleCommandData_o *v69; // x25
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v71; // w0
  int32_t v72; // w24
  int32_t v73; // w20
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct BattleCommandData_o *v75; // x9
  struct BattleCommandComponent_o **p_commandCardComponent; // x19
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECB9E & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v12, v13, v14);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NGUITools_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_15172/*"Unlit/Transparent Colored"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_4231/*"CommandCard"*/, v33, v34, v35);
    byte_42ECB9E = 1;
  }
  if ( this->fields.tdEntity )
  {
    if ( this->fields.commandCardData )
    {
      CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, method);
      commandCardData = this->fields.commandCardData;
      if ( commandCardData )
      {
        commandCardData->fields.svtlimit = (int)CommandLimitCount;
        v39 = this->fields.commandCardData;
        CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( CommandLimitCount )
        {
          CommandLimitCount = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 CommandLimitCount,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( item )
          {
            v40 = (ServantLimitImageMaster_o *)CommandLimitCount;
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            dispLimitCount = item->fields.dispLimitCount;
            v43 = SvtId;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                   dispLimitCount,
                                                   0LL);
            if ( v40 )
            {
              CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v40,
                                                     v43,
                                                     (int32_t)CommandLimitCount,
                                                     0LL);
              if ( v39 )
              {
                v39->fields._loadsvtLimit = (int)CommandLimitCount;
                CommandLimitCount = (DataManager_o *)this->fields.commandCardComponent;
                if ( CommandLimitCount )
                {
                  BattleCommandComponent__setData(
                    (BattleCommandComponent_o *)CommandLimitCount,
                    this->fields.commandCardData,
                    0LL,
                    0,
                    1,
                    0,
                    0LL);
                  CommandLimitCount = (DataManager_o *)this->fields.commandCardComponent;
                  if ( CommandLimitCount )
                  {
                    BattleCommandComponent__updateView(
                      (BattleCommandComponent_o *)CommandLimitCount,
                      1,
                      0,
                      1,
                      0,
                      this->fields.isCharaHide,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_39:
      sub_B5D69C(CommandLimitCount, v37);
    }
    commandCardPrefab = this->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardPrefab,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v45 = (UnityEngine_GameObject_o *)CommandLimitCount;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(v45, 0LL);
    if ( !CommandLimitCount )
      goto LABEL_39;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v45, (System_String_o *)StringLiteral_4231/*"CommandCard"*/, 0LL);
    CommandLimitCount = (DataManager_o *)this->fields.commandCardBase;
    if ( !CommandLimitCount )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)CommandLimitCount,
                                           0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v86.fields.x = x;
    v86.fields.y = y;
    v86.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v86, 0LL);
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      v45,
      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v45,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v50 = CommandLimitCount;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)CommandLimitCount, 110, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v50[2].fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)gameObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50[2].fields.masterLoadThreads,
      gameObject,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, v58);
    if ( !item )
      goto LABEL_39;
    cardType = this->fields.cardType;
    v60 = (int)CommandLimitCount;
    v61 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v62 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_18880712(v62, cardType, v61, v60, 0, 0LL);
    this->fields.commandCardData = v62;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commandCardData,
      (System_Int32_array **)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    v69 = this->fields.commandCardData;
    CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CommandLimitCount )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        CommandLimitCount,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v71 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v72 = item->fields.dispLimitCount;
    v73 = v71;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v72, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           MasterData_WarQuestSelectionMaster,
                                           v73,
                                           (int32_t)CommandLimitCount,
                                           0LL);
    if ( !v69 )
      goto LABEL_39;
    v69->fields._loadsvtLimit = (int)CommandLimitCount;
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_39;
    v75 = this->fields.commandCardData;
    if ( !v75 )
      goto LABEL_39;
    v75->fields.treasureDvc = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v50, this->fields.commandCardData, 0LL, 0, 1, 0, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v50, (System_String_o *)StringLiteral_15172/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v50, 1, 0, 1, 0, this->fields.isCharaHide, 0LL);
    this->fields.commandCardComponent = (struct BattleCommandComponent_o *)v50;
    p_commandCardComponent = &this->fields.commandCardComponent;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_commandCardComponent,
      (System_Int32_array **)v50,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    CommandLimitCount = (DataManager_o *)*(p_commandCardComponent - 11);
    if ( !CommandLimitCount )
      goto LABEL_39;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(v45, layer, 0LL);
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
  int32_t v16; // w24
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v65; // x19
  int max_length; // w9
  __int64 v67; // x19
  __int64 v68; // x19
  TreasureDvcMaster_o *v69; // x19
  struct TreasureDvcEntity_o *v70; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x19
  __int64 v79; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t dispLimitCount; // w24
  ServantLimitAddMaster_o *v82; // x19
  int32_t LimitCountByImageLimitCostumeIn; // w24
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x25
  int32_t ServantImageLimitSealAfter; // w24
  UILabel_o *rubyLabel; // x19
  struct UILabel_o *v87; // x19
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v90; // x8
  struct UILabel_o *npRankLabel; // x19
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v93; // x8
  struct UILabel_o *npTypeLabel; // x19
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v96; // x8
  UILabel_o *npLevelLabel; // x24
  System_String_o *v98; // x25
  System_String_o *v99; // x0
  UILabel_o *maxGuageLabel; // x24
  System_String_o *v101; // x25
  Il2CppObject *v102; // x0
  UIWidget_o *explanationLabel; // x24
  int32_t *p_monitor; // x8
  __int64 v105; // x24
  __int64 v106; // x24
  TreasureDvcLvEntity_o *v107; // x0
  System_String_o *Detail; // x19
  ServantStatusNpComponent_c *v109; // x0
  UILabel_o *v110; // x24
  int32_t v111; // w28
  int32_t SvtId; // w0
  int32_t *p_cardId; // x8
  int32_t v114; // w9
  struct UILabel_o *v115; // x8
  int32_t mHeight; // w19
  int32_t monitor_high; // w8
  struct UILabel_o *v118; // x9
  int32_t v119; // w19
  int32_t v120; // w28
  int32_t v121; // w27
  UILabel_o *condLabel; // x19
  float MULTI_NP_POS_Y; // s0
  double v124; // d0
  int32_t v125; // w19
  __int64 v126; // x24
  __int64 v127; // x24
  ServantTreasureDeviceReleaseMaster_o *v128; // x24
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_o *v136; // x1
  int v137; // w19
  int v138; // w8
  struct UISprite_array *v139; // x8
  __int64 v140; // x21
  int v141; // w22
  int v142; // w9
  UISprite_o *v143; // x19
  System_String_o *v144; // x0
  __int64 v145; // x0
  int32_t v146; // [xsp+0h] [xbp-80h]
  int32_t v147; // [xsp+4h] [xbp-7Ch]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  int v149; // [xsp+1Ch] [xbp-64h]
  int v151; // [xsp+24h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v16 = idx;
  if ( (byte_42ECB9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, idx, (_DWORD)tdInfo, item);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v27, v28, v29);
    sub_B5D5C4(&DataManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Clear__, v33, v34, v35);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&ServantStatusNpComponent_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_19785/*"img_npgage_"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12140/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_19786/*"img_npgage_bg"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1/*""*/, v60, v61, v62);
    byte_42ECB9D = 1;
  }
  entity = 0LL;
  v151 = 0;
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
  v149 = v16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v65 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v65 >= max_length )
      break;
    if ( (unsigned int)v65 >= max_length )
    {
LABEL_166:
      v145 = sub_B5D6C8(nameLabel);
      sub_B5D668(v145, 0LL);
    }
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v65];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_19786/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v65;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  if ( tdId < 1 )
    return;
  v67 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v68 = **(_QWORD **)(v67 + 192);
  if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
    sub_AF52C4(v68);
  nameLabel = **(UILabel_o ***)(v68 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !item )
    goto LABEL_16;
  v69 = (TreasureDvcMaster_o *)nameLabel;
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v69 )
    goto LABEL_16;
  v70 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v69, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v70;
  p_tdEntity = &this->fields.tdEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdEntity,
    (System_Int32_array **)v70,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( !this->fields.tdEntity )
    return;
  v78 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v79 = **(_QWORD **)(v78 + 192);
  if ( (*(_BYTE *)(v79 + 306) & 1) == 0 )
    sub_AF52C4(v79);
  nameLabel = **(UILabel_o ***)(v79 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)nameLabel,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  dispLimitCount = item->fields.dispLimitCount;
  v82 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  v147 = condLimitCount;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(dispLimitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v82 )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(v82, &entity, (int32_t)nameLabel, ServantImageLimitSealAfter, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
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
    v87 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v87 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v87;
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
    v90 = this->fields.tdEntity;
    if ( !v90 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v90->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
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
    v93 = this->fields.tdEntity;
    if ( !v93 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v93->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
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
    v96 = this->fields.tdEntity;
    if ( !v96 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v96->fields.typeText;
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
    v98 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v99 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44580072(v98, (System_String_o *)StringLiteral_885/*"/"*/, v99, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v151 = 100 * tdInfo->fields.guageCount;
  v102 = (Il2CppObject *)System_Int32__ToString((int32_t)&v151, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v101, v102, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( multiFlg )
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onPostFill->monitor + 1;
    if ( !explanationLabel )
      goto LABEL_16;
  }
  else
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onPostFill->monitor;
    if ( !explanationLabel )
      goto LABEL_16;
  }
  UIWidget__set_height(explanationLabel, *p_monitor, 0LL);
  v105 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v106 = **(_QWORD **)(v105 + 192);
  if ( (*(_BYTE *)(v106 + 306) & 1) == 0 )
    sub_AF52C4(v106);
  nameLabel = **(UILabel_o ***)(v106 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v107 = TreasureDvcLvMaster__GetEntity(
           (TreasureDvcLvMaster_o *)nameLabel,
           (*p_tdEntity)->fields.id,
           tdInfo->fields.lv,
           0LL);
  if ( v107 )
    Detail = TreasureDvcLvEntity__getDetail(v107, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v109 = ServantStatusNpComponent_TypeInfo;
  v110 = this->fields.explanationLabel;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v109 = ServantStatusNpComponent_TypeInfo;
  }
  v111 = WrapControlText__textBBCodeAdjust(
           v110,
           Detail,
           v109->static_fields->DETAIL_FONT_SIZE,
           v109->static_fields->DETAIL_FONT_SIZE,
           v109->static_fields->DETAIL_MAX_HEIGHT,
           0LL);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(SvtId, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = (int32_t *)&nameLabel->fields.mGo;
  v114 = *p_cardId;
  v115 = this->fields.explanationLabel;
  this->fields.cardType = v114;
  if ( !v115 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v115->fields.mHeight;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  v146 = v111;
  monitor_high = HIDWORD(nameLabel->fields.onPostFill->monitor);
  if ( mHeight <= monitor_high )
  {
    v120 = isCharaHide;
    v121 = 0;
  }
  else
  {
    v118 = this->fields.explanationLabel;
    if ( !v118 )
      goto LABEL_16;
    v119 = v118->fields.mHeight;
    v120 = isCharaHide;
    if ( (HIBYTE(nameLabel->fields.mLocalToPanel.fields.m32) & 4) != 0 && !LODWORD(nameLabel->fields.panel) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v121 = v119 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(nameLabel, *(_QWORD *)&idx);
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
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    }
    if ( !condLabel )
      goto LABEL_16;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    MULTI_NP_POS_Y = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( MULTI_NP_POS_Y == INFINITY )
      v124 = -MULTI_NP_POS_Y;
    else
      v124 = MULTI_NP_POS_Y;
    v125 = UnityEngine_Mathf__Abs_41629140((int)v124, 0LL);
    if ( v149 < 1 )
      this->fields.commandLimitCountAdjust = v147 - 1;
    else
      this->fields.commandLimitCountFix = v147;
    v126 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v126 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v127 = **(_QWORD **)(v126 + 192);
    if ( (*(_BYTE *)(v127 + 306) & 1) == 0 )
      sub_AF52C4(v127);
    nameLabel = **(UILabel_o ***)(v127 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v128 = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)nameLabel,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v128 )
      goto LABEL_16;
    v121 += v125;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v128, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
      (System_Int32_array **)CorrespondsCostume,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
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
      (const MethodInfo_24FFA90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( tdInfo->fields.id == tdId )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v136 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( !this->fields.maskBase )
      goto LABEL_16;
    v137 = HIDWORD(nameLabel->fields.onPostFill->monitor) * v146;
    UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
    v138 = v137 >= 0 ? v137 : v137 + 1;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.maskBase,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v138 >> 1),
      0LL);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( !nameLabel )
      goto LABEL_16;
    UIWidget__set_height(
      (UIWidget_o *)nameLabel,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v137,
      0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v136 = closedMessage;
  }
  UILabel__set_text(nameLabel, v136, 0LL);
  v139 = this->fields.guageSpriteList;
  this->fields.isCharaHide = v120 == 1;
  if ( !v139 )
    goto LABEL_16;
  v140 = 0LL;
  v141 = 100;
  while ( 1 )
  {
    v142 = v139->max_length;
    if ( (int)v140 >= v142 || (int)v140 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v140 >= v142 )
      goto LABEL_166;
    v143 = v139->m_Items[v140];
    v151 = v141;
    v144 = System_Int32__ToString((int32_t)&v151, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_19785/*"img_npgage_"*/, v144, 0LL);
    if ( v143 )
    {
      UISprite__set_spriteName(v143, (System_String_o *)nameLabel, 0LL);
      v139 = this->fields.guageSpriteList;
      ++v140;
      v141 += 100;
      if ( v139 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v121;
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