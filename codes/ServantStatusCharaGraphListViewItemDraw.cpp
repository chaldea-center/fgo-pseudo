void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_43895F3 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_43895F3 = 1;
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

  if ( (byte_43895F1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43895F1 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_43895F0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43895F0 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_43895EF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43895EF = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_B7769C(0LL, v4);
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

  if ( (byte_43895EC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43895EC = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v4 )
    return -1;
  v7 = this->fields.charaGraph;
  if ( !v7 )
    sub_B7769C(v4, v5);
  return v7->fields.baseKind;
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_43895EE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43895EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v7);
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

  if ( (byte_43895F2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43895F2 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v6 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_22;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_22;
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_17;
LABEL_15:
        if ( !v14->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v14);
LABEL_17:
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        *(_QWORD *)&v16.fields.fakeValue = v11;
        v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
        if ( v10 )
        {
          UICharaGraphTexture__SetExCharaGraph(v10, v6, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_22:
        sub_B7769C(v6, v7);
      }
      v10 = this->fields.charaGraph;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_17;
    goto LABEL_15;
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
  UnityEngine_GameObject_o *ImageLimitSealAfter; // x0
  UserCommandCodeCollectionEntity_o *v10; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x9
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v14; // x0
  System_Int32_array **TexturePrefab_31052320; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v23; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v24; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v26; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v27; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v31; // x0
  const MethodInfo *v32; // x3
  struct ServantStatusListViewItem_o *v33; // x8
  int32_t v34; // w21
  UnityEngine_GameObject_o *v35; // x22
  UserServantEntity_o *v36; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v37; // x0
  struct UserServantEntity_o *v38; // x8
  __int64 v39; // x22
  __int64 v40; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v41; // x0
  const MethodInfo *v42; // x3
  struct ServantStatusListViewItem_o *v43; // x8
  int32_t v44; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v46; // x22
  __int64 v47; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v48; // x0
  const MethodInfo *v49; // x3
  struct ServantStatusListViewItem_o *v50; // x8
  int32_t v51; // w21
  UnityEngine_GameObject_o *v52; // x22
  UserServantCollectionEntity_o *v53; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v54; // x0
  struct UserServantCollectionEntity_o *v55; // x8
  __int64 v56; // x22
  __int64 v57; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v58; // x0
  const MethodInfo *v59; // x3
  struct ServantStatusListViewItem_o *v60; // x8
  int32_t v61; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v63; // x22
  __int64 v64; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v65; // x0
  const MethodInfo *v66; // x3
  struct ServantStatusListViewItem_o *v67; // x8
  int32_t v68; // w21
  UnityEngine_GameObject_o *v69; // x22
  ServantLeaderInfo_o *v70; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v71; // x0
  struct ServantLeaderInfo_o *v72; // x8
  __int64 v73; // x22
  __int64 v74; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v75; // x0
  const MethodInfo *v76; // x3
  struct ServantStatusListViewItem_o *v77; // x8
  int32_t v78; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  int32_t imageLimitCount; // w2
  int32_t v81; // w25
  UnityEngine_Object_o *baseButton; // x20
  struct UnityEngine_GameObject_o *parent; // [xsp+8h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_43895ED & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_43895ED = 1;
  }
  if ( !item || !mode )
    return;
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ImageLimitSealAfter = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  mainInfo = item->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_98;
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( ((unsigned __int8)ImageLimitSealAfter & 1) != 0 )
  {
    if ( userCommandCodeEntity )
    {
      charaGraphBase = this->fields.charaGraphBase;
      v14 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v14 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31052320(
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
        v23 = this->fields.charaGraphBase;
        v24 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v24 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31052796(
                                                          v23,
                                                          userCommandCodeCollectionEntity,
                                                          v24->static_fields->DEFAULT_DEPTH,
                                                          0LL,
                                                          0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v26 = this->fields.charaGraphBase;
          v27 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v27 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31053272(
                                                            v26,
                                                            commandCodeEntity,
                                                            v27->static_fields->DEFAULT_DEPTH,
                                                            0LL,
                                                            0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v84.fields.currentCryptoKey = v30;
            *(_QWORD *)&v84.fields.fakeValue = v29;
            v31 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v84,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v31,
                                                                (int32_t)v31,
                                                                item->fields.imageLimitCount,
                                                                v32);
            v33 = item->fields.mainInfo;
            if ( !v33 )
              goto LABEL_98;
            v34 = (int)ImageLimitSealAfter;
            v35 = this->fields.charaGraphBase;
            v36 = v33->fields.userSvtEntity;
            v37 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v37 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31047328(
                                                              v35,
                                                              v36,
                                                              v34,
                                                              v37->static_fields->DEFAULT_DEPTH,
                                                              0LL,
                                                              0,
                                                              0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v47 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v46 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v86.fields.currentCryptoKey = v47;
              *(_QWORD *)&v86.fields.fakeValue = v46;
              v48 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                   v86,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v48,
                                                                  (int32_t)v48,
                                                                  item->fields.imageLimitCount,
                                                                  v49);
              v50 = item->fields.mainInfo;
              if ( !v50 )
                goto LABEL_98;
              v51 = (int)ImageLimitSealAfter;
              v52 = this->fields.charaGraphBase;
              v53 = v50->fields.userSvtCollectionEntity;
              v54 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v54 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31048704(
                                                                v52,
                                                                v53,
                                                                v51,
                                                                v54->static_fields->DEFAULT_DEPTH,
                                                                0LL,
                                                                0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v64 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v63 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v88.fields.currentCryptoKey = v64;
                *(_QWORD *)&v88.fields.fakeValue = v63;
                v65 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                     v88,
                                                                     0LL);
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                    v65,
                                                                    (int32_t)v65,
                                                                    item->fields.imageLimitCount,
                                                                    v66);
                v67 = item->fields.mainInfo;
                if ( !v67 )
                  goto LABEL_98;
                v68 = (int)ImageLimitSealAfter;
                v69 = this->fields.charaGraphBase;
                v70 = v67->fields.servantLeaderInfo;
                v71 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v71 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31050056(
                                                                  v69,
                                                                  v70,
                                                                  v68,
                                                                  v71->static_fields->DEFAULT_DEPTH,
                                                                  0LL,
                                                                  0LL);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_88;
                ImageLimitSealAfter = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  parent = this->fields.charaGraphBase;
                  v81 = item->fields.imageLimitCount;
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  ImageLimitSealAfter = parent;
                  mainInfo = item->fields.mainInfo;
                  imageLimitCount = v81;
                  if ( !mainInfo )
                    goto LABEL_98;
                }
                TexturePrefab_31052320 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_31051424(
                                                                  ImageLimitSealAfter,
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
    *p_charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_31052320;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      TexturePrefab_31052320,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  else if ( userCommandCodeEntity )
  {
    ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_98;
    UICharaGraphTexture__SetCommand(
      (UICharaGraphTexture_o *)ImageLimitSealAfter,
      mainInfo->fields.userCommandCodeEntity,
      0LL,
      0LL);
  }
  else
  {
    v10 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v10 )
    {
      ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_98;
      UICharaGraphTexture__SetCommand_36685316((UICharaGraphTexture_o *)ImageLimitSealAfter, v10, 0LL, 0LL);
    }
    else
    {
      v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v10 )
      {
        ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_98;
        UICharaGraphTexture__SetCommand_36685472(
          (UICharaGraphTexture_o *)ImageLimitSealAfter,
          (CommandCodeEntity_o *)v10,
          0LL,
          0LL);
      }
      else
      {
        v38 = mainInfo->fields.userSvtEntity;
        if ( v38 )
        {
          v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
          v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v85.fields.currentCryptoKey = v40;
          *(_QWORD *)&v85.fields.fakeValue = v39;
          v41 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               v85,
                                                               0LL);
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                              v41,
                                                              (int32_t)v41,
                                                              item->fields.imageLimitCount,
                                                              v42);
          v43 = item->fields.mainInfo;
          if ( !v43 )
            goto LABEL_98;
          v44 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_98;
          UICharaGraphTexture__SetCharacter_36683416(
            (UICharaGraphTexture_o *)ImageLimitSealAfter,
            v43->fields.userSvtEntity,
            v44,
            0LL,
            0,
            0LL);
        }
        else
        {
          v55 = mainInfo->fields.userSvtCollectionEntity;
          if ( v55 )
          {
            v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
            v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v87.fields.currentCryptoKey = v57;
            *(_QWORD *)&v87.fields.fakeValue = v56;
            v58 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v87,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v58,
                                                                (int32_t)v58,
                                                                item->fields.imageLimitCount,
                                                                v59);
            v60 = item->fields.mainInfo;
            if ( !v60 )
              goto LABEL_98;
            v61 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_98;
            UICharaGraphTexture__SetCharacter_36683968(
              (UICharaGraphTexture_o *)ImageLimitSealAfter,
              v60->fields.userSvtCollectionEntity,
              v61,
              0LL,
              0LL);
          }
          else
          {
            v72 = mainInfo->fields.servantLeaderInfo;
            if ( v72 )
            {
              v74 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
              v73 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v89.fields.currentCryptoKey = v74;
              *(_QWORD *)&v89.fields.fakeValue = v73;
              v75 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                   v89,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v75,
                                                                  (int32_t)v75,
                                                                  item->fields.imageLimitCount,
                                                                  v76);
              v77 = item->fields.mainInfo;
              if ( !v77 )
                goto LABEL_98;
              v78 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_98;
              UICharaGraphTexture__SetCharacter_36684460(
                (UICharaGraphTexture_o *)ImageLimitSealAfter,
                v77->fields.servantLeaderInfo,
                v78,
                0LL,
                0LL);
            }
            else
            {
              v10 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v10 )
              {
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_98;
                UICharaGraphTexture__SetCharacter_36684904(
                  (UICharaGraphTexture_o *)ImageLimitSealAfter,
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
LABEL_88:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    ImageLimitSealAfter = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( ImageLimitSealAfter )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))ImageLimitSealAfter->klass[1]._1.implementedInterfaces)(
        ImageLimitSealAfter,
        0LL,
        1LL,
        ImageLimitSealAfter->klass[1]._1.interfaceOffsets);
      return;
    }
LABEL_98:
    sub_B7769C(ImageLimitSealAfter, v10);
  }
}