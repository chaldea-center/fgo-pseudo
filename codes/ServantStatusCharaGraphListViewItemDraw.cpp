void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4185FAD & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1);
    byte_4185FAD = 1;
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

  if ( (byte_4185FAB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185FAB = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_4185FAA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185FAA = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_4185FA9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185FA9 = 1;
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
      sub_B2C434(0LL, v4);
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

  if ( (byte_4185FA6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185FA6 = 1;
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
    sub_B2C434(v4, v5);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4185FA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185FA8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
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

  if ( (byte_4185FAC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4185FAC = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_22;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_22;
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_17;
LABEL_15:
        if ( !v15->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v15);
LABEL_17:
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
        if ( v11 )
        {
          UICharaGraphTexture__SetExCharaGraph(v11, v7, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_22:
        sub_B2C434(v7, v8);
      }
      v11 = this->fields.charaGraph;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
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
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UnityEngine_GameObject_o *ImageLimitSealAfter; // x0
  UserCommandCodeCollectionEntity_o *v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x9
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v16; // x0
  System_Int32_array **TexturePrefab_25407500; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v25; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v26; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v28; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v29; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v31; // x22
  __int64 v32; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v33; // x0
  const MethodInfo *v34; // x3
  struct ServantStatusListViewItem_o *v35; // x8
  int32_t v36; // w21
  UnityEngine_GameObject_o *v37; // x22
  UserServantEntity_o *v38; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v39; // x0
  struct UserServantEntity_o *v40; // x8
  __int64 v41; // x22
  __int64 v42; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v43; // x0
  const MethodInfo *v44; // x3
  struct ServantStatusListViewItem_o *v45; // x8
  int32_t v46; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v48; // x22
  __int64 v49; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v50; // x0
  const MethodInfo *v51; // x3
  struct ServantStatusListViewItem_o *v52; // x8
  int32_t v53; // w21
  UnityEngine_GameObject_o *v54; // x22
  UserServantCollectionEntity_o *v55; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v56; // x0
  struct UserServantCollectionEntity_o *v57; // x8
  __int64 v58; // x22
  __int64 v59; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v60; // x0
  const MethodInfo *v61; // x3
  struct ServantStatusListViewItem_o *v62; // x8
  int32_t v63; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v65; // x22
  __int64 v66; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v67; // x0
  const MethodInfo *v68; // x3
  struct ServantStatusListViewItem_o *v69; // x8
  int32_t v70; // w21
  UnityEngine_GameObject_o *v71; // x22
  ServantLeaderInfo_o *v72; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v73; // x0
  struct ServantLeaderInfo_o *v74; // x8
  __int64 v75; // x22
  __int64 v76; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v77; // x0
  const MethodInfo *v78; // x3
  struct ServantStatusListViewItem_o *v79; // x8
  int32_t v80; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  int32_t imageLimitCount; // w2
  int32_t v83; // w25
  UnityEngine_Object_o *baseButton; // x20
  struct UnityEngine_GameObject_o *parent; // [xsp+8h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4185FA7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v8);
    byte_4185FA7 = 1;
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
      v16 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v16 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25407500(
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
        v25 = this->fields.charaGraphBase;
        v26 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v26 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25407976(
                                                          v25,
                                                          userCommandCodeCollectionEntity,
                                                          v26->static_fields->DEFAULT_DEPTH,
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
          TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25408452(
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
            v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v86.fields.currentCryptoKey = v32;
            *(_QWORD *)&v86.fields.fakeValue = v31;
            v33 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v86,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v33,
                                                                (int32_t)v33,
                                                                item->fields.imageLimitCount,
                                                                v34);
            v35 = item->fields.mainInfo;
            if ( !v35 )
              goto LABEL_98;
            v36 = (int)ImageLimitSealAfter;
            v37 = this->fields.charaGraphBase;
            v38 = v35->fields.userSvtEntity;
            v39 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v39 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25402508(
                                                              v37,
                                                              v38,
                                                              v36,
                                                              v39->static_fields->DEFAULT_DEPTH,
                                                              0LL,
                                                              0,
                                                              0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v49 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v48 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v88.fields.currentCryptoKey = v49;
              *(_QWORD *)&v88.fields.fakeValue = v48;
              v50 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                   v88,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v50,
                                                                  (int32_t)v50,
                                                                  item->fields.imageLimitCount,
                                                                  v51);
              v52 = item->fields.mainInfo;
              if ( !v52 )
                goto LABEL_98;
              v53 = (int)ImageLimitSealAfter;
              v54 = this->fields.charaGraphBase;
              v55 = v52->fields.userSvtCollectionEntity;
              v56 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v56 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25403884(
                                                                v54,
                                                                v55,
                                                                v53,
                                                                v56->static_fields->DEFAULT_DEPTH,
                                                                0LL,
                                                                0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v66 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v65 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v90.fields.currentCryptoKey = v66;
                *(_QWORD *)&v90.fields.fakeValue = v65;
                v67 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                     v90,
                                                                     0LL);
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                    v67,
                                                                    (int32_t)v67,
                                                                    item->fields.imageLimitCount,
                                                                    v68);
                v69 = item->fields.mainInfo;
                if ( !v69 )
                  goto LABEL_98;
                v70 = (int)ImageLimitSealAfter;
                v71 = this->fields.charaGraphBase;
                v72 = v69->fields.servantLeaderInfo;
                v73 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v73 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25405236(
                                                                  v71,
                                                                  v72,
                                                                  v70,
                                                                  v73->static_fields->DEFAULT_DEPTH,
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
                  v83 = item->fields.imageLimitCount;
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  ImageLimitSealAfter = parent;
                  mainInfo = item->fields.mainInfo;
                  imageLimitCount = v83;
                  if ( !mainInfo )
                    goto LABEL_98;
                }
                TexturePrefab_25407500 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25406604(
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
    *p_charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_25407500;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      TexturePrefab_25407500,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
    v12 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v12 )
    {
      ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_98;
      UICharaGraphTexture__SetCommand_35721856((UICharaGraphTexture_o *)ImageLimitSealAfter, v12, 0LL, 0LL);
    }
    else
    {
      v12 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v12 )
      {
        ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_98;
        UICharaGraphTexture__SetCommand_35722012(
          (UICharaGraphTexture_o *)ImageLimitSealAfter,
          (CommandCodeEntity_o *)v12,
          0LL,
          0LL);
      }
      else
      {
        v40 = mainInfo->fields.userSvtEntity;
        if ( v40 )
        {
          v42 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
          v41 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v87.fields.currentCryptoKey = v42;
          *(_QWORD *)&v87.fields.fakeValue = v41;
          v43 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v87,
                                                               0LL);
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                              v43,
                                                              (int32_t)v43,
                                                              item->fields.imageLimitCount,
                                                              v44);
          v45 = item->fields.mainInfo;
          if ( !v45 )
            goto LABEL_98;
          v46 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_98;
          UICharaGraphTexture__SetCharacter_35719956(
            (UICharaGraphTexture_o *)ImageLimitSealAfter,
            v45->fields.userSvtEntity,
            v46,
            0LL,
            0,
            0LL);
        }
        else
        {
          v57 = mainInfo->fields.userSvtCollectionEntity;
          if ( v57 )
          {
            v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
            v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v89.fields.currentCryptoKey = v59;
            *(_QWORD *)&v89.fields.fakeValue = v58;
            v60 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v89,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v60,
                                                                (int32_t)v60,
                                                                item->fields.imageLimitCount,
                                                                v61);
            v62 = item->fields.mainInfo;
            if ( !v62 )
              goto LABEL_98;
            v63 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_98;
            UICharaGraphTexture__SetCharacter_35720508(
              (UICharaGraphTexture_o *)ImageLimitSealAfter,
              v62->fields.userSvtCollectionEntity,
              v63,
              0LL,
              0LL);
          }
          else
          {
            v74 = mainInfo->fields.servantLeaderInfo;
            if ( v74 )
            {
              v76 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
              v75 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v91.fields.currentCryptoKey = v76;
              *(_QWORD *)&v91.fields.fakeValue = v75;
              v77 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                   v91,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v77,
                                                                  (int32_t)v77,
                                                                  item->fields.imageLimitCount,
                                                                  v78);
              v79 = item->fields.mainInfo;
              if ( !v79 )
                goto LABEL_98;
              v80 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_98;
              UICharaGraphTexture__SetCharacter_35721000(
                (UICharaGraphTexture_o *)ImageLimitSealAfter,
                v79->fields.servantLeaderInfo,
                v80,
                0LL,
                0LL);
            }
            else
            {
              v12 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v12 )
              {
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_98;
                UICharaGraphTexture__SetCharacter_35721444(
                  (UICharaGraphTexture_o *)ImageLimitSealAfter,
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
    sub_B2C434(ImageLimitSealAfter, v12);
  }
}