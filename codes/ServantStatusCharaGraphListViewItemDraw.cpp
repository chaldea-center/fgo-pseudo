void ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4CEA80C & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4CEA80C = 1;
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

  if ( (byte_4CEA80A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA80A = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1C7BD40(0, v6);
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

  if ( (byte_4CEA809 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA809 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1C7BD40(0, v6);
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

  if ( (byte_4CEA808 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA808 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_1C7BD40(0, v4);
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

  if ( (byte_4CEA805 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA805 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( v4 )
    return -1;
  v7 = this->fields.charaGraph;
  if ( !v7 )
    sub_1C7BD40(v4, v5);
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

  if ( (byte_4CEA807 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA807 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v7);
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

  if ( (byte_4CEA80B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA80B = 1;
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
        v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v16, 0);
        if ( v10 )
        {
          UICharaGraphTexture__SetExCharaGraph(v10, v6, item->fields.imageLimitCount, 0);
          return;
        }
LABEL_20:
        sub_1C7BD40(v6, v7);
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
  UICharaGraphTexture_o *TexturePrefab_41228604; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v23; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v24; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v26; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v27; // x0
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v29; // x22
  __int64 v30; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v31; // x0
  const MethodInfo *v32; // x3
  struct ServantStatusListViewItem_o *v33; // x8
  int32_t v34; // w22
  UnityEngine_GameObject_o *v35; // x23
  UserServantEntity_o *v36; // x24
  struct UserServantEntity_o *v37; // x9
  __int64 v38; // x22
  __int64 v39; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct ServantStatusListViewItem_o *v48; // x8
  struct UICharaGraphTexture_o *v49; // x9
  struct ServantOverwriteStatus_o *overwriteStatus; // x1
  int32_t v51; // w22
  struct ServantStatusListViewItem_o *v52; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v54; // x22
  __int64 v55; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v56; // x0
  const MethodInfo *v57; // x3
  struct ServantStatusListViewItem_o *v58; // x8
  int32_t v59; // w22
  UnityEngine_GameObject_o *v60; // x23
  UserServantCollectionEntity_o *v61; // x24
  struct UserServantCollectionEntity_o *v62; // x9
  __int64 v63; // x22
  __int64 v64; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v65; // x0
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct ServantStatusListViewItem_o *v73; // x8
  struct UICharaGraphTexture_o *v74; // x9
  struct ServantOverwriteStatus_o *v75; // x1
  int32_t v76; // w22
  struct ServantStatusListViewItem_o *v77; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v79; // x22
  __int64 v80; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x3
  struct ServantStatusListViewItem_o *v83; // x8
  int32_t v84; // w22
  UnityEngine_GameObject_o *v85; // x23
  ServantLeaderInfo_o *v86; // x24
  struct ServantLeaderInfo_o *v87; // x9
  __int64 v88; // x22
  __int64 v89; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  struct ServantStatusListViewItem_o *v98; // x8
  struct UICharaGraphTexture_o *v99; // x9
  struct ServantOverwriteStatus_o *v100; // x1
  int32_t v101; // w22
  struct ServantStatusListViewItem_o *v102; // x8
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v104; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4CEA806 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4CEA806 = 1;
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
      TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41228604(
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
        v23 = this->fields.charaGraphBase;
        v24 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v24 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41229068(
                                   v23,
                                   userCommandCodeCollectionEntity,
                                   v24->static_fields->DEFAULT_DEPTH,
                                   0,
                                   0);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v26 = this->fields.charaGraphBase;
          v27 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v27 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41229532(
                                     v26,
                                     commandCodeEntity,
                                     v27->static_fields->DEFAULT_DEPTH,
                                     0,
                                     0);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v107.fields.currentCryptoKey = v30;
            *(_QWORD *)&v107.fields.fakeValue = v29;
            v31 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                 v107,
                                                                 0);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v31,
                                                             (int32_t)v31,
                                                             item->fields.imageLimitCount,
                                                             v32);
            v33 = item->fields.mainInfo;
            if ( !v33 )
              goto LABEL_89;
            v34 = (int)ImageLimitSealAfter;
            v35 = this->fields.charaGraphBase;
            v36 = v33->fields.userSvtEntity;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v33 = item->fields.mainInfo;
              if ( !v33 )
                goto LABEL_89;
            }
            TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41224140(
                                       v35,
                                       v36,
                                       v34,
                                       ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                       0,
                                       0,
                                       v33->fields.overwriteStatus,
                                       v33->fields._IsForceNotGrand_k__BackingField,
                                       v33->fields._IsTempGrandServant_k__BackingField,
                                       0);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v55 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v54 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v109.fields.currentCryptoKey = v55;
              *(_QWORD *)&v109.fields.fakeValue = v54;
              v56 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                   v109,
                                                                   0);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v56,
                                                               (int32_t)v56,
                                                               item->fields.imageLimitCount,
                                                               v57);
              v58 = item->fields.mainInfo;
              if ( !v58 )
                goto LABEL_89;
              v59 = (int)ImageLimitSealAfter;
              v60 = this->fields.charaGraphBase;
              v61 = v58->fields.userSvtCollectionEntity;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v58 = item->fields.mainInfo;
                if ( !v58 )
                  goto LABEL_89;
              }
              TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41225436(
                                         v60,
                                         v61,
                                         v59,
                                         ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                         0,
                                         v58->fields.overwriteStatus,
                                         0);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v80 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v79 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v111.fields.currentCryptoKey = v80;
                *(_QWORD *)&v111.fields.fakeValue = v79;
                v81 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                     v111,
                                                                     0);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v81,
                                                                 (int32_t)v81,
                                                                 item->fields.imageLimitCount,
                                                                 v82);
                v83 = item->fields.mainInfo;
                if ( !v83 )
                  goto LABEL_89;
                v84 = (int)ImageLimitSealAfter;
                v85 = this->fields.charaGraphBase;
                v86 = v83->fields.servantLeaderInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v83 = item->fields.mainInfo;
                  if ( !v83 )
                    goto LABEL_89;
                }
                TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41226648(
                                           v85,
                                           v86,
                                           v84,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           0,
                                           v83->fields.overwriteStatus,
                                           0);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_80;
                v104 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_89;
                }
                TexturePrefab_41228604 = CharaGraphManager__CreateTexturePrefab_41227876(
                                           v104,
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
    *p_charaGraph = TexturePrefab_41228604;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_41228604,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
      UICharaGraphTexture__SetCommand_44447536(ImageLimitSealAfter, v10, 0, 0);
    }
    else
    {
      v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v10 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_89;
        UICharaGraphTexture__SetCommand_44447680(ImageLimitSealAfter, (CommandCodeEntity_o *)v10, 0, 0);
      }
      else
      {
        v37 = mainInfo->fields.userSvtEntity;
        if ( v37 )
        {
          v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
          v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v108.fields.currentCryptoKey = v39;
          *(_QWORD *)&v108.fields.fakeValue = v38;
          v40 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                               v108,
                                                               0);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v40,
                                                           (int32_t)v40,
                                                           item->fields.imageLimitCount,
                                                           v41);
          v48 = item->fields.mainInfo;
          if ( !v48 )
            goto LABEL_89;
          v49 = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          overwriteStatus = v48->fields.overwriteStatus;
          v51 = (int)ImageLimitSealAfter;
          v49->fields._OverwriteStatus_k__BackingField = overwriteStatus;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v49->fields._OverwriteStatus_k__BackingField,
            (int32_t)overwriteStatus,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v52 = item->fields.mainInfo;
          if ( !v52 )
            goto LABEL_89;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_89;
          UICharaGraphTexture__SetCharacter_44445104(
            ImageLimitSealAfter,
            v52->fields.userSvtEntity,
            v51,
            0,
            0,
            v52->fields._IsForceNotGrand_k__BackingField,
            v52->fields._IsTempGrandServant_k__BackingField,
            0);
        }
        else
        {
          v62 = mainInfo->fields.userSvtCollectionEntity;
          if ( v62 )
          {
            v64 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
            v63 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v110.fields.currentCryptoKey = v64;
            *(_QWORD *)&v110.fields.fakeValue = v63;
            v65 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                 v110,
                                                                 0);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v65,
                                                             (int32_t)v65,
                                                             item->fields.imageLimitCount,
                                                             v66);
            v73 = item->fields.mainInfo;
            if ( !v73 )
              goto LABEL_89;
            v74 = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            v75 = v73->fields.overwriteStatus;
            v76 = (int)ImageLimitSealAfter;
            v74->fields._OverwriteStatus_k__BackingField = v75;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&v74->fields._OverwriteStatus_k__BackingField,
              (int32_t)v75,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
            v77 = item->fields.mainInfo;
            if ( !v77 )
              goto LABEL_89;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_89;
            UICharaGraphTexture__SetCharacter_44446020(
              ImageLimitSealAfter,
              v77->fields.userSvtCollectionEntity,
              v76,
              0,
              0);
          }
          else
          {
            v87 = mainInfo->fields.servantLeaderInfo;
            if ( v87 )
            {
              v89 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
              v88 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v112.fields.currentCryptoKey = v89;
              *(_QWORD *)&v112.fields.fakeValue = v88;
              v90 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                   v112,
                                                                   0);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v90,
                                                               (int32_t)v90,
                                                               item->fields.imageLimitCount,
                                                               v91);
              v98 = item->fields.mainInfo;
              if ( !v98 )
                goto LABEL_89;
              v99 = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              v100 = v98->fields.overwriteStatus;
              v101 = (int)ImageLimitSealAfter;
              v99->fields._OverwriteStatus_k__BackingField = v100;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&v99->fields._OverwriteStatus_k__BackingField,
                (int32_t)v100,
                v92,
                v93,
                v94,
                v95,
                v96,
                v97);
              v102 = item->fields.mainInfo;
              if ( !v102 )
                goto LABEL_89;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_89;
              UICharaGraphTexture__SetCharacter_44446612(
                ImageLimitSealAfter,
                v102->fields.servantLeaderInfo,
                v101,
                0,
                0);
            }
            else
            {
              v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v10 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_89;
                UICharaGraphTexture__SetCharacter_44447136(
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
    sub_1C7BD40(ImageLimitSealAfter, v10);
  }
}