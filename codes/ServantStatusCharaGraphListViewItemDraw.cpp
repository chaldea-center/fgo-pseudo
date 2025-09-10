void ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C22F5A & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4C22F5A = 1;
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
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4C22F58 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22F58 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UICharaGraphTexture__ExecuteSpriteFadein(v7, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4C22F57 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22F57 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UICharaGraphTexture__ExecuteSpriteFadeout(v7, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UICharaGraphTexture_o *v5; // x0

  if ( (byte_4C22F56 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22F56 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v5, 0);
  }
}


int32_t ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UICharaGraphTexture_o *v7; // x8

  if ( (byte_4C22F53 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22F53 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( v4 )
    return -1;
  v7 = this->fields.charaGraph;
  if ( !v7 )
    sub_1C2D6EC(v4, v5);
  return v7->fields.baseKind;
}


int32_t ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C22F55 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22F55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v7);
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
  __int64 v7; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v14; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C22F59 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F59 = 1;
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
      v10 = this->fields.charaGraph;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v10 = this->fields.charaGraph;
        v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_15;
LABEL_14:
        j_il2cpp_runtime_class_init_0(v14);
LABEL_15:
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        *(_QWORD *)&v16.fields.fakeValue = v11;
        v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
        if ( v10 )
        {
          UICharaGraphTexture__SetExCharaGraph(v10, v6, item->fields.imageLimitCount, 0);
          return;
        }
LABEL_20:
        sub_1C2D6EC(v6, v7);
      }
      v10 = this->fields.charaGraph;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
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
  UserCommandCodeCollectionEntity_o *v10; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v14; // x0
  UICharaGraphTexture_o *TexturePrefab_40442720; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v19; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v20; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v22; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v23; // x0
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v25; // x22
  __int64 v26; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v27; // x0
  const MethodInfo *v28; // x3
  struct ServantStatusListViewItem_o *v29; // x8
  int32_t v30; // w22
  UnityEngine_GameObject_o *v31; // x23
  UserServantEntity_o *v32; // x24
  struct UserServantEntity_o *v33; // x9
  __int64 v34; // x22
  __int64 v35; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v36; // x0
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ServantStatusListViewItem_o *v40; // x8
  struct UICharaGraphTexture_o *v41; // x9
  struct ServantOverwriteStatus_o *overwriteStatus; // x1
  int32_t v43; // w22
  struct ServantStatusListViewItem_o *v44; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v46; // x22
  __int64 v47; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v48; // x0
  const MethodInfo *v49; // x3
  struct ServantStatusListViewItem_o *v50; // x8
  int32_t v51; // w22
  UnityEngine_GameObject_o *v52; // x23
  UserServantCollectionEntity_o *v53; // x24
  struct UserServantCollectionEntity_o *v54; // x9
  __int64 v55; // x22
  __int64 v56; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v57; // x0
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct ServantStatusListViewItem_o *v61; // x8
  struct UICharaGraphTexture_o *v62; // x9
  struct ServantOverwriteStatus_o *v63; // x1
  int32_t v64; // w22
  struct ServantStatusListViewItem_o *v65; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v67; // x22
  __int64 v68; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v69; // x0
  const MethodInfo *v70; // x3
  struct ServantStatusListViewItem_o *v71; // x8
  int32_t v72; // w22
  UnityEngine_GameObject_o *v73; // x23
  ServantLeaderInfo_o *v74; // x24
  struct ServantLeaderInfo_o *v75; // x9
  __int64 v76; // x22
  __int64 v77; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v78; // x0
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct ServantStatusListViewItem_o *v82; // x8
  struct UICharaGraphTexture_o *v83; // x9
  struct ServantOverwriteStatus_o *v84; // x1
  int32_t v85; // w22
  struct ServantStatusListViewItem_o *v86; // x8
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v88; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4C22F54 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4C22F54 = 1;
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
      v14 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v14 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40442720(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v14->static_fields->DEFAULT_DEPTH,
                                 0,
                                 0);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v19 = this->fields.charaGraphBase;
        v20 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v20 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40443184(
                                   v19,
                                   userCommandCodeCollectionEntity,
                                   v20->static_fields->DEFAULT_DEPTH,
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
          TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40443648(
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
            v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v91.fields.currentCryptoKey = v26;
            *(_QWORD *)&v91.fields.fakeValue = v25;
            v27 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                 v91,
                                                                 0);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v27,
                                                             (int32_t)v27,
                                                             item->fields.imageLimitCount,
                                                             v28);
            v29 = item->fields.mainInfo;
            if ( !v29 )
              goto LABEL_89;
            v30 = (int)ImageLimitSealAfter;
            v31 = this->fields.charaGraphBase;
            v32 = v29->fields.userSvtEntity;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v29 = item->fields.mainInfo;
              if ( !v29 )
                goto LABEL_89;
            }
            TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40438256(
                                       v31,
                                       v32,
                                       v30,
                                       ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                       0,
                                       0,
                                       v29->fields.overwriteStatus,
                                       v29->fields._IsForceNotGrand_k__BackingField,
                                       v29->fields._IsTempGrandServant_k__BackingField,
                                       0);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v47 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v46 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v93.fields.currentCryptoKey = v47;
              *(_QWORD *)&v93.fields.fakeValue = v46;
              v48 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                   v93,
                                                                   0);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v48,
                                                               (int32_t)v48,
                                                               item->fields.imageLimitCount,
                                                               v49);
              v50 = item->fields.mainInfo;
              if ( !v50 )
                goto LABEL_89;
              v51 = (int)ImageLimitSealAfter;
              v52 = this->fields.charaGraphBase;
              v53 = v50->fields.userSvtCollectionEntity;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v50 = item->fields.mainInfo;
                if ( !v50 )
                  goto LABEL_89;
              }
              TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40439552(
                                         v52,
                                         v53,
                                         v51,
                                         ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                         0,
                                         v50->fields.overwriteStatus,
                                         0);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v68 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v67 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v95.fields.currentCryptoKey = v68;
                *(_QWORD *)&v95.fields.fakeValue = v67;
                v69 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                     v95,
                                                                     0);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v69,
                                                                 (int32_t)v69,
                                                                 item->fields.imageLimitCount,
                                                                 v70);
                v71 = item->fields.mainInfo;
                if ( !v71 )
                  goto LABEL_89;
                v72 = (int)ImageLimitSealAfter;
                v73 = this->fields.charaGraphBase;
                v74 = v71->fields.servantLeaderInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v71 = item->fields.mainInfo;
                  if ( !v71 )
                    goto LABEL_89;
                }
                TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40440764(
                                           v73,
                                           v74,
                                           v72,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           0,
                                           v71->fields.overwriteStatus,
                                           0);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_80;
                v88 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_89;
                }
                TexturePrefab_40442720 = CharaGraphManager__CreateTexturePrefab_40441992(
                                           v88,
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
    *p_charaGraph = TexturePrefab_40442720;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)TexturePrefab_40442720, v16, v17);
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
    v10 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v10 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_89;
      UICharaGraphTexture__SetCommand_43686708(ImageLimitSealAfter, v10, 0, 0);
    }
    else
    {
      v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v10 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_89;
        UICharaGraphTexture__SetCommand_43686852(ImageLimitSealAfter, (CommandCodeEntity_o *)v10, 0, 0);
      }
      else
      {
        v33 = mainInfo->fields.userSvtEntity;
        if ( v33 )
        {
          v35 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v92.fields.currentCryptoKey = v35;
          *(_QWORD *)&v92.fields.fakeValue = v34;
          v36 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                               v92,
                                                               0);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v36,
                                                           (int32_t)v36,
                                                           item->fields.imageLimitCount,
                                                           v37);
          v40 = item->fields.mainInfo;
          if ( !v40 )
            goto LABEL_89;
          v41 = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          overwriteStatus = v40->fields.overwriteStatus;
          v43 = (int)ImageLimitSealAfter;
          v41->fields._OverwriteStatus_k__BackingField = overwriteStatus;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&v41->fields._OverwriteStatus_k__BackingField,
            (int32_t)overwriteStatus,
            v38,
            v39);
          v44 = item->fields.mainInfo;
          if ( !v44 )
            goto LABEL_89;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          UICharaGraphTexture__SetCharacter_43684276(
            ImageLimitSealAfter,
            v44->fields.userSvtEntity,
            v43,
            0,
            0,
            v44->fields._IsForceNotGrand_k__BackingField,
            v44->fields._IsTempGrandServant_k__BackingField,
            0);
        }
        else
        {
          v54 = mainInfo->fields.userSvtCollectionEntity;
          if ( v54 )
          {
            v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
            v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v94.fields.currentCryptoKey = v56;
            *(_QWORD *)&v94.fields.fakeValue = v55;
            v57 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                 v94,
                                                                 0);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v57,
                                                             (int32_t)v57,
                                                             item->fields.imageLimitCount,
                                                             v58);
            v61 = item->fields.mainInfo;
            if ( !v61 )
              goto LABEL_89;
            v62 = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            v63 = v61->fields.overwriteStatus;
            v64 = (int)ImageLimitSealAfter;
            v62->fields._OverwriteStatus_k__BackingField = v63;
            sub_1C2D434((CGThumbnailListItem_o *)&v62->fields._OverwriteStatus_k__BackingField, (int32_t)v63, v59, v60);
            v65 = item->fields.mainInfo;
            if ( !v65 )
              goto LABEL_89;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            UICharaGraphTexture__SetCharacter_43685192(
              ImageLimitSealAfter,
              v65->fields.userSvtCollectionEntity,
              v64,
              0,
              0);
          }
          else
          {
            v75 = mainInfo->fields.servantLeaderInfo;
            if ( v75 )
            {
              v77 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
              v76 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v96.fields.currentCryptoKey = v77;
              *(_QWORD *)&v96.fields.fakeValue = v76;
              v78 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                   v96,
                                                                   0);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v78,
                                                               (int32_t)v78,
                                                               item->fields.imageLimitCount,
                                                               v79);
              v82 = item->fields.mainInfo;
              if ( !v82 )
                goto LABEL_89;
              v83 = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              v84 = v82->fields.overwriteStatus;
              v85 = (int)ImageLimitSealAfter;
              v83->fields._OverwriteStatus_k__BackingField = v84;
              sub_1C2D434(
                (CGThumbnailListItem_o *)&v83->fields._OverwriteStatus_k__BackingField,
                (int32_t)v84,
                v80,
                v81);
              v86 = item->fields.mainInfo;
              if ( !v86 )
                goto LABEL_89;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              UICharaGraphTexture__SetCharacter_43685784(ImageLimitSealAfter, v86->fields.servantLeaderInfo, v85, 0, 0);
            }
            else
            {
              v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v10 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_89;
                UICharaGraphTexture__SetCharacter_43686308(
                  ImageLimitSealAfter,
                  (EquipTargetInfo_o *)v10,
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
    sub_1C2D6EC(ImageLimitSealAfter, v10);
  }
}