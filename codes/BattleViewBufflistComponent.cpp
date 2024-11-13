void __fastcall BattleViewBufflistComponent___ctor(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19432 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B19432 = 1;
  }
  this->fields.height = 120.0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewBufflistComponent__UpdateBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        bool isHideAttribute,
        const MethodInfo *method)
{
  UnityEngine_Object_o *stateTitleObj; // x21
  struct UIScrollView_o *mBG; // x0
  __int64 v7; // x1
  struct UIScrollView_o *uiScrollView; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v10; // x8
  struct UIScrollView_o *v11; // x8
  struct UIScrollView_o *v12; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v14; // x8
  struct UIProgressBar_o *v15; // x8
  struct UIScrollView_o *v16; // x8
  struct UIProgressBar_o *v17; // x8
  int32_t v18; // w1
  struct UIScrollView_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  struct UIScrollView_o *v21; // x8
  struct UIScrollView_o *v22; // x8
  struct UIScrollView_o *v23; // x8
  struct UIProgressBar_o *v24; // x8
  struct UIScrollView_o *v25; // x8
  struct UIProgressBar_o *v26; // x8
  struct UIScrollView_o *v27; // x8
  struct UIProgressBar_o *v28; // x8

  if ( (byte_4B19431 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isHideAttribute, method);
    byte_4B19431 = 1;
  }
  stateTitleObj = (UnityEngine_Object_o *)this->fields.stateTitleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isHideAttribute);
  mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0LL, 0LL);
  if ( isHideAttribute )
  {
    if ( ((unsigned __int8)mBG & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0LL) <= -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, 0.0, 0LL);
    }
    uiScrollView = this->fields.uiScrollView;
    if ( !uiScrollView )
      goto LABEL_54;
    mPanel = (UnityEngine_Object_o *)uiScrollView->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(mPanel, 0LL, 0LL);
    if ( ((unsigned __int8)mBG & 1) != 0 )
    {
      v10 = this->fields.uiScrollView;
      if ( !v10 )
        goto LABEL_54;
      mBG = (struct UIScrollView_o *)v10->fields.mPanel;
      if ( !mBG )
        goto LABEL_54;
      if ( UIPanel__get_height((UIPanel_o *)mBG, 0LL) <= 300.0 )
      {
        v11 = this->fields.uiScrollView;
        if ( v11 )
        {
          mBG = (struct UIScrollView_o *)v11->fields.mPanel;
          if ( mBG )
          {
            ((void (__fastcall *)(struct UIScrollView_o *, void *, float, float, float, float))mBG->klass[1]._1.klass)(
              mBG,
              mBG->klass[1]._1.fields,
              0.0,
              -11.0,
              670.0,
              298.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -196.0, 0LL);
            v12 = this->fields.uiScrollView;
            if ( v12 )
            {
              verticalScrollBar = v12->fields.verticalScrollBar;
              if ( verticalScrollBar )
              {
                mBG = (struct UIScrollView_o *)verticalScrollBar->fields.mBG;
                if ( mBG )
                {
                  UIWidget__set_height((UIWidget_o *)mBG, 312, 0LL);
                  v14 = this->fields.uiScrollView;
                  if ( v14 )
                  {
                    v15 = v14->fields.verticalScrollBar;
                    if ( v15 )
                    {
                      mBG = (struct UIScrollView_o *)v15->fields.mFG;
                      if ( mBG )
                      {
                        UIWidget__set_width((UIWidget_o *)mBG, 26, 0LL);
                        v16 = this->fields.uiScrollView;
                        if ( v16 )
                        {
                          v17 = v16->fields.verticalScrollBar;
                          if ( v17 )
                          {
                            mBG = (struct UIScrollView_o *)v17->fields.mFG;
                            if ( mBG )
                            {
                              v18 = 312;
LABEL_50:
                              UIWidget__set_height((UIWidget_o *)mBG, v18, 0LL);
                              goto LABEL_51;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_54;
      }
    }
  }
  else
  {
    if ( ((unsigned __int8)mBG & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0LL) > -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, -20.0, 0LL);
    }
    v19 = this->fields.uiScrollView;
    if ( !v19 )
      goto LABEL_54;
    v20 = (UnityEngine_Object_o *)v19->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)mBG & 1) != 0 )
    {
      v21 = this->fields.uiScrollView;
      if ( !v21 )
        goto LABEL_54;
      mBG = (struct UIScrollView_o *)v21->fields.mPanel;
      if ( !mBG )
        goto LABEL_54;
      if ( UIPanel__get_height((UIPanel_o *)mBG, 0LL) <= 298.0 )
      {
        v22 = this->fields.uiScrollView;
        if ( v22 )
        {
          mBG = (struct UIScrollView_o *)v22->fields.mPanel;
          if ( mBG )
          {
            ((void (__fastcall *)(struct UIScrollView_o *, void *, float, float, float, float))mBG->klass[1]._1.klass)(
              mBG,
              mBG->klass[1]._1.fields,
              0.0,
              -23.0,
              670.0,
              300.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -207.0, 0LL);
            v23 = this->fields.uiScrollView;
            if ( v23 )
            {
              v24 = v23->fields.verticalScrollBar;
              if ( v24 )
              {
                mBG = (struct UIScrollView_o *)v24->fields.mBG;
                if ( mBG )
                {
                  UIWidget__set_height((UIWidget_o *)mBG, 298, 0LL);
                  v25 = this->fields.uiScrollView;
                  if ( v25 )
                  {
                    v26 = v25->fields.verticalScrollBar;
                    if ( v26 )
                    {
                      mBG = (struct UIScrollView_o *)v26->fields.mFG;
                      if ( mBG )
                      {
                        UIWidget__set_width((UIWidget_o *)mBG, 26, 0LL);
                        v27 = this->fields.uiScrollView;
                        if ( v27 )
                        {
                          v28 = v27->fields.verticalScrollBar;
                          if ( v28 )
                          {
                            mBG = (struct UIScrollView_o *)v28->fields.mFG;
                            if ( mBG )
                            {
                              v18 = 298;
                              goto LABEL_50;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_54:
        sub_1BCAA3C(mBG, v7);
      }
    }
  }
LABEL_51:
  mBG = this->fields.uiScrollView;
  if ( !mBG )
    goto LABEL_54;
  UIScrollView__ResetPosition(mBG, 0LL);
  mBG = this->fields.uiScrollView;
  if ( !mBG )
    goto LABEL_54;
  UIScrollView__UpdateScrollbars(mBG, 0LL);
}


void __fastcall BattleViewBufflistComponent__setBuffList(
        BattleViewBufflistComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *prefabBuffObject; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x25
  int v17; // w26
  BattleBuffData_ShowBuffData_o *v18; // x22
  float height; // s8
  __int64 v20; // x1
  UnityEngine_Object_o *Object; // x21
  UnityEngine_GameObject_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int klass; // w9
  __int64 v30; // x8
  _QWORD *v31; // x10
  __int64 klass_low; // x11
  __int64 v33; // x8
  UnityEngine_Object_o *nothingLabel; // x21
  const MethodInfo *v35; // x1
  System_String_o *v36; // x22
  System_String_o *v37; // x21
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1942E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___, buffList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2949/*"BATTLE_NOBUFFLIST"*/, v11, v12);
    byte_4B1942E = 1;
  }
  prefabBuffObject = this->fields.prefabBuffObject;
  if ( !prefabBuffObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(prefabBuffObject, 0, 0LL);
  BattleViewBufflistComponent__setClearBuffList(this, v14);
  if ( buffList )
  {
    v15 = *(_QWORD *)&buffList->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = 0LL;
      v17 = 0;
      do
      {
        if ( v16 >= (unsigned int)v15 )
          sub_1BCAA44(prefabBuffObject, buffList);
        v18 = buffList->m_Items[v16];
        height = this->fields.height;
        Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           this->fields.prefabBuffObject,
                                           this->fields.listRoot,
                                           0LL,
                                           0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object, 0LL, 0LL);
        if ( ((unsigned __int8)prefabBuffObject & 1) == 0 )
        {
          if ( !Object )
            goto LABEL_34;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           0LL);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v38.fields.y = -(float)((float)(height * (float)(int)v16) + (float)v17);
          v38.fields.x = 0.0;
          v38.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)prefabBuffObject, v38, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v22 = prefabBuffObject;
          BattleBuffListObjectComponent__SetData((BattleBuffListObjectComponent_o *)prefabBuffObject, v18, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.objList;
          if ( !prefabBuffObject )
            goto LABEL_34;
          klass = (int)v22[4].klass;
          v30 = *(_QWORD *)&prefabBuffObject->fields.m_CachedPtr;
          v31 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(prefabBuffObject[1].klass);
          if ( !v30 )
            goto LABEL_34;
          klass_low = SLODWORD(prefabBuffObject[1].klass);
          v17 += klass;
          if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)prefabBuffObject,
              (Il2CppObject *)Object,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = v30 + 8 * klass_low;
            LODWORD(prefabBuffObject[1].klass) = klass_low + 1;
            *(_QWORD *)(v33 + 32) = Object;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)Object, v23, v24, v25, v26, v27, v28);
          }
        }
        LODWORD(v15) = buffList->max_length;
        ++v16;
      }
      while ( (__int64)v16 < (int)v15 );
    }
    nothingLabel = (UnityEngine_Object_o *)this->fields.nothingLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffList);
    if ( !UnityEngine_Object__op_Inequality(nothingLabel, 0LL, 0LL) )
      goto LABEL_32;
    v36 = (System_String_o *)StringLiteral_2949/*"BATTLE_NOBUFFLIST"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    prefabBuffObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v36, 0LL);
    if ( prefabBuffObject )
    {
      v37 = (System_String_o *)prefabBuffObject;
      if ( !System_String__Equals_62409536((System_String_o *)prefabBuffObject, v36, 0LL) )
      {
        prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
        if ( !prefabBuffObject )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)prefabBuffObject, v37, 0LL);
      }
      prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
      if ( prefabBuffObject )
      {
        prefabBuffObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)prefabBuffObject, 0LL);
        if ( prefabBuffObject )
        {
          UnityEngine_GameObject__SetActive(prefabBuffObject, buffList->max_length == 0, 0LL);
LABEL_32:
          BattleViewBufflistComponent__setBuffListScrollView(this, v35);
          return;
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(prefabBuffObject, buffList);
  }
}


void __fastcall BattleViewBufflistComponent__setBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *uiScrollView; // x0

  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView
    || (UIScrollView__ResetPosition(uiScrollView, 0LL), (uiScrollView = this->fields.uiScrollView) == 0LL) )
  {
    sub_1BCAA3C(uiScrollView, method);
  }
  UIScrollView__UpdateScrollbars(uiScrollView, 0LL);
}


void __fastcall BattleViewBufflistComponent__setClassIcon(
        BattleViewBufflistComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *servantClassIconComponent; // x21
  UnityEngine_Component_o *ClassId; // x0
  __int64 v17; // x1
  int32_t EnemyNameEffect; // w0
  __int64 v19; // x1
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x21
  UnityEngine_Object_o *enemyNameEffectPrefab; // x23
  int32_t v22; // w22
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x23
  __int64 v25; // x1
  System_String_o *NameEffectPath; // x22
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49237568; // x22
  __int64 v29; // x1
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UILabel_o *nameLabel; // x20

  if ( (byte_4B19430 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_18805/*"dialog_title"*/, v13, v14);
    byte_4B19430 = 1;
  }
  servantClassIconComponent = (UnityEngine_Object_o *)this->fields.nameInfo.fields.servantClassIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
  ClassId = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(servantClassIconComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ClassId & 1) != 0 )
  {
    if ( !data )
      goto LABEL_29;
    ClassId = (UnityEngine_Component_o *)BattleServantData__getClassId(data, 0LL);
    if ( !this->fields.nameInfo.fields.servantClassIconComponent )
      goto LABEL_29;
    ServantClassIconComponent__SetImage(
      this->fields.nameInfo.fields.servantClassIconComponent,
      (int32_t)ClassId,
      data->fields._frameType_k__BackingField,
      0LL);
    EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
    p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
    enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
    v22 = EnemyNameEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_70154244(v24, 0LL);
    }
    if ( v22 )
    {
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v23);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v22, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
      AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
      if ( AssetStorage )
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_18805/*"dialog_title"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      else
        Object_object__49237568 = 0LL;
      ClassId = (UnityEngine_Component_o *)this->fields.nameInfo.fields.nameLabel;
      if ( !ClassId )
        goto LABEL_29;
      transform = UnityEngine_Component__get_transform(ClassId, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      v31 = UnityEngine_Object__Instantiate_object__49903816(
              Object_object__49237568,
              transform,
              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v31;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.enemyNameEffectPrefab,
        (int64_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    nameLabel = this->fields.nameInfo.fields.nameLabel;
    ClassId = (UnityEngine_Component_o *)BattleServantData__getServantShortName(data, 0LL);
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)ClassId, 0LL);
      return;
    }
LABEL_29:
    sub_1BCAA3C(ClassId, v17);
  }
}


void __fastcall BattleViewBufflistComponent__setClearBuffList(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v17; // x8
  int32_t size; // w2
  int v19; // w9
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1942F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1942F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)objList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v17 = this->fields.objList;
  if ( !v17 )
LABEL_13:
    sub_1BCAA3C(objList, method);
  size = v17->fields._size;
  v19 = v17->fields._version + 1;
  v17->fields._size = 0;
  v17->fields._version = v19;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v17->fields._items, 0, size, 0LL);
  BattleViewBufflistComponent__setBuffListScrollView(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewBufflistComponent__setHide(
        BattleViewBufflistComponent_o *this,
        bool isClose,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *barObject; // x0

  if ( isClose )
    BattleViewBufflistComponent__setClearBuffList(this, (const MethodInfo *)isClose);
  barObject = this->fields.barObject;
  if ( !barObject
    || (UnityEngine_GameObject__SetActive(barObject, 0, 0LL),
        (barObject = (UnityEngine_GameObject_o *)this->fields.listRoot) == 0LL)
    || (barObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barObject, 0LL)) == 0LL )
  {
    sub_1BCAA3C(barObject, isClose);
  }
  UnityEngine_GameObject__SetActive(barObject, 0, 0LL);
}


void __fastcall BattleViewBufflistComponent__setShow(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0
  const MethodInfo *v4; // x1

  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL),
        BattleViewBufflistComponent__setBuffListScrollView(this, v4),
        (listRoot = (UnityEngine_Component_o *)this->fields.barObject) == 0LL) )
  {
    sub_1BCAA3C(listRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
}