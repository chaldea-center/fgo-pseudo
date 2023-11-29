void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8728 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1);
    byte_40F8728 = 1;
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
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_40F8726 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8726 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_B170D4();
    UICharaGraphTexture__ExecuteSpriteFadein(v6, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_40F8725 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8725 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_B170D4();
    UICharaGraphTexture__ExecuteSpriteFadeout(v6, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v4; // x0

  if ( (byte_40F8724 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8724 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v4 = this->fields.charaGraph;
    if ( !v4 )
      sub_B170D4();
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v4, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x8

  if ( (byte_40F8721 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8721 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
    return -1;
  v5 = this->fields.charaGraph;
  if ( !v5 )
    sub_B170D4();
  return v5->fields.baseKind;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F8723 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8723 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           MasterData_WarQuestSelectionMaster,
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v13; // x0
  int32_t v14; // w0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F8727 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40F8727 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    if ( !item )
      goto LABEL_22;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_22;
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_17;
LABEL_15:
        if ( !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
LABEL_17:
        *(_QWORD *)&v16.fields.currentCryptoKey = v11;
        *(_QWORD *)&v16.fields.fakeValue = v10;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
        if ( v9 )
        {
          UICharaGraphTexture__SetExCharaGraph(v9, v14, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_22:
        sub_B170D4();
      }
      v9 = this->fields.charaGraph;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
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
  __int64 v7; // x1
  __int64 v8; // x1
  UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  bool v11; // w0
  struct ServantStatusListViewItem_o *mainInfo; // x9
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v15; // x0
  System_Int32_array **TexturePrefab_26887824; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v24; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v25; // x0
  UserCommandCodeCollectionEntity_o *v26; // x1
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v28; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v29; // x0
  CommandCodeEntity_o *v30; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v32; // x22
  __int64 v33; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v34; // x0
  const MethodInfo *v35; // x3
  int32_t ImageLimitSealAfter; // w0
  struct ServantStatusListViewItem_o *v37; // x8
  int32_t v38; // w21
  UnityEngine_GameObject_o *v39; // x22
  UserServantEntity_o *v40; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v41; // x0
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x22
  __int64 v44; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v45; // x0
  const MethodInfo *v46; // x3
  int32_t v47; // w0
  struct ServantStatusListViewItem_o *v48; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v50; // x22
  __int64 v51; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // w0
  struct ServantStatusListViewItem_o *v55; // x8
  int32_t v56; // w21
  UnityEngine_GameObject_o *v57; // x22
  UserServantCollectionEntity_o *v58; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v59; // x0
  struct UserServantCollectionEntity_o *v60; // x8
  __int64 v61; // x22
  __int64 v62; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v63; // x0
  const MethodInfo *v64; // x3
  int32_t v65; // w0
  struct ServantStatusListViewItem_o *v66; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v68; // x22
  __int64 v69; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v70; // x0
  const MethodInfo *v71; // x3
  int32_t v72; // w0
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
  int32_t v83; // w0
  struct ServantStatusListViewItem_o *v84; // x8
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v86; // x0
  int32_t imageLimitCount; // w2
  int32_t v88; // w25
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v90; // x0
  EquipTargetInfo_o *v91; // x1
  struct UnityEngine_GameObject_o *parent; // [xsp+8h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_40F8722 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v8);
    byte_40F8722 = 1;
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
  v11 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  mainInfo = item->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_98;
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( v11 )
  {
    if ( userCommandCodeEntity )
    {
      charaGraphBase = this->fields.charaGraphBase;
      v15 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v15 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26887824(
                                                        charaGraphBase,
                                                        userCommandCodeEntity,
                                                        v15->static_fields->DEFAULT_DEPTH,
                                                        0LL,
                                                        0LL);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v24 = this->fields.charaGraphBase;
        v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26888300(
                                                          v24,
                                                          userCommandCodeCollectionEntity,
                                                          v25->static_fields->DEFAULT_DEPTH,
                                                          0LL,
                                                          0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v28 = this->fields.charaGraphBase;
          v29 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v29 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26888776(
                                                            v28,
                                                            commandCodeEntity,
                                                            v29->static_fields->DEFAULT_DEPTH,
                                                            0LL,
                                                            0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v93.fields.currentCryptoKey = v33;
            *(_QWORD *)&v93.fields.fakeValue = v32;
            v34 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                 v93,
                                                                 0LL);
            ImageLimitSealAfter = ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                    v34,
                                    (int32_t)v34,
                                    item->fields.imageLimitCount,
                                    v35);
            v37 = item->fields.mainInfo;
            if ( !v37 )
              goto LABEL_98;
            v38 = ImageLimitSealAfter;
            v39 = this->fields.charaGraphBase;
            v40 = v37->fields.userSvtEntity;
            v41 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v41 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26882832(
                                                              v39,
                                                              v40,
                                                              v38,
                                                              v41->static_fields->DEFAULT_DEPTH,
                                                              0LL,
                                                              0,
                                                              0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v51 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v50 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v95.fields.currentCryptoKey = v51;
              *(_QWORD *)&v95.fields.fakeValue = v50;
              v52 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                   v95,
                                                                   0LL);
              v54 = ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                      v52,
                      (int32_t)v52,
                      item->fields.imageLimitCount,
                      v53);
              v55 = item->fields.mainInfo;
              if ( !v55 )
                goto LABEL_98;
              v56 = v54;
              v57 = this->fields.charaGraphBase;
              v58 = v55->fields.userSvtCollectionEntity;
              v59 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v59 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26884208(
                                                                v57,
                                                                v58,
                                                                v56,
                                                                v59->static_fields->DEFAULT_DEPTH,
                                                                0LL,
                                                                0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v69 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v68 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v97.fields.currentCryptoKey = v69;
                *(_QWORD *)&v97.fields.fakeValue = v68;
                v70 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                     v97,
                                                                     0LL);
                v72 = ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                        v70,
                        (int32_t)v70,
                        item->fields.imageLimitCount,
                        v71);
                v73 = item->fields.mainInfo;
                if ( !v73 )
                  goto LABEL_98;
                v74 = v72;
                v75 = this->fields.charaGraphBase;
                v76 = v73->fields.servantLeaderInfo;
                v77 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v77 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26885560(
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
                v86 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  parent = this->fields.charaGraphBase;
                  v88 = item->fields.imageLimitCount;
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v86 = parent;
                  mainInfo = item->fields.mainInfo;
                  imageLimitCount = v88;
                  if ( !mainInfo )
                    goto LABEL_98;
                }
                TexturePrefab_26887824 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26886928(
                                                                  v86,
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
    *p_charaGraph = (UICharaGraphTexture_o *)TexturePrefab_26887824;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      TexturePrefab_26887824,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  else if ( userCommandCodeEntity )
  {
    if ( !*p_charaGraph )
      goto LABEL_98;
    UICharaGraphTexture__SetCommand(*p_charaGraph, mainInfo->fields.userCommandCodeEntity, 0LL, 0LL);
  }
  else
  {
    v26 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v26 )
    {
      if ( !*p_charaGraph )
        goto LABEL_98;
      UICharaGraphTexture__SetCommand_35081976(*p_charaGraph, v26, 0LL, 0LL);
    }
    else
    {
      v30 = mainInfo->fields.commandCodeEntity;
      if ( v30 )
      {
        if ( !*p_charaGraph )
          goto LABEL_98;
        UICharaGraphTexture__SetCommand_35082132(*p_charaGraph, v30, 0LL, 0LL);
      }
      else
      {
        v42 = mainInfo->fields.userSvtEntity;
        if ( v42 )
        {
          v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
          v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v94.fields.currentCryptoKey = v44;
          *(_QWORD *)&v94.fields.fakeValue = v43;
          v45 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                               v94,
                                                               0LL);
          v47 = ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                  v45,
                  (int32_t)v45,
                  item->fields.imageLimitCount,
                  v46);
          v48 = item->fields.mainInfo;
          if ( !v48 || !*p_charaGraph )
            goto LABEL_98;
          UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, v48->fields.userSvtEntity, v47, 0LL, 0, 0LL);
        }
        else
        {
          v60 = mainInfo->fields.userSvtCollectionEntity;
          if ( v60 )
          {
            v62 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
            v61 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v96.fields.currentCryptoKey = v62;
            *(_QWORD *)&v96.fields.fakeValue = v61;
            v63 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                 v96,
                                                                 0LL);
            v65 = ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                    v63,
                    (int32_t)v63,
                    item->fields.imageLimitCount,
                    v64);
            v66 = item->fields.mainInfo;
            if ( !v66 || !*p_charaGraph )
              goto LABEL_98;
            UICharaGraphTexture__SetCharacter_35080628(
              *p_charaGraph,
              v66->fields.userSvtCollectionEntity,
              v65,
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
              *(_QWORD *)&v98.fields.currentCryptoKey = v80;
              *(_QWORD *)&v98.fields.fakeValue = v79;
              v81 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                   v98,
                                                                   0LL);
              v83 = ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                      v81,
                      (int32_t)v81,
                      item->fields.imageLimitCount,
                      v82);
              v84 = item->fields.mainInfo;
              if ( !v84 || !*p_charaGraph )
                goto LABEL_98;
              UICharaGraphTexture__SetCharacter_35081120(*p_charaGraph, v84->fields.servantLeaderInfo, v83, 0LL, 0LL);
            }
            else
            {
              v91 = mainInfo->fields.equipTargetInfo;
              if ( v91 )
              {
                if ( !*p_charaGraph )
                  goto LABEL_98;
                UICharaGraphTexture__SetCharacter_35081564(
                  *p_charaGraph,
                  v91,
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
    v90 = this->fields.baseButton;
    if ( v90 )
    {
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v90->klass->vtable._14_SetState.method)(
        v90,
        0LL,
        1LL,
        v90->klass->vtable._15_OnPress.methodPtr);
      return;
    }
LABEL_98:
    sub_B170D4();
  }
}