void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4212DB6 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1);
    byte_4212DB6 = 1;
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

  if ( (byte_4212DB4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212DB4 = 1;
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
      sub_B0D97C(0LL);
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

  if ( (byte_4212DB3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212DB3 = 1;
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
      sub_B0D97C(0LL);
    UICharaGraphTexture__ExecuteSpriteFadeout(v6, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v4; // x0

  if ( (byte_4212DB2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212DB2 = 1;
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
      sub_B0D97C(0LL);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v4, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v4; // x0
  struct UICharaGraphTexture_o *v6; // x8

  if ( (byte_4212DAF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212DAF = 1;
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
  v6 = this->fields.charaGraph;
  if ( !v6 )
    sub_B0D97C(v4);
  return v6->fields.baseKind;
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

  if ( (byte_4212DB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212DB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v14; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4212DB5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4212DB5 = 1;
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
        v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
        if ( v10 )
        {
          UICharaGraphTexture__SetExCharaGraph(v10, v7, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_22:
        sub_B0D97C(v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UnityEngine_GameObject_o *ImageLimitSealAfter; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x9
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v15; // x0
  System_Int32_array **TexturePrefab_24041508; // x0
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
  struct ServantStatusListViewItem_o *v36; // x8
  int32_t v37; // w21
  UnityEngine_GameObject_o *v38; // x22
  UserServantEntity_o *v39; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v40; // x0
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v44; // x0
  const MethodInfo *v45; // x3
  struct ServantStatusListViewItem_o *v46; // x8
  int32_t v47; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v49; // x22
  __int64 v50; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v51; // x0
  const MethodInfo *v52; // x3
  struct ServantStatusListViewItem_o *v53; // x8
  int32_t v54; // w21
  UnityEngine_GameObject_o *v55; // x22
  UserServantCollectionEntity_o *v56; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v57; // x0
  struct UserServantCollectionEntity_o *v58; // x8
  __int64 v59; // x22
  __int64 v60; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v61; // x0
  const MethodInfo *v62; // x3
  struct ServantStatusListViewItem_o *v63; // x8
  int32_t v64; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v66; // x22
  __int64 v67; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v68; // x0
  const MethodInfo *v69; // x3
  struct ServantStatusListViewItem_o *v70; // x8
  int32_t v71; // w21
  UnityEngine_GameObject_o *v72; // x22
  ServantLeaderInfo_o *v73; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v74; // x0
  struct ServantLeaderInfo_o *v75; // x8
  __int64 v76; // x22
  __int64 v77; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v78; // x0
  const MethodInfo *v79; // x3
  struct ServantStatusListViewItem_o *v80; // x8
  int32_t v81; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  int32_t imageLimitCount; // w2
  int32_t v84; // w25
  UnityEngine_Object_o *baseButton; // x20
  EquipTargetInfo_o *v86; // x1
  struct UnityEngine_GameObject_o *parent; // [xsp+8h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4212DB0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v8);
    byte_4212DB0 = 1;
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
      v15 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v15 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24041508(
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
        TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24041984(
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
          TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24042460(
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
            *(_QWORD *)&v88.fields.currentCryptoKey = v33;
            *(_QWORD *)&v88.fields.fakeValue = v32;
            v34 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                 v88,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v34,
                                                                (int32_t)v34,
                                                                item->fields.imageLimitCount,
                                                                v35);
            v36 = item->fields.mainInfo;
            if ( !v36 )
              goto LABEL_98;
            v37 = (int)ImageLimitSealAfter;
            v38 = this->fields.charaGraphBase;
            v39 = v36->fields.userSvtEntity;
            v40 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v40 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24036516(
                                                              v38,
                                                              v39,
                                                              v37,
                                                              v40->static_fields->DEFAULT_DEPTH,
                                                              0LL,
                                                              0,
                                                              0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v50 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v49 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v90.fields.currentCryptoKey = v50;
              *(_QWORD *)&v90.fields.fakeValue = v49;
              v51 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                   v90,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v51,
                                                                  (int32_t)v51,
                                                                  item->fields.imageLimitCount,
                                                                  v52);
              v53 = item->fields.mainInfo;
              if ( !v53 )
                goto LABEL_98;
              v54 = (int)ImageLimitSealAfter;
              v55 = this->fields.charaGraphBase;
              v56 = v53->fields.userSvtCollectionEntity;
              v57 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v57 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24037892(
                                                                v55,
                                                                v56,
                                                                v54,
                                                                v57->static_fields->DEFAULT_DEPTH,
                                                                0LL,
                                                                0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v67 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v66 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v92.fields.currentCryptoKey = v67;
                *(_QWORD *)&v92.fields.fakeValue = v66;
                v68 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                     v92,
                                                                     0LL);
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                    v68,
                                                                    (int32_t)v68,
                                                                    item->fields.imageLimitCount,
                                                                    v69);
                v70 = item->fields.mainInfo;
                if ( !v70 )
                  goto LABEL_98;
                v71 = (int)ImageLimitSealAfter;
                v72 = this->fields.charaGraphBase;
                v73 = v70->fields.servantLeaderInfo;
                v74 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( (BYTE3(ServantStatusCharaGraphListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v74 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24039244(
                                                                  v72,
                                                                  v73,
                                                                  v71,
                                                                  v74->static_fields->DEFAULT_DEPTH,
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
                  v84 = item->fields.imageLimitCount;
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  ImageLimitSealAfter = parent;
                  mainInfo = item->fields.mainInfo;
                  imageLimitCount = v84;
                  if ( !mainInfo )
                    goto LABEL_98;
                }
                TexturePrefab_24041508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24040612(
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
    *p_charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_24041508;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      TexturePrefab_24041508,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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
    v26 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v26 )
    {
      ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_98;
      UICharaGraphTexture__SetCommand_35244812((UICharaGraphTexture_o *)ImageLimitSealAfter, v26, 0LL, 0LL);
    }
    else
    {
      v30 = mainInfo->fields.commandCodeEntity;
      if ( v30 )
      {
        ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_98;
        UICharaGraphTexture__SetCommand_35244968((UICharaGraphTexture_o *)ImageLimitSealAfter, v30, 0LL, 0LL);
      }
      else
      {
        v41 = mainInfo->fields.userSvtEntity;
        if ( v41 )
        {
          v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v89.fields.currentCryptoKey = v43;
          *(_QWORD *)&v89.fields.fakeValue = v42;
          v44 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v89,
                                                               0LL);
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                              v44,
                                                              (int32_t)v44,
                                                              item->fields.imageLimitCount,
                                                              v45);
          v46 = item->fields.mainInfo;
          if ( !v46 )
            goto LABEL_98;
          v47 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_98;
          UICharaGraphTexture__SetCharacter_35242912(
            (UICharaGraphTexture_o *)ImageLimitSealAfter,
            v46->fields.userSvtEntity,
            v47,
            0LL,
            0,
            0LL);
        }
        else
        {
          v58 = mainInfo->fields.userSvtCollectionEntity;
          if ( v58 )
          {
            v60 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
            v59 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v91.fields.currentCryptoKey = v60;
            *(_QWORD *)&v91.fields.fakeValue = v59;
            v61 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                 v91,
                                                                 0LL);
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                v61,
                                                                (int32_t)v61,
                                                                item->fields.imageLimitCount,
                                                                v62);
            v63 = item->fields.mainInfo;
            if ( !v63 )
              goto LABEL_98;
            v64 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_98;
            UICharaGraphTexture__SetCharacter_35243464(
              (UICharaGraphTexture_o *)ImageLimitSealAfter,
              v63->fields.userSvtCollectionEntity,
              v64,
              0LL,
              0LL);
          }
          else
          {
            v75 = mainInfo->fields.servantLeaderInfo;
            if ( v75 )
            {
              v77 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
              v76 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v93.fields.currentCryptoKey = v77;
              *(_QWORD *)&v93.fields.fakeValue = v76;
              v78 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                   v93,
                                                                   0LL);
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                  v78,
                                                                  (int32_t)v78,
                                                                  item->fields.imageLimitCount,
                                                                  v79);
              v80 = item->fields.mainInfo;
              if ( !v80 )
                goto LABEL_98;
              v81 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_98;
              UICharaGraphTexture__SetCharacter_35243956(
                (UICharaGraphTexture_o *)ImageLimitSealAfter,
                v80->fields.servantLeaderInfo,
                v81,
                0LL,
                0LL);
            }
            else
            {
              v86 = mainInfo->fields.equipTargetInfo;
              if ( v86 )
              {
                ImageLimitSealAfter = (UnityEngine_GameObject_o *)*p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_98;
                UICharaGraphTexture__SetCharacter_35244400(
                  (UICharaGraphTexture_o *)ImageLimitSealAfter,
                  v86,
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
    sub_B0D97C(ImageLimitSealAfter);
  }
}