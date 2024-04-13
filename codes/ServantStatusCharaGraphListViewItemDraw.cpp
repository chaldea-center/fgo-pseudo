void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6E13 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E6E13 = 1;
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
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v8; // x1
  UICharaGraphTexture_o *v9; // x0

  if ( (byte_42E6E11 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E6E11 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v9 = this->fields.charaGraph;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    UICharaGraphTexture__ExecuteSpriteFadein(v9, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v8; // x1
  UICharaGraphTexture_o *v9; // x0

  if ( (byte_42E6E10 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E6E10 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v9 = this->fields.charaGraph;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    UICharaGraphTexture__ExecuteSpriteFadeout(v9, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_42E6E0F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6E0F = 1;
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
      sub_B5D69C(0LL, v6);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v7, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct UICharaGraphTexture_o *v9; // x8

  if ( (byte_42E6E0C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6E0C = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v6 )
    return -1;
  v9 = this->fields.charaGraph;
  if ( !v9 )
    sub_B5D69C(v6, v7);
  return v9->fields.baseKind;
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E6E0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId, limitCount, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E6E0E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v18; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42E6E12 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42E6E12 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_22;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_22;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v14 = this->fields.charaGraph;
      v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v14 = this->fields.charaGraph;
        v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_17;
LABEL_15:
        if ( !v18->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v18);
LABEL_17:
        *(_QWORD *)&v20.fields.currentCryptoKey = v16;
        *(_QWORD *)&v20.fields.fakeValue = v15;
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
        if ( v14 )
        {
          UICharaGraphTexture__SetExCharaGraph(v14, v10, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(v10, v11);
      }
      v14 = this->fields.charaGraph;
      v16 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UnityEngine_GameObject_o *ImageLimitSealAfter; // x0
  UserCommandCodeCollectionEntity_o *v16; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x9
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v20; // x0
  System_Int32_array **TexturePrefab_26720796; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v29; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v30; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v32; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v33; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v35; // x22
  __int64 v36; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v37; // x0
  const MethodInfo *v38; // x3
  struct ServantStatusListViewItem_o *v39; // x8
  int32_t v40; // w21
  UnityEngine_GameObject_o *v41; // x22
  UserServantEntity_o *v42; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v43; // x0
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x22
  __int64 v46; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v47; // x0
  const MethodInfo *v48; // x3
  struct ServantStatusListViewItem_o *v49; // x8
  int32_t v50; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v52; // x22
  __int64 v53; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v54; // x0
  const MethodInfo *v55; // x3
  struct ServantStatusListViewItem_o *v56; // x8
  int32_t v57; // w21
  UnityEngine_GameObject_o *v58; // x22
  UserServantCollectionEntity_o *v59; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v60; // x0
  struct UserServantCollectionEntity_o *v61; // x8
  __int64 v62; // x22
  __int64 v63; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v64; // x0
  const MethodInfo *v65; // x3
  struct ServantStatusListViewItem_o *v66; // x8
  int32_t v67; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v69; // x22
  __int64 v70; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v71; // x0
  const MethodInfo *v72; // x3
  struct ServantStatusListViewItem_o *v73; // x8
  int32_t v74; // w21
  UnityEngine_GameObject_o *v75; // x22
  ServantLeaderInfo_o *v76; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v77; // x0
  struct ServantLeaderInfo_o *v78; // x8
  __int64 v79; // x22
  __int64 v80; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x3
  struct ServantStatusListViewItem_o *v83; // x8
  int32_t v84; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  int32_t imageLimitCount; // w2
  int32_t v87; // w25
  UnityEngine_Object_o *baseButton; // x20
  struct UnityEngine_GameObject_o *parent; // [xsp+8h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_42E6E0D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v10, v11, v12);
    byte_42E6E0D = 1;
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
      v20 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v20 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26720796(
                                                        charaGraphBase,
                                                        userCommandCodeEntity,
                                                        v20->static_fields->DEFAULT_DEPTH,
                                                        0LL,
                                                        0LL);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v29 = this->fields.charaGraphBase;
        v30 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v30 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26721272(
                                                          v29,
                                                          userCommandCodeCollectionEntity,
                                                          v30->static_fields->DEFAULT_DEPTH,
                                                          0LL,
                                                          0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v32 = this->fields.charaGraphBase;
          v33 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v33 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26721748(
                                                            v32,
                                                            commandCodeEntity,
                                                            v33->static_fields->DEFAULT_DEPTH,
                                                            0LL,
                                                            0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v35 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v90.fields.currentCryptoKey = v36;
            *(_QWORD *)&v90.fields.fakeValue = v35;
            v37 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 v90,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v37,
                                                                (int32_t)v37,
                                                                item->fields.imageLimitCount,
                                                                v38);
            v39 = item->fields.mainInfo;
            if ( !v39 )
              goto LABEL_98;
            v40 = (int)ImageLimitSealAfter;
            v41 = this->fields.charaGraphBase;
            v42 = v39->fields.userSvtEntity;
            v43 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v43 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26715804(
                                                              v41,
                                                              v42,
                                                              v40,
                                                              v43->static_fields->DEFAULT_DEPTH,
                                                              0LL,
                                                              0,
                                                              0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v53 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v52 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v92.fields.currentCryptoKey = v53;
              *(_QWORD *)&v92.fields.fakeValue = v52;
              v54 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                   v92,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v54,
                                                                  (int32_t)v54,
                                                                  item->fields.imageLimitCount,
                                                                  v55);
              v56 = item->fields.mainInfo;
              if ( !v56 )
                goto LABEL_98;
              v57 = (int)ImageLimitSealAfter;
              v58 = this->fields.charaGraphBase;
              v59 = v56->fields.userSvtCollectionEntity;
              v60 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v60 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26717180(
                                                                v58,
                                                                v59,
                                                                v57,
                                                                v60->static_fields->DEFAULT_DEPTH,
                                                                0LL,
                                                                0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v70 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v69 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v94.fields.currentCryptoKey = v70;
                *(_QWORD *)&v94.fields.fakeValue = v69;
                v71 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                     v94,
                                                                     0LL);
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                    v71,
                                                                    (int32_t)v71,
                                                                    item->fields.imageLimitCount,
                                                                    v72);
                v73 = item->fields.mainInfo;
                if ( !v73 )
                  goto LABEL_98;
                v74 = (int)ImageLimitSealAfter;
                v75 = this->fields.charaGraphBase;
                v76 = v73->fields.servantLeaderInfo;
                v77 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v77 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26718532(
                                                                  v75,
                                                                  v76,
                                                                  v74,
                                                                  v77->static_fields->DEFAULT_DEPTH,
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
                  v87 = item->fields.imageLimitCount;
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  ImageLimitSealAfter = parent;
                  mainInfo = item->fields.mainInfo;
                  imageLimitCount = v87;
                  if ( !mainInfo )
                    goto LABEL_98;
                }
                TexturePrefab_26720796 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26719900(
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
    *p_charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_26720796;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      TexturePrefab_26720796,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
    v16 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v16 )
    {
      ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_98;
      UICharaGraphTexture__SetCommand_35990016((UICharaGraphTexture_o *)ImageLimitSealAfter, v16, 0LL, 0LL);
    }
    else
    {
      v16 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v16 )
      {
        ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_98;
        UICharaGraphTexture__SetCommand_35990172(
          (UICharaGraphTexture_o *)ImageLimitSealAfter,
          (CommandCodeEntity_o *)v16,
          0LL,
          0LL);
      }
      else
      {
        v44 = mainInfo->fields.userSvtEntity;
        if ( v44 )
        {
          v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
          v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v91.fields.currentCryptoKey = v46;
          *(_QWORD *)&v91.fields.fakeValue = v45;
          v47 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v91,
                                                               0LL);
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                              v47,
                                                              (int32_t)v47,
                                                              item->fields.imageLimitCount,
                                                              v48);
          v49 = item->fields.mainInfo;
          if ( !v49 )
            goto LABEL_98;
          v50 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_98;
          UICharaGraphTexture__SetCharacter_35988116(
            (UICharaGraphTexture_o *)ImageLimitSealAfter,
            v49->fields.userSvtEntity,
            v50,
            0LL,
            0,
            0LL);
        }
        else
        {
          v61 = mainInfo->fields.userSvtCollectionEntity;
          if ( v61 )
          {
            v63 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
            v62 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v93.fields.currentCryptoKey = v63;
            *(_QWORD *)&v93.fields.fakeValue = v62;
            v64 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 v93,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v64,
                                                                (int32_t)v64,
                                                                item->fields.imageLimitCount,
                                                                v65);
            v66 = item->fields.mainInfo;
            if ( !v66 )
              goto LABEL_98;
            v67 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_98;
            UICharaGraphTexture__SetCharacter_35988668(
              (UICharaGraphTexture_o *)ImageLimitSealAfter,
              v66->fields.userSvtCollectionEntity,
              v67,
              0LL,
              0LL);
          }
          else
          {
            v78 = mainInfo->fields.servantLeaderInfo;
            if ( v78 )
            {
              v80 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
              v79 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v95.fields.currentCryptoKey = v80;
              *(_QWORD *)&v95.fields.fakeValue = v79;
              v81 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                   v95,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v81,
                                                                  (int32_t)v81,
                                                                  item->fields.imageLimitCount,
                                                                  v82);
              v83 = item->fields.mainInfo;
              if ( !v83 )
                goto LABEL_98;
              v84 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_98;
              UICharaGraphTexture__SetCharacter_35989160(
                (UICharaGraphTexture_o *)ImageLimitSealAfter,
                v83->fields.servantLeaderInfo,
                v84,
                0LL,
                0LL);
            }
            else
            {
              v16 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v16 )
              {
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_98;
                UICharaGraphTexture__SetCharacter_35989604(
                  (UICharaGraphTexture_o *)ImageLimitSealAfter,
                  (EquipTargetInfo_o *)v16,
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
    sub_B5D69C(ImageLimitSealAfter, v16);
  }
}