void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4A56CD3 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4A56CD3 = 1;
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

  if ( (byte_4A56CD1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CD1 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A56CD0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CD0 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A56CCF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CCF = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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

  if ( (byte_4A56CCC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CCC = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v4 )
    return -1;
  v7 = this->fields.charaGraph;
  if ( !v7 )
    sub_1B8880C(v4, v5);
  return v7->fields.baseKind;
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A56CCE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56CCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
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

  if ( (byte_4A56CD2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56CD2 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
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
        v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
        if ( v10 )
        {
          UICharaGraphTexture__SetExCharaGraph(v10, v6, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_20:
        sub_1B8880C(v6, v7);
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


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetItem(
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
  UICharaGraphTexture_o *TexturePrefab_37910712; // x0
  int32_t v16; // w2
  int32_t v17; // w3
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
  int32_t v30; // w21
  UnityEngine_GameObject_o *v31; // x22
  UserServantEntity_o *v32; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v33; // x0
  struct UserServantEntity_o *v34; // x9
  __int64 v35; // x22
  __int64 v36; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v37; // x0
  const MethodInfo *v38; // x3
  struct ServantStatusListViewItem_o *v39; // x8
  int32_t v40; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v42; // x22
  __int64 v43; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v44; // x0
  const MethodInfo *v45; // x3
  struct ServantStatusListViewItem_o *v46; // x8
  int32_t v47; // w21
  UnityEngine_GameObject_o *v48; // x22
  UserServantCollectionEntity_o *v49; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v50; // x0
  struct UserServantCollectionEntity_o *v51; // x9
  __int64 v52; // x22
  __int64 v53; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v54; // x0
  const MethodInfo *v55; // x3
  struct ServantStatusListViewItem_o *v56; // x8
  int32_t v57; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v59; // x22
  __int64 v60; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v61; // x0
  const MethodInfo *v62; // x3
  struct ServantStatusListViewItem_o *v63; // x8
  int32_t v64; // w21
  UnityEngine_GameObject_o *v65; // x22
  ServantLeaderInfo_o *v66; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v67; // x0
  struct ServantLeaderInfo_o *v68; // x9
  __int64 v69; // x22
  __int64 v70; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v71; // x0
  const MethodInfo *v72; // x3
  struct ServantStatusListViewItem_o *v73; // x8
  int32_t v74; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v76; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4A56CCD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4A56CCD = 1;
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
    goto LABEL_83;
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
      TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37910712(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v14->static_fields->DEFAULT_DEPTH,
                                 0LL,
                                 0LL);
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
        TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37911176(
                                   v19,
                                   userCommandCodeCollectionEntity,
                                   v20->static_fields->DEFAULT_DEPTH,
                                   0LL,
                                   0LL);
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
          TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37911640(
                                     v22,
                                     commandCodeEntity,
                                     v23->static_fields->DEFAULT_DEPTH,
                                     0LL,
                                     0LL);
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
            *(_QWORD *)&v79.fields.currentCryptoKey = v26;
            *(_QWORD *)&v79.fields.fakeValue = v25;
            v27 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v79,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v27,
                                                             (int32_t)v27,
                                                             item->fields.imageLimitCount,
                                                             v28);
            v29 = item->fields.mainInfo;
            if ( !v29 )
              goto LABEL_83;
            v30 = (int)ImageLimitSealAfter;
            v31 = this->fields.charaGraphBase;
            v32 = v29->fields.userSvtEntity;
            v33 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v33 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37906428(
                                       v31,
                                       v32,
                                       v30,
                                       v33->static_fields->DEFAULT_DEPTH,
                                       0LL,
                                       0,
                                       0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v43 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v42 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v81.fields.currentCryptoKey = v43;
              *(_QWORD *)&v81.fields.fakeValue = v42;
              v44 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v81,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v44,
                                                               (int32_t)v44,
                                                               item->fields.imageLimitCount,
                                                               v45);
              v46 = item->fields.mainInfo;
              if ( !v46 )
                goto LABEL_83;
              v47 = (int)ImageLimitSealAfter;
              v48 = this->fields.charaGraphBase;
              v49 = v46->fields.userSvtCollectionEntity;
              v50 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v50 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37907624(
                                         v48,
                                         v49,
                                         v47,
                                         v50->static_fields->DEFAULT_DEPTH,
                                         0LL,
                                         0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v60 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v59 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v83.fields.currentCryptoKey = v60;
                *(_QWORD *)&v83.fields.fakeValue = v59;
                v61 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                     v83,
                                                                     0LL);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v61,
                                                                 (int32_t)v61,
                                                                 item->fields.imageLimitCount,
                                                                 v62);
                v63 = item->fields.mainInfo;
                if ( !v63 )
                  goto LABEL_83;
                v64 = (int)ImageLimitSealAfter;
                v65 = this->fields.charaGraphBase;
                v66 = v63->fields.servantLeaderInfo;
                v67 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v67 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37908796(
                                           v65,
                                           v66,
                                           v64,
                                           v67->static_fields->DEFAULT_DEPTH,
                                           0LL,
                                           0LL);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_74;
                v76 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_83;
                }
                TexturePrefab_37910712 = CharaGraphManager__CreateTexturePrefab_37909984(
                                           v76,
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
    *p_charaGraph = TexturePrefab_37910712;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37910712,
      v16,
      v17);
  }
  else if ( userCommandCodeEntity )
  {
    ImageLimitSealAfter = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_83;
    UICharaGraphTexture__SetCommand(ImageLimitSealAfter, mainInfo->fields.userCommandCodeEntity, 0LL, 0LL);
  }
  else
  {
    v10 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v10 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_83;
      UICharaGraphTexture__SetCommand_40837792(ImageLimitSealAfter, v10, 0LL, 0LL);
    }
    else
    {
      v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v10 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_83;
        UICharaGraphTexture__SetCommand_40837936(ImageLimitSealAfter, (CommandCodeEntity_o *)v10, 0LL, 0LL);
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
          *(_QWORD *)&v80.fields.currentCryptoKey = v36;
          *(_QWORD *)&v80.fields.fakeValue = v35;
          v37 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                               v80,
                                                               0LL);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v37,
                                                           (int32_t)v37,
                                                           item->fields.imageLimitCount,
                                                           v38);
          v39 = item->fields.mainInfo;
          if ( !v39 )
            goto LABEL_83;
          v40 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_83;
          UICharaGraphTexture__SetCharacter_40836020(ImageLimitSealAfter, v39->fields.userSvtEntity, v40, 0LL, 0, 0LL);
        }
        else
        {
          v51 = mainInfo->fields.userSvtCollectionEntity;
          if ( v51 )
          {
            v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
            v52 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v82.fields.currentCryptoKey = v53;
            *(_QWORD *)&v82.fields.fakeValue = v52;
            v54 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v82,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v54,
                                                             (int32_t)v54,
                                                             item->fields.imageLimitCount,
                                                             v55);
            v56 = item->fields.mainInfo;
            if ( !v56 )
              goto LABEL_83;
            v57 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_83;
            UICharaGraphTexture__SetCharacter_40836532(
              ImageLimitSealAfter,
              v56->fields.userSvtCollectionEntity,
              v57,
              0LL,
              0LL);
          }
          else
          {
            v68 = mainInfo->fields.servantLeaderInfo;
            if ( v68 )
            {
              v70 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
              v69 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v84.fields.currentCryptoKey = v70;
              *(_QWORD *)&v84.fields.fakeValue = v69;
              v71 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v84,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v71,
                                                               (int32_t)v71,
                                                               item->fields.imageLimitCount,
                                                               v72);
              v73 = item->fields.mainInfo;
              if ( !v73 )
                goto LABEL_83;
              v74 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_83;
              UICharaGraphTexture__SetCharacter_40836992(
                ImageLimitSealAfter,
                v73->fields.servantLeaderInfo,
                v74,
                0LL,
                0LL);
            }
            else
            {
              v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v10 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_83;
                UICharaGraphTexture__SetCharacter_40837412(
                  ImageLimitSealAfter,
                  (EquipTargetInfo_o *)v10,
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
LABEL_74:
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
LABEL_83:
    sub_1B8880C(ImageLimitSealAfter, v10);
  }
}