void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFD77B & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1);
    byte_4AFD77B = 1;
  }
  ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH = 10;
}


void __fastcall ServantStatusCharaGraphListViewItemDraw___ctor(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4AFD779 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD779 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UICharaGraphTexture__ExecuteSpriteFadein(v7, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4AFD778 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD778 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UICharaGraphTexture__ExecuteSpriteFadeout(v7, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UICharaGraphTexture_o *v5; // x0

  if ( (byte_4AFD777 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD777 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v5, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UICharaGraphTexture_o *v7; // x8

  if ( (byte_4AFD774 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD774 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v4 )
    return -1;
  v7 = this->fields.charaGraph;
  if ( !v7 )
    sub_1BC3264(v4, v5);
  return v7->fields.baseKind;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4AFD776 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AFD776 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v8);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           limitCount,
           0LL);
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v15; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4AFD77A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, item);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4AFD77A = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_20;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v11 = this->fields.charaGraph;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v11 = this->fields.charaGraph;
        v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_15;
LABEL_14:
        j_il2cpp_runtime_class_init_0(v15);
LABEL_15:
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
        if ( v11 )
        {
          UICharaGraphTexture__SetExCharaGraph(v11, v7, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_20:
        sub_1BC3264(v7, v8);
      }
      v11 = this->fields.charaGraph;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      goto LABEL_15;
    goto LABEL_14;
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UICharaGraphTexture_o *ImageLimitSealAfter; // x0
  UserCommandCodeCollectionEntity_o *v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v16; // x0
  UICharaGraphTexture_o *TexturePrefab_39700300; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v21; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v22; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v24; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v25; // x0
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v27; // x22
  __int64 v28; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v29; // x0
  const MethodInfo *v30; // x3
  struct ServantStatusListViewItem_o *v31; // x8
  int32_t v32; // w22
  UnityEngine_GameObject_o *v33; // x23
  UserServantEntity_o *v34; // x24
  struct UserServantEntity_o *v35; // x9
  __int64 v36; // x22
  __int64 v37; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v38; // x0
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct ServantStatusListViewItem_o *v42; // x8
  struct UICharaGraphTexture_o *v43; // x9
  struct ServantOverwriteStatus_o *overwriteStatus; // x1
  int32_t v45; // w22
  struct ServantStatusListViewItem_o *v46; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v48; // x22
  __int64 v49; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v50; // x0
  const MethodInfo *v51; // x3
  struct ServantStatusListViewItem_o *v52; // x8
  int32_t v53; // w22
  UnityEngine_GameObject_o *v54; // x23
  UserServantCollectionEntity_o *v55; // x24
  struct UserServantCollectionEntity_o *v56; // x9
  __int64 v57; // x22
  __int64 v58; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v59; // x0
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct ServantStatusListViewItem_o *v63; // x8
  struct UICharaGraphTexture_o *v64; // x9
  struct ServantOverwriteStatus_o *v65; // x1
  int32_t v66; // w22
  struct ServantStatusListViewItem_o *v67; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v69; // x22
  __int64 v70; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v71; // x0
  const MethodInfo *v72; // x3
  struct ServantStatusListViewItem_o *v73; // x8
  int32_t v74; // w22
  UnityEngine_GameObject_o *v75; // x23
  ServantLeaderInfo_o *v76; // x24
  struct ServantLeaderInfo_o *v77; // x9
  __int64 v78; // x22
  __int64 v79; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v80; // x0
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct ServantStatusListViewItem_o *v84; // x8
  struct UICharaGraphTexture_o *v85; // x9
  struct ServantOverwriteStatus_o *v86; // x1
  int32_t v87; // w22
  struct ServantStatusListViewItem_o *v88; // x8
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v90; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4AFD775 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, item);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v8);
    byte_4AFD775 = 1;
  }
  if ( !item || !mode )
    return;
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ImageLimitSealAfter = (UICharaGraphTexture_o *)UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  mainInfo = item->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_89;
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( ((unsigned __int8)ImageLimitSealAfter & 1) != 0 )
  {
    if ( userCommandCodeEntity )
    {
      charaGraphBase = this->fields.charaGraphBase;
      v16 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v16 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39700300(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v16->static_fields->DEFAULT_DEPTH,
                                 0LL,
                                 0LL);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v21 = this->fields.charaGraphBase;
        v22 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v22 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39700764(
                                   v21,
                                   userCommandCodeCollectionEntity,
                                   v22->static_fields->DEFAULT_DEPTH,
                                   0LL,
                                   0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v24 = this->fields.charaGraphBase;
          v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39701228(
                                     v24,
                                     commandCodeEntity,
                                     v25->static_fields->DEFAULT_DEPTH,
                                     0LL,
                                     0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v93.fields.currentCryptoKey = v28;
            *(_QWORD *)&v93.fields.fakeValue = v27;
            v29 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                 v93,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v29,
                                                             (int32_t)v29,
                                                             item->fields.imageLimitCount,
                                                             v30);
            v31 = item->fields.mainInfo;
            if ( !v31 )
              goto LABEL_89;
            v32 = (int)ImageLimitSealAfter;
            v33 = this->fields.charaGraphBase;
            v34 = v31->fields.userSvtEntity;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v31 = item->fields.mainInfo;
              if ( !v31 )
                goto LABEL_89;
            }
            TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39695836(
                                       v33,
                                       v34,
                                       v32,
                                       ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                       0LL,
                                       0,
                                       v31->fields.overwriteStatus,
                                       v31->fields._IsForceNotGrand_k__BackingField,
                                       v31->fields._IsGrand_k__BackingField,
                                       0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v49 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v48 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v95.fields.currentCryptoKey = v49;
              *(_QWORD *)&v95.fields.fakeValue = v48;
              v50 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                   v95,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v50,
                                                               (int32_t)v50,
                                                               item->fields.imageLimitCount,
                                                               v51);
              v52 = item->fields.mainInfo;
              if ( !v52 )
                goto LABEL_89;
              v53 = (int)ImageLimitSealAfter;
              v54 = this->fields.charaGraphBase;
              v55 = v52->fields.userSvtCollectionEntity;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v52 = item->fields.mainInfo;
                if ( !v52 )
                  goto LABEL_89;
              }
              TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39697132(
                                         v54,
                                         v55,
                                         v53,
                                         ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                         0LL,
                                         v52->fields.overwriteStatus,
                                         0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v70 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v69 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v97.fields.currentCryptoKey = v70;
                *(_QWORD *)&v97.fields.fakeValue = v69;
                v71 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                     v97,
                                                                     0LL);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v71,
                                                                 (int32_t)v71,
                                                                 item->fields.imageLimitCount,
                                                                 v72);
                v73 = item->fields.mainInfo;
                if ( !v73 )
                  goto LABEL_89;
                v74 = (int)ImageLimitSealAfter;
                v75 = this->fields.charaGraphBase;
                v76 = v73->fields.servantLeaderInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v73 = item->fields.mainInfo;
                  if ( !v73 )
                    goto LABEL_89;
                }
                TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39698344(
                                           v75,
                                           v76,
                                           v74,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           0LL,
                                           v73->fields.overwriteStatus,
                                           0LL);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_80;
                v90 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_89;
                }
                TexturePrefab_39700300 = CharaGraphManager__CreateTexturePrefab_39699572(
                                           v90,
                                           equipTargetInfo,
                                           imageLimitCount,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           mainInfo->fields.isNpcFollowerServantEquip,
                                           0LL,
                                           0LL);
              }
            }
          }
        }
      }
    }
    *p_charaGraph = TexturePrefab_39700300;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)TexturePrefab_39700300, v18, v19);
  }
  else if ( userCommandCodeEntity )
  {
    ImageLimitSealAfter = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_89;
    UICharaGraphTexture__SetCommand(ImageLimitSealAfter, mainInfo->fields.userCommandCodeEntity, 0LL, 0LL);
  }
  else
  {
    v12 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v12 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_89;
      UICharaGraphTexture__SetCommand_42889320(ImageLimitSealAfter, v12, 0LL, 0LL);
    }
    else
    {
      v12 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v12 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_89;
        UICharaGraphTexture__SetCommand_42889464(ImageLimitSealAfter, (CommandCodeEntity_o *)v12, 0LL, 0LL);
      }
      else
      {
        v35 = mainInfo->fields.userSvtEntity;
        if ( v35 )
        {
          v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
          v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v94.fields.currentCryptoKey = v37;
          *(_QWORD *)&v94.fields.fakeValue = v36;
          v38 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                               v94,
                                                               0LL);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v38,
                                                           (int32_t)v38,
                                                           item->fields.imageLimitCount,
                                                           v39);
          v42 = item->fields.mainInfo;
          if ( !v42 )
            goto LABEL_89;
          v43 = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          overwriteStatus = v42->fields.overwriteStatus;
          v45 = (int)ImageLimitSealAfter;
          v43->fields._OverwriteStatus_k__BackingField = overwriteStatus;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&v43->fields._OverwriteStatus_k__BackingField,
            (int32_t)overwriteStatus,
            v40,
            v41);
          v46 = item->fields.mainInfo;
          if ( !v46 )
            goto LABEL_89;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          UICharaGraphTexture__SetCharacter_42886888(
            ImageLimitSealAfter,
            v46->fields.userSvtEntity,
            v45,
            0LL,
            0,
            v46->fields._IsForceNotGrand_k__BackingField,
            v46->fields._IsGrand_k__BackingField,
            0LL);
        }
        else
        {
          v56 = mainInfo->fields.userSvtCollectionEntity;
          if ( v56 )
          {
            v58 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
            v57 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v96.fields.currentCryptoKey = v58;
            *(_QWORD *)&v96.fields.fakeValue = v57;
            v59 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                 v96,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v59,
                                                             (int32_t)v59,
                                                             item->fields.imageLimitCount,
                                                             v60);
            v63 = item->fields.mainInfo;
            if ( !v63 )
              goto LABEL_89;
            v64 = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            v65 = v63->fields.overwriteStatus;
            v66 = (int)ImageLimitSealAfter;
            v64->fields._OverwriteStatus_k__BackingField = v65;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v64->fields._OverwriteStatus_k__BackingField, (int32_t)v65, v61, v62);
            v67 = item->fields.mainInfo;
            if ( !v67 )
              goto LABEL_89;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            UICharaGraphTexture__SetCharacter_42887804(
              ImageLimitSealAfter,
              v67->fields.userSvtCollectionEntity,
              v66,
              0LL,
              0LL);
          }
          else
          {
            v77 = mainInfo->fields.servantLeaderInfo;
            if ( v77 )
            {
              v79 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
              v78 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v98.fields.currentCryptoKey = v79;
              *(_QWORD *)&v98.fields.fakeValue = v78;
              v80 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                   v98,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v80,
                                                               (int32_t)v80,
                                                               item->fields.imageLimitCount,
                                                               v81);
              v84 = item->fields.mainInfo;
              if ( !v84 )
                goto LABEL_89;
              v85 = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              v86 = v84->fields.overwriteStatus;
              v87 = (int)ImageLimitSealAfter;
              v85->fields._OverwriteStatus_k__BackingField = v86;
              sub_1BC2FAC(
                (CGThumbnailListItem_o *)&v85->fields._OverwriteStatus_k__BackingField,
                (int32_t)v86,
                v82,
                v83);
              v88 = item->fields.mainInfo;
              if ( !v88 )
                goto LABEL_89;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              UICharaGraphTexture__SetCharacter_42888396(
                ImageLimitSealAfter,
                v88->fields.servantLeaderInfo,
                v87,
                0LL,
                0LL);
            }
            else
            {
              v12 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v12 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_89;
                UICharaGraphTexture__SetCharacter_42888920(
                  ImageLimitSealAfter,
                  (EquipTargetInfo_o *)v12,
                  item->fields.imageLimitCount,
                  mainInfo->fields.isNpcFollowerServantEquip,
                  0LL,
                  0LL);
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
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    ImageLimitSealAfter = (UICharaGraphTexture_o *)this->fields.baseButton;
    if ( ImageLimitSealAfter )
    {
      ((void (__fastcall *)(UICharaGraphTexture_o *, _QWORD, __int64, Il2CppMethodPointer))ImageLimitSealAfter->klass->vtable._14_OnEnable.method)(
        ImageLimitSealAfter,
        0LL,
        1LL,
        ImageLimitSealAfter->klass->vtable._15_OnInit.methodPtr);
      return;
    }
LABEL_89:
    sub_1BC3264(ImageLimitSealAfter, v12);
  }
}