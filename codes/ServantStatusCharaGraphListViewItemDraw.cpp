void ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C335A8 & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4C335A8 = 1;
  }
  ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH = 10;
}


void ServantStatusCharaGraphListViewItemDraw___ctor(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_4C335A6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C335A6 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_1C32E7C(0);
    UICharaGraphTexture__ExecuteSpriteFadein(v6, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_4C335A5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C335A5 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_1C32E7C(0);
    UICharaGraphTexture__ExecuteSpriteFadeout(v6, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v4; // x0

  if ( (byte_4C335A4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C335A4 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v4 = this->fields.charaGraph;
    if ( !v4 )
      sub_1C32E7C(0);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v4, 0);
  }
}


int32_t ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v4; // x0
  struct UICharaGraphTexture_o *v6; // x8

  if ( (byte_4C335A1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C335A1 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( v4 )
    return -1;
  v6 = this->fields.charaGraph;
  if ( !v6 )
    sub_1C32E7C(v4);
  return v6->fields.baseKind;
}


int32_t ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C335A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C335A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           limitCount,
           0);
}


void ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v6; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v13; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C335A7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C335A7 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( (v6 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_20;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v9 = this->fields.charaGraph;
      v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v9 = this->fields.charaGraph;
        v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_15;
LABEL_14:
        j_il2cpp_runtime_class_init_0(v13);
LABEL_15:
        *(_QWORD *)&v15.fields.currentCryptoKey = v11;
        *(_QWORD *)&v15.fields.fakeValue = v10;
        v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v15, 0);
        if ( v9 )
        {
          UICharaGraphTexture__SetExCharaGraph(v9, v6, item->fields.imageLimitCount, 0);
          return;
        }
LABEL_20:
        sub_1C32E7C(v6);
      }
      v9 = this->fields.charaGraph;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      goto LABEL_15;
    goto LABEL_14;
  }
}


void ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UICharaGraphTexture_o *ImageLimitSealAfter; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v13; // x0
  UICharaGraphTexture_o *TexturePrefab_40564948; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v18; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v19; // x0
  UserCommandCodeCollectionEntity_o *v20; // x1
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v22; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v23; // x0
  CommandCodeEntity_o *v24; // x1
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v26; // x22
  __int64 v27; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v28; // x0
  const MethodInfo *v29; // x3
  struct ServantStatusListViewItem_o *v30; // x8
  int32_t v31; // w22
  UnityEngine_GameObject_o *v32; // x23
  UserServantEntity_o *v33; // x24
  struct UserServantEntity_o *v34; // x9
  __int64 v35; // x22
  __int64 v36; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v37; // x0
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct ServantStatusListViewItem_o *v41; // x8
  struct UICharaGraphTexture_o *v42; // x9
  struct ServantOverwriteStatus_o *overwriteStatus; // x1
  int32_t v44; // w22
  struct ServantStatusListViewItem_o *v45; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v47; // x22
  __int64 v48; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v49; // x0
  const MethodInfo *v50; // x3
  struct ServantStatusListViewItem_o *v51; // x8
  int32_t v52; // w22
  UnityEngine_GameObject_o *v53; // x23
  UserServantCollectionEntity_o *v54; // x24
  struct UserServantCollectionEntity_o *v55; // x9
  __int64 v56; // x22
  __int64 v57; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct ServantStatusListViewItem_o *v62; // x8
  struct UICharaGraphTexture_o *v63; // x9
  struct ServantOverwriteStatus_o *v64; // x1
  int32_t v65; // w22
  struct ServantStatusListViewItem_o *v66; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v68; // x22
  __int64 v69; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v70; // x0
  const MethodInfo *v71; // x3
  struct ServantStatusListViewItem_o *v72; // x8
  int32_t v73; // w22
  UnityEngine_GameObject_o *v74; // x23
  ServantLeaderInfo_o *v75; // x24
  struct ServantLeaderInfo_o *v76; // x9
  __int64 v77; // x22
  __int64 v78; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v79; // x0
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct ServantStatusListViewItem_o *v83; // x8
  struct UICharaGraphTexture_o *v84; // x9
  struct ServantOverwriteStatus_o *v85; // x1
  int32_t v86; // w22
  struct ServantStatusListViewItem_o *v87; // x8
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v89; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  EquipTargetInfo_o *v92; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4C335A2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4C335A2 = 1;
  }
  if ( !item || !mode )
    return;
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ImageLimitSealAfter = (UICharaGraphTexture_o *)UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  mainInfo = item->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_89;
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( ((unsigned __int8)ImageLimitSealAfter & 1) != 0 )
  {
    if ( userCommandCodeEntity )
    {
      charaGraphBase = this->fields.charaGraphBase;
      v13 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v13 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40564948(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v13->static_fields->DEFAULT_DEPTH,
                                 0,
                                 0);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v18 = this->fields.charaGraphBase;
        v19 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v19 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40565412(
                                   v18,
                                   userCommandCodeCollectionEntity,
                                   v19->static_fields->DEFAULT_DEPTH,
                                   0,
                                   0);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v22 = this->fields.charaGraphBase;
          v23 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v23 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40565876(
                                     v22,
                                     commandCodeEntity,
                                     v23->static_fields->DEFAULT_DEPTH,
                                     0,
                                     0);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v93.fields.currentCryptoKey = v27;
            *(_QWORD *)&v93.fields.fakeValue = v26;
            v28 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                 v93,
                                                                 0);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v28,
                                                             (int32_t)v28,
                                                             item->fields.imageLimitCount,
                                                             v29);
            v30 = item->fields.mainInfo;
            if ( !v30 )
              goto LABEL_89;
            v31 = (int)ImageLimitSealAfter;
            v32 = this->fields.charaGraphBase;
            v33 = v30->fields.userSvtEntity;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v30 = item->fields.mainInfo;
              if ( !v30 )
                goto LABEL_89;
            }
            TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40560484(
                                       v32,
                                       v33,
                                       v31,
                                       ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                       0,
                                       0,
                                       v30->fields.overwriteStatus,
                                       v30->fields._IsForceNotGrand_k__BackingField,
                                       v30->fields._IsTempGrandServant_k__BackingField,
                                       0);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v48 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v47 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v95.fields.currentCryptoKey = v48;
              *(_QWORD *)&v95.fields.fakeValue = v47;
              v49 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                   v95,
                                                                   0);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v49,
                                                               (int32_t)v49,
                                                               item->fields.imageLimitCount,
                                                               v50);
              v51 = item->fields.mainInfo;
              if ( !v51 )
                goto LABEL_89;
              v52 = (int)ImageLimitSealAfter;
              v53 = this->fields.charaGraphBase;
              v54 = v51->fields.userSvtCollectionEntity;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v51 = item->fields.mainInfo;
                if ( !v51 )
                  goto LABEL_89;
              }
              TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40561780(
                                         v53,
                                         v54,
                                         v52,
                                         ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                         0,
                                         v51->fields.overwriteStatus,
                                         0);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v69 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v68 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v97.fields.currentCryptoKey = v69;
                *(_QWORD *)&v97.fields.fakeValue = v68;
                v70 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                     v97,
                                                                     0);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v70,
                                                                 (int32_t)v70,
                                                                 item->fields.imageLimitCount,
                                                                 v71);
                v72 = item->fields.mainInfo;
                if ( !v72 )
                  goto LABEL_89;
                v73 = (int)ImageLimitSealAfter;
                v74 = this->fields.charaGraphBase;
                v75 = v72->fields.servantLeaderInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v72 = item->fields.mainInfo;
                  if ( !v72 )
                    goto LABEL_89;
                }
                TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40562992(
                                           v74,
                                           v75,
                                           v73,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           0,
                                           v72->fields.overwriteStatus,
                                           0);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_80;
                v89 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_89;
                }
                TexturePrefab_40564948 = CharaGraphManager__CreateTexturePrefab_40564220(
                                           v89,
                                           equipTargetInfo,
                                           imageLimitCount,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           mainInfo->fields.isNpcFollowerServantEquip,
                                           0,
                                           0);
              }
            }
          }
        }
      }
    }
    *p_charaGraph = TexturePrefab_40564948;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)TexturePrefab_40564948, v15, v16);
  }
  else if ( userCommandCodeEntity )
  {
    ImageLimitSealAfter = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_89;
    UICharaGraphTexture__SetCommand(ImageLimitSealAfter, mainInfo->fields.userCommandCodeEntity, 0, 0);
  }
  else
  {
    v20 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v20 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_89;
      UICharaGraphTexture__SetCommand_43822428(ImageLimitSealAfter, v20, 0, 0);
    }
    else
    {
      v24 = mainInfo->fields.commandCodeEntity;
      if ( v24 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_89;
        UICharaGraphTexture__SetCommand_43822572(ImageLimitSealAfter, v24, 0, 0);
      }
      else
      {
        v34 = mainInfo->fields.userSvtEntity;
        if ( v34 )
        {
          v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v94.fields.currentCryptoKey = v36;
          *(_QWORD *)&v94.fields.fakeValue = v35;
          v37 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                               v94,
                                                               0);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v37,
                                                           (int32_t)v37,
                                                           item->fields.imageLimitCount,
                                                           v38);
          v41 = item->fields.mainInfo;
          if ( !v41 )
            goto LABEL_89;
          v42 = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          overwriteStatus = v41->fields.overwriteStatus;
          v44 = (int)ImageLimitSealAfter;
          v42->fields._OverwriteStatus_k__BackingField = overwriteStatus;
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&v42->fields._OverwriteStatus_k__BackingField,
            (int32_t)overwriteStatus,
            v39,
            v40);
          v45 = item->fields.mainInfo;
          if ( !v45 )
            goto LABEL_89;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          UICharaGraphTexture__SetCharacter_43819996(
            ImageLimitSealAfter,
            v45->fields.userSvtEntity,
            v44,
            0,
            0,
            v45->fields._IsForceNotGrand_k__BackingField,
            v45->fields._IsTempGrandServant_k__BackingField,
            0);
        }
        else
        {
          v55 = mainInfo->fields.userSvtCollectionEntity;
          if ( v55 )
          {
            v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
            v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v96.fields.currentCryptoKey = v57;
            *(_QWORD *)&v96.fields.fakeValue = v56;
            v58 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                 v96,
                                                                 0);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v58,
                                                             (int32_t)v58,
                                                             item->fields.imageLimitCount,
                                                             v59);
            v62 = item->fields.mainInfo;
            if ( !v62 )
              goto LABEL_89;
            v63 = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            v64 = v62->fields.overwriteStatus;
            v65 = (int)ImageLimitSealAfter;
            v63->fields._OverwriteStatus_k__BackingField = v64;
            sub_1C32BC4((CGThumbnailListItem_o *)&v63->fields._OverwriteStatus_k__BackingField, (int32_t)v64, v60, v61);
            v66 = item->fields.mainInfo;
            if ( !v66 )
              goto LABEL_89;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            UICharaGraphTexture__SetCharacter_43820912(
              ImageLimitSealAfter,
              v66->fields.userSvtCollectionEntity,
              v65,
              0,
              0);
          }
          else
          {
            v76 = mainInfo->fields.servantLeaderInfo;
            if ( v76 )
            {
              v78 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
              v77 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v98.fields.currentCryptoKey = v78;
              *(_QWORD *)&v98.fields.fakeValue = v77;
              v79 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                   v98,
                                                                   0);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v79,
                                                               (int32_t)v79,
                                                               item->fields.imageLimitCount,
                                                               v80);
              v83 = item->fields.mainInfo;
              if ( !v83 )
                goto LABEL_89;
              v84 = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              v85 = v83->fields.overwriteStatus;
              v86 = (int)ImageLimitSealAfter;
              v84->fields._OverwriteStatus_k__BackingField = v85;
              sub_1C32BC4(
                (CGThumbnailListItem_o *)&v84->fields._OverwriteStatus_k__BackingField,
                (int32_t)v85,
                v81,
                v82);
              v87 = item->fields.mainInfo;
              if ( !v87 )
                goto LABEL_89;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              UICharaGraphTexture__SetCharacter_43821504(ImageLimitSealAfter, v87->fields.servantLeaderInfo, v86, 0, 0);
            }
            else
            {
              v92 = mainInfo->fields.equipTargetInfo;
              if ( v92 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_89;
                UICharaGraphTexture__SetCharacter_43822028(
                  ImageLimitSealAfter,
                  v92,
                  item->fields.imageLimitCount,
                  mainInfo->fields.isNpcFollowerServantEquip,
                  0,
                  0);
              }
            }
          }
        }
      }
    }
  }
LABEL_80:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    ImageLimitSealAfter = (UICharaGraphTexture_o *)this->fields.baseButton;
    if ( ImageLimitSealAfter )
    {
      ((void (__fastcall *)(UICharaGraphTexture_o *, _QWORD, __int64, const MethodInfo *))ImageLimitSealAfter->klass->vtable._14_OnEnable.methodPtr)(
        ImageLimitSealAfter,
        0,
        1,
        ImageLimitSealAfter->klass->vtable._14_OnEnable.method);
      return;
    }
LABEL_89:
    sub_1C32E7C(ImageLimitSealAfter);
  }
}