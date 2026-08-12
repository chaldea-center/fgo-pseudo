void ServantStatusListViewItemDrawFace___ctor(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.transformNameAddHeight = 20;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawFace__Awake(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v7; // 0:kr14_12.12

  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_9;
  v4 = (*(float (__fastcall **)(UnityEngine_Component_o *, _QWORD))&baseSprite->klass[1]._2.field_count)(
         baseSprite,
         *(_QWORD *)&baseSprite->klass[1]._2.interfaces_count);
  baseSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  this->fields.baseSize.fields.x = v4;
  this->fields.baseSize.fields.y = v5;
  this->fields.baseSize.fields.z = 0.0;
  if ( !baseSprite )
    goto LABEL_9;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.faceBase;
  this->fields.titleBasePosition = localPosition;
  if ( !baseSprite
    || (baseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)baseSprite,
                                                  0)) == 0
    || (v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0),
        baseSprite = (UnityEngine_Component_o *)this->fields.explanationLabel,
        this->fields.faceBasePosition = v7,
        !baseSprite)
    || (baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(baseSprite, 0)) == 0 )
  {
LABEL_9:
    sub_2213CDC(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0);
}


int32_t ServantStatusListViewItemDrawFace__GetKind(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  return 9;
}


void ServantStatusListViewItemDrawFace__ModifyFace(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ServantStatusListViewItemDrawFace__SetupButton(this, item, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetCostumeIcon(
        ServantStatusListViewItemDrawFace_o *this,
        int32_t index,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  struct ServantStatusListViewItemFace_array *faceItems; // x8

  faceItems = this->fields.faceItems;
  if ( !faceItems )
    goto LABEL_5;
  if ( LODWORD(faceItems->max_length) <= index )
    sub_2213CE4(this);
  this = (ServantStatusListViewItemDrawFace_o *)faceItems->m_Items[index];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  ServantStatusListViewItemFace__SetupCostumeIcon((ServantStatusListViewItemFace_o *)this, svtCostumeEntity, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetItem(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  __int64 *v11; // x8
  int v12; // w8
  __int64 ServantStatusExplanationText; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct ServantEntity_o *svtEntity; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w22
  struct UILabel_o *v20; // x23
  System_String_o *v21; // x24
  System_String_o *mText; // x25
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int v26; // w23
  const MethodInfo *v27; // x2
  __int64 v28; // x21
  const MethodInfo *v29; // x2
  int32_t AdditionalHeight; // w8
  int v31; // w24
  float y; // s0
  int v33; // w8
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *baseCollider; // x22
  UnityEngine_BoxCollider_o *v37; // x22
  int v39; // w22
  float x; // s8
  float v41; // s11
  float z; // s9
  float v43; // s10
  float v44; // s8
  float v45; // s11
  float v46; // s9
  float v47; // s8
  float v48; // s10
  float v49; // s9
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v52; // x3
  ServantCostumeMaster_o *v53; // x23
  __int64 v54; // x24
  __int64 v55; // x29
  struct ServantStatusListViewItemFace_array *faceItems; // x8
  ServantStatusListViewItemFace_o *v57; // x8
  struct ServantStatusListViewItemButton_o *levelButtonItem; // x8
  struct ServantStatusListViewItemFace_array *v59; // x8
  ServantStatusListViewItemFace_o *v60; // x8
  UISprite_o *v61; // x25
  __int64 v62; // x1
  __int64 v63; // x2
  int32_t v64; // w26
  struct ServantStatusListViewItemFace_array *v65; // x8
  ServantStatusListViewItemFace_o *v66; // x8
  struct ServantStatusListViewItemFace_array *v67; // x8
  ServantStatusListViewItemFace_o *v68; // x8
  UISprite_o *v69; // x25
  __int64 v70; // x1
  __int64 v71; // x2
  int32_t v72; // w26
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v74; // x3
  struct ServantStatusListViewItemFace_array *v75; // x8
  ServantStatusListViewItemFace_o *v76; // x8
  bool v77; // w1
  __int64 v78; // x2
  struct ServantStatusListViewItemFace_array *v79; // x8
  ServantStatusListViewItemFace_o *v80; // x8
  UISprite_o *faceSprite; // x25
  struct ServantStatusListViewItemFace_array *v82; // x8
  ServantStatusListViewItemFace_o *v83; // x8
  ServantStatusListViewItemFace_o *v84; // x8
  UISprite_o *v85; // x25
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  UnityEngine_Object_o *v91; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformNameAddHeight; // w8
  int v94; // w8
  UnityEngine_GameObject_o *v95; // x0
  int32_t v96; // w8
  int v97; // w8
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x2
  UnityEngine_Vector3_o size; // 0:kr20_12.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D347 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12430/*"SERVANT_STATUS_EXPLANATION_FACE"*/);
    sub_2213A60(&StringLiteral_12432/*"SERVANT_STATUS_EXPLANATION_FACE3"*/);
    sub_2213A60(&StringLiteral_12431/*"SERVANT_STATUS_EXPLANATION_FACE2"*/);
    sub_2213A60(&StringLiteral_12433/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/);
    byte_596D347 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&mode);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12430/*"SERVANT_STATUS_EXPLANATION_FACE"*/;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12431/*"SERVANT_STATUS_EXPLANATION_FACE2"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( !item->fields.servantLeaderInfo )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        ServantStatusExplanationText = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0);
        if ( !explanationLabel )
          goto LABEL_142;
        UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
        goto LABEL_33;
      }
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12432/*"SERVANT_STATUS_EXPLANATION_FACE3"*/;
    }
    ServantStatusExplanationText = (__int64)LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( !explanationLabel )
      goto LABEL_142;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_142;
    v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    *(_QWORD *)&v102.fields.currentCryptoKey = v17;
    *(_QWORD *)&v102.fields.fakeValue = v18;
    ServantStatusExplanationText = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v102, 0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_142;
      v19 = ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = (__int64)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                  (ServantLimitImageMaster_o *)Master_object,
                                                  (System_String_o *)StringLiteral_12433/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                  v19,
                                                  0);
        v20 = this->fields.explanationLabel;
        if ( !v20 )
          goto LABEL_142;
        v21 = (System_String_o *)ServantStatusExplanationText;
        mText = v20->fields.mText;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v19,
                                                        3,
                                                        0,
                                                        0,
                                                        0);
        v24 = System_String__Format(v21, LimitCountSealedServantName, 0);
        v25 = System_String__Concat_75651716(mText, v24, 0);
        UILabel__set_text(v20, v25, 0);
        v26 = 1;
LABEL_34:
        ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetIconLimitCountStageList(item, 0);
        if ( ServantStatusExplanationText )
        {
          v28 = ServantStatusExplanationText;
          ServantStatusListViewItemDrawFace__SetupFaceObjects(this, *(_DWORD *)(ServantStatusExplanationText + 24), v27);
          ServantStatusExplanationText = (__int64)this->fields.levelButtonItem;
          if ( ServantStatusExplanationText )
          {
            AdditionalHeight = ServantStatusListViewItemButton__GetAdditionalHeight(
                                 (ServantStatusListViewItemButton_o *)ServantStatusExplanationText,
                                 *(_DWORD *)(v28 + 24),
                                 v29);
            ServantStatusExplanationText = (__int64)this->fields.baseSprite;
            v31 = v26 ? AdditionalHeight + 32 : AdditionalHeight;
            if ( ServantStatusExplanationText )
            {
              y = this->fields.baseSize.fields.y;
              if ( y == INFINITY )
                v33 = 0x80000000;
              else
                v33 = (int)y;
              UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v33 + v31, 0);
              baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
              if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
              {
                ServantStatusExplanationText = (__int64)this->fields.baseSprite;
                if ( !ServantStatusExplanationText )
                  goto LABEL_142;
                v37 = this->fields.baseCollider;
                ServantStatusExplanationText = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ServantStatusExplanationText
                                                                                          + 664LL))(
                                                 ServantStatusExplanationText,
                                                 *(_QWORD *)(*(_QWORD *)ServantStatusExplanationText + 672LL));
                if ( !v37 )
                  goto LABEL_142;
                v103.fields.z = 0.0;
                UnityEngine_BoxCollider__set_size(v37, v103, 0);
              }
              ServantStatusExplanationText = (__int64)this->fields.titleSprite;
              if ( v31 >= 0 )
                v39 = v31;
              else
                v39 = v31 + 1;
              if ( ServantStatusExplanationText )
              {
                x = this->fields.titleBasePosition.fields.x;
                v41 = this->fields.titleBasePosition.fields.y;
                z = this->fields.titleBasePosition.fields.z;
                ServantStatusExplanationText = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                          0);
                if ( ServantStatusExplanationText )
                {
                  v104.fields.x = x;
                  v104.fields.z = z;
                  v43 = (float)(v39 >> 1);
                  v104.fields.y = v41 + v43;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)ServantStatusExplanationText,
                    v104,
                    0);
                  ServantStatusExplanationText = (__int64)this->fields.faceBase;
                  if ( ServantStatusExplanationText )
                  {
                    v44 = this->fields.faceBasePosition.fields.x;
                    v45 = this->fields.faceBasePosition.fields.y;
                    v46 = this->fields.faceBasePosition.fields.z;
                    ServantStatusExplanationText = (__int64)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                              0);
                    if ( ServantStatusExplanationText )
                    {
                      v105.fields.y = v45 + v43;
                      v105.fields.x = v44;
                      v105.fields.z = v46;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)ServantStatusExplanationText,
                        v105,
                        0);
                      ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
                      v47 = v26
                          ? (float)(this->fields.explanationBasePosition.fields.y - v43) + 16.0
                          : this->fields.explanationBasePosition.fields.y - v43;
                      if ( ServantStatusExplanationText )
                      {
                        v48 = this->fields.explanationBasePosition.fields.x;
                        v49 = this->fields.explanationBasePosition.fields.z;
                        ServantStatusExplanationText = (__int64)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                  0);
                        if ( ServantStatusExplanationText )
                        {
                          v106.fields.x = v48;
                          v106.fields.y = v47;
                          v106.fields.z = v49;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)ServantStatusExplanationText,
                            v106,
                            0);
                          SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
                          ServantStatusExplanationText = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( ServantStatusExplanationText )
                          {
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  (DataManager_o *)ServantStatusExplanationText,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
                            if ( *(int *)(v28 + 24) >= 1 )
                            {
                              v53 = (ServantCostumeMaster_o *)MasterData_object;
                              v54 = 0;
                              v55 = v28 + 32;
                              while ( 1 )
                              {
                                ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v54, 0, v52);
                                faceItems = this->fields.faceItems;
                                if ( !faceItems )
                                  goto LABEL_142;
                                if ( (unsigned int)v54 >= LODWORD(faceItems->max_length) )
                                  goto LABEL_143;
                                v57 = faceItems->m_Items[v54];
                                if ( !v57 )
                                  goto LABEL_142;
                                ServantStatusExplanationText = (__int64)v57->fields.frameSprite;
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_142;
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  1,
                                  0);
                                levelButtonItem = this->fields.levelButtonItem;
                                if ( !levelButtonItem )
                                  goto LABEL_142;
                                if ( (int)v54 >= levelButtonItem->fields.columnCount )
                                  break;
                                if ( (unsigned int)v54 >= *(_DWORD *)(v28 + 24) )
                                  goto LABEL_143;
                                if ( (*(_DWORD *)(v55 + 4 * v54) & 0x80000000) != 0 )
                                {
                                  ServantStatusExplanationText = ServantStatusListViewItem__get_IsMine(item, 0);
                                  v79 = this->fields.faceItems;
                                  if ( (ServantStatusExplanationText & 1) != 0 )
                                  {
                                    if ( !v79 )
                                      goto LABEL_142;
                                    if ( (unsigned int)v54 >= LODWORD(v79->max_length) )
                                      goto LABEL_143;
                                    v80 = v79->m_Items[v54];
                                    if ( !v80 )
                                      goto LABEL_142;
                                    faceSprite = v80->fields.faceSprite;
                                    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v78);
                                    ServantStatusExplanationText = AtlasManager__SetNoMountFace(faceSprite, 0);
                                    v82 = this->fields.faceItems;
                                    if ( !v82 )
                                      goto LABEL_142;
                                    if ( (unsigned int)v54 >= LODWORD(v82->max_length) )
                                      goto LABEL_143;
                                    v83 = v82->m_Items[v54];
                                    if ( !v83 )
                                      goto LABEL_142;
                                    ServantStatusExplanationText = (__int64)v83->fields.frameSprite;
                                    if ( !ServantStatusExplanationText )
                                      goto LABEL_142;
                                    v77 = 0;
                                    goto LABEL_96;
                                  }
                                  if ( !v79 )
                                    goto LABEL_142;
                                  if ( (unsigned int)v54 >= LODWORD(v79->max_length) )
LABEL_143:
                                    sub_2213CE4(ServantStatusExplanationText);
                                  v84 = v79->m_Items[v54];
                                  if ( !v84 )
                                    goto LABEL_142;
                                  v85 = v84->fields.faceSprite;
                                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v78);
                                  AtlasManager__SetNotOpenFace(v85, 0);
                                }
                                else
                                {
                                  ServantStatusExplanationText = ServantStatusListViewItem__get_LimitCount(item, 0);
                                  if ( (unsigned int)v54 >= *(_DWORD *)(v28 + 24) )
                                    goto LABEL_143;
                                  ServantStatusExplanationText = LimitCountUtility__GetSealAfter(
                                                                   SvtId,
                                                                   ServantStatusExplanationText,
                                                                   *(_DWORD *)(v55 + 4 * v54),
                                                                   1,
                                                                   0);
                                  v59 = this->fields.faceItems;
                                  if ( !v59 )
                                    goto LABEL_142;
                                  if ( (unsigned int)v54 >= LODWORD(v59->max_length) )
                                    goto LABEL_143;
                                  v60 = v59->m_Items[v54];
                                  if ( !v60 )
                                    goto LABEL_142;
                                  v61 = v60->fields.faceSprite;
                                  v64 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                          ServantStatusExplanationText,
                                          0);
                                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v62, v63);
                                  AtlasManager__SetFaceImage(v61, SvtId, v64, 1, 0, 0, 0);
                                }
LABEL_97:
                                if ( (int)++v54 >= *(_DWORD *)(v28 + 24) )
                                  goto LABEL_116;
                              }
                              v65 = this->fields.faceItems;
                              if ( !v65 )
                                goto LABEL_142;
                              if ( (unsigned int)v54 >= LODWORD(v65->max_length) )
                                goto LABEL_143;
                              v66 = v65->m_Items[v54];
                              if ( !v66 )
                                goto LABEL_142;
                              ServantStatusExplanationText = (__int64)v66->fields.faceSprite;
                              if ( !ServantStatusExplanationText )
                                goto LABEL_142;
                              UnityEngine_Behaviour__set_enabled(
                                (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                1,
                                0);
                              v67 = this->fields.faceItems;
                              if ( !v67 )
                                goto LABEL_142;
                              if ( (unsigned int)v54 >= LODWORD(v67->max_length) )
                                goto LABEL_143;
                              v68 = v67->m_Items[v54];
                              if ( !v68 )
                                goto LABEL_142;
                              if ( (unsigned int)v54 >= *(_DWORD *)(v28 + 24) )
                                goto LABEL_143;
                              v69 = v68->fields.faceSprite;
                              v72 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                      *(_DWORD *)(v55 + 4 * v54),
                                      0);
                              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v70, v71);
                              ServantStatusExplanationText = AtlasManager__SetFaceImage(v69, SvtId, v72, 1, 0, 0, 0);
                              if ( (unsigned int)v54 >= *(_DWORD *)(v28 + 24) )
                                goto LABEL_143;
                              if ( !v53 )
                                goto LABEL_142;
                              Entity = ServantCostumeMaster__GetEntity(v53, SvtId, *(_DWORD *)(v55 + 4 * v54), 0);
                              ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v54, Entity, v74);
                              v75 = this->fields.faceItems;
                              if ( !v75 )
                                goto LABEL_142;
                              if ( (unsigned int)v54 >= LODWORD(v75->max_length) )
                                goto LABEL_143;
                              v76 = v75->m_Items[v54];
                              if ( !v76 )
                                goto LABEL_142;
                              ServantStatusExplanationText = (__int64)v76->fields.frameSprite;
                              if ( !ServantStatusExplanationText )
                                goto LABEL_142;
                              v77 = 1;
LABEL_96:
                              UnityEngine_Behaviour__set_enabled(
                                (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                v77,
                                0);
                              goto LABEL_97;
                            }
LABEL_116:
                            if ( ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
                            {
                              transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
                              TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
                              if ( transformNameLabel )
                              {
                                UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
                                transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
                                TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(
                                                             item,
                                                             0);
                                if ( transformNameSprite )
                                {
                                  UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
                                  ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
                                  if ( ServantStatusExplanationText )
                                  {
                                    ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                              0);
                                    if ( ServantStatusExplanationText )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                        1,
                                        0);
                                      v88 = this->fields.transformNameLabel;
                                      ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetTransformName(
                                                                                item,
                                                                                0);
                                      if ( v88 )
                                      {
                                        UILabel__set_text(v88, (System_String_o *)ServantStatusExplanationText, 0);
                                        v91 = (UnityEngine_Object_o *)this->fields.baseCollider;
                                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v89, v90);
                                        if ( UnityEngine_Object__op_Inequality(v91, 0, 0) )
                                        {
                                          ServantStatusExplanationText = (__int64)this->fields.baseCollider;
                                          if ( !ServantStatusExplanationText )
                                            goto LABEL_142;
                                          size = UnityEngine_BoxCollider__get_size(
                                                   (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                                   0);
                                          v107.fields.x = size.fields.x;
                                          v107.fields.z = size.fields.z;
                                          ServantStatusExplanationText = (__int64)this->fields.baseCollider;
                                          if ( !ServantStatusExplanationText )
                                            goto LABEL_142;
                                          v107.fields.y = size.fields.y + (float)this->fields.transformNameAddHeight;
                                          UnityEngine_BoxCollider__set_size(
                                            (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                            v107,
                                            0);
                                        }
                                        ServantStatusExplanationText = (__int64)this->fields.baseSprite;
                                        if ( ServantStatusExplanationText )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)ServantStatusExplanationText,
                                            this->fields.transformNameAddHeight
                                          + *(_DWORD *)(ServantStatusExplanationText + 172),
                                            0);
                                          ServantStatusExplanationText = (__int64)this->fields.titleSprite;
                                          if ( ServantStatusExplanationText )
                                          {
                                            gameObject = UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                           0);
                                            GameObjectExtensions__AddLocalPositionY(
                                              gameObject,
                                              (float)(this->fields.transformNameAddHeight / 2),
                                              0);
                                            transformNameAddHeight = this->fields.transformNameAddHeight;
                                            v94 = transformNameAddHeight <= 0
                                                ? -transformNameAddHeight
                                                : 1 - transformNameAddHeight;
                                            GameObjectExtensions__AddLocalPositionY(
                                              this->fields.faceBase,
                                              (float)(v94 >> 1),
                                              0);
                                            ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
                                            if ( ServantStatusExplanationText )
                                            {
                                              v95 = UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
                                              v96 = this->fields.transformNameAddHeight;
                                              if ( v96 <= 0 )
                                                v97 = -v96;
                                              else
                                                v97 = 1 - v96;
                                              GameObjectExtensions__AddLocalPositionY(v95, (float)(v97 >> 1), 0);
                                              goto LABEL_141;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else
                            {
                              ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
                              if ( ServantStatusExplanationText )
                              {
                                ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                          0);
                                if ( ServantStatusExplanationText )
                                {
                                  UnityEngine_GameObject__SetActive(
                                    (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                    0,
                                    0);
LABEL_141:
                                  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v98);
                                  ServantStatusListViewItemDrawFace__SetupMask(this, item, v99);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_142:
        sub_2213CDC(ServantStatusExplanationText, v14);
      }
    }
LABEL_33:
    v26 = 0;
    goto LABEL_34;
  }
}


void ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  ServantStatusListViewItemButton_o *Instance; // x0
  System_String_o *SvtId; // x1
  bool v9; // w23
  const MethodInfo *v10; // x2
  ServantStatusListViewItemButton_o *v11; // x24
  int m_CancellationTokenSource; // w9
  int32_t v13; // w8
  int32_t v14; // w26
  struct ServantStatusListViewItemButton_o *levelButtonItem; // x9
  bool v16; // w27
  bool v17; // w28
  bool v18; // w29
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x4
  ServantCostumeEntity_o *Entity; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x22
  struct ServantStatusListViewItemButton_array *levelButtons; // x8
  struct ServantStatusListViewItemFace_array *faceItems; // x8
  const MethodInfo *v31; // x4
  struct ServantStatusListViewItemButton_array *v32; // x8
  int32_t v33; // w22
  int32_t LimitCount; // w0
  __int64 v35; // x2
  struct ServantStatusListViewItemButton_array *v36; // x8
  char v37; // w26
  ServantStatusListViewItemButton_o *v38; // x27
  const MethodInfo *v39; // x3
  ServantCostumeMaster_o *v40; // [xsp+0h] [xbp-70h]
  int32_t IconLimitCountStage; // [xsp+8h] [xbp-68h]
  unsigned int v42; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596D349 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_2213A60(&StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_2213A60(&StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_596D349 = 1;
  }
  v42 = 0;
  Instance = (ServantStatusListViewItemButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantStatusListViewItemButton_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___),
        v40 = (ServantCostumeMaster_o *)Instance,
        !item)
    || (!ServantStatusListViewItem__get_IsConvertOverwriteImage(item, 0)
      ? (!item->fields.userSvtEntity
       ? (v9 = item->fields.userSvtCollectionEntity != 0)
       : (v9 = 1))
      : (v9 = 0),
        IconLimitCountStage = ServantStatusListViewItem__GetIconLimitCountStage(item, 0),
        (Instance = (ServantStatusListViewItemButton_o *)ServantStatusListViewItem__GetIconLimitCountStageList(item, 0)) == 0) )
  {
LABEL_57:
    sub_2213CDC(Instance, SvtId);
  }
  v11 = Instance;
  ServantStatusListViewItemDrawFace__SetupFaceObjects(this, (int32_t)Instance->fields.m_CancellationTokenSource, v10);
  m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
  v42 = 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)m_CancellationTokenSource )
LABEL_58:
        sub_2213CE4(Instance);
      v14 = *((_DWORD *)&v11->fields.titleRangeLabel + v13);
      levelButtonItem = this->fields.levelButtonItem;
      v16 = v14 > 0 && v9;
      v17 = v14 == IconLimitCountStage && v14 > 0;
      if ( !levelButtonItem )
        goto LABEL_57;
      v18 = v9 && v17;
      if ( v13 >= levelButtonItem->fields.columnCount )
      {
        SvtId = (System_String_o *)(unsigned int)ServantStatusListViewItem__GetSvtId(item, 0, 0);
        Instance = (ServantStatusListViewItemButton_o *)v40;
        if ( !v40 )
          goto LABEL_57;
        Entity = ServantCostumeMaster__GetEntity(v40, (int32_t)SvtId, v14, 0);
        if ( Entity )
        {
          Instance = (ServantStatusListViewItemButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
LABEL_33:
          SvtId = (System_String_o *)Instance;
          goto LABEL_41;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
        if ( !byte_596B976 )
        {
          sub_2213A60(&LocalizationManager_TypeInfo);
          byte_596B976 = 1;
        }
        Instance = (ServantStatusListViewItemButton_o *)LocalizationManager_TypeInfo;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
          Instance = (ServantStatusListViewItemButton_o *)LocalizationManager_TypeInfo;
        }
        SvtId = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.columnCount + 32LL);
      }
      else
      {
        if ( v14 > 0 || !ServantStatusListViewItem__get_IsMine(item, 0) )
        {
          v25 = System_Int32__ToString((int32_t)&v42, 0);
          v28 = System_String__Concat_75651716((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v25, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
          Instance = (ServantStatusListViewItemButton_o *)LocalizationManager__Get(v28, 0);
          goto LABEL_33;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
        Instance = (ServantStatusListViewItemButton_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/,
                                                          0);
        SvtId = (System_String_o *)Instance;
        v18 = 0;
      }
LABEL_41:
      levelButtons = this->fields.levelButtons;
      if ( !levelButtons )
        goto LABEL_57;
      if ( v42 >= LODWORD(levelButtons->max_length) )
        goto LABEL_58;
      Instance = levelButtons->m_Items[v42];
      if ( !Instance )
        goto LABEL_57;
      ServantStatusListViewItemButton__SetButtonDisplay(Instance, SvtId, v17, v18, v21);
      faceItems = this->fields.faceItems;
      if ( !faceItems )
        goto LABEL_57;
      if ( v42 >= LODWORD(faceItems->max_length) )
        goto LABEL_58;
      Instance = (ServantStatusListViewItemButton_o *)faceItems->m_Items[v42];
      if ( !Instance )
        goto LABEL_57;
      ServantStatusListViewItemFace__ApplyInteractableState(
        (ServantStatusListViewItemFace_o *)Instance,
        v17,
        v16,
        isInit,
        0);
      v32 = this->fields.levelButtons;
      if ( !v32 )
        goto LABEL_57;
      if ( v42 >= LODWORD(v32->max_length) )
        goto LABEL_58;
      Instance = v32->m_Items[v42];
      if ( !Instance )
        goto LABEL_57;
      ServantStatusListViewItemButton__ApplyInteractableState(Instance, v17, v16, isInit, v31);
      v33 = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
      Instance = (ServantStatusListViewItemButton_o *)LimitCountUtility__IsSealed(v33, LimitCount, v14, 1, 0);
      v36 = this->fields.levelButtons;
      if ( !v36 )
        goto LABEL_57;
      if ( v42 >= LODWORD(v36->max_length) )
        goto LABEL_58;
      v37 = (char)Instance;
      v38 = v36->m_Items[v42];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, SvtId, v35);
      Instance = (ServantStatusListViewItemButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
      if ( !v38 )
        goto LABEL_57;
      ServantStatusListViewItemButton__SetSealState(v38, v37 & 1, (System_String_o *)Instance, v39);
      m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
      v13 = ++v42;
    }
    while ( (int)v42 < m_CancellationTokenSource );
  }
}


void ServantStatusListViewItemDrawFace__SetupFaceObjects(
        ServantStatusListViewItemDrawFace_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *ComponentInParent_object__58855988; // x22
  __int64 v8; // x1
  System_Action_int__o *v9; // x21
  UnityEngine_GameObject_o *faceBase; // x0
  ServantStatusListViewItemFace_o *faceIcon; // x22
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *levelButtonItem; // x25
  UnityEngine_Transform_o *v14; // x23
  System_Func_int__Vector3__o *v15; // x24
  struct ServantStatusListViewItemFace_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ServantStatusListViewItemButton_o *v23; // x22
  const MethodInfo *v24; // x4
  struct ServantStatusListViewItemButton_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596D348 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
    sub_2213A60(&System_Func_int__Vector3__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewItemButton_GetOffset__);
    sub_2213A60(&Method_ServantStatusListViewObject_OnClickFaceCharaLevel__);
    byte_596D348 = 1;
  }
  ComponentInParent_object__58855988 = UnityEngine_Component__GetComponentInParent_object__58855988(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v9 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__58855988, 0, 0) )
  {
    v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v9,
      ComponentInParent_object__58855988,
      Method_ServantStatusListViewObject_OnClickFaceCharaLevel__,
      0);
  }
  faceBase = this->fields.faceBase;
  if ( !faceBase )
    goto LABEL_12;
  faceIcon = this->fields.faceIcon;
  transform = UnityEngine_GameObject__get_transform(faceBase, 0);
  levelButtonItem = (Il2CppObject *)this->fields.levelButtonItem;
  v14 = transform;
  v15 = (System_Func_int__Vector3__o *)sub_2213CCC(System_Func_int__Vector3__TypeInfo);
  System_Func_int__Vector3____ctor(v15, levelButtonItem, Method_ServantStatusListViewItemButton_GetOffset__, 0);
  if ( !faceIcon
    || (v16 = ServantStatusListViewItemFace__Setup(faceIcon, count, v14, v15, v9, 0),
        this->fields.faceItems = v16,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.faceItems,
          (int32_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (faceBase = this->fields.faceBase) == 0)
    || (v23 = this->fields.levelButtonItem,
        faceBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(faceBase, 0),
        !v23) )
  {
LABEL_12:
    sub_2213CDC(faceBase, v8);
  }
  v25 = ServantStatusListViewItemButton__Setup(v23, count, (UnityEngine_Transform_o *)faceBase, v9, v24);
  this->fields.levelButtons = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.levelButtons,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v4; // x19
  bool IsEnableOwnRandomSetting; // w8
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawFace_o *v7; // x21
  System_String_o *v8; // x21
  __int64 v9; // x2
  float y; // s1

  v4 = this;
  if ( (byte_596D34A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawFace_o *)sub_2213A60(&StringLiteral_12475/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/);
    byte_596D34A = 1;
  }
  if ( !item )
    goto LABEL_24;
  if ( item->fields.userSvtEntity )
  {
    IsEnableOwnRandomSetting = ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( IsEnableOwnRandomSetting )
    {
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        baseSprite = v4->fields.baseSprite;
        if ( baseSprite )
        {
          this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
          if ( this )
          {
            UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
            this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
            if ( this )
            {
              UIWidget__ResizeCollider((UIWidget_o *)this, 0);
              this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
              if ( this )
              {
                this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
                if ( v4->fields.baseSprite )
                {
                  v7 = this;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                                  0);
                  if ( this )
                  {
                    y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
                    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v7, y, 0);
                    v8 = **(System_String_o ***)(qword_5984390 + 184);
                    if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
                    {
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
                      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12475/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0);
                    }
                    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                    if ( this )
                    {
                      UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
                      this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                      if ( this )
                      {
                        UILabel__set_text((UILabel_o *)this, v8, 0);
                        this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                        if ( this )
                        {
                          UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_24:
      sub_2213CDC(this, item);
    }
    if ( !this )
      goto LABEL_24;
  }
  else
  {
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}