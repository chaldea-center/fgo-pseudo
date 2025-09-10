void BattleViewBufflistComponent___ctor(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A9E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C2A9E2 = 1;
  }
  this->fields.height = 120.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleViewBufflistComponent__UpdateBuffListScrollView(
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

  if ( (byte_4C2A9E1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9E1 = 1;
  }
  stateTitleObj = (UnityEngine_Object_o *)this->fields.stateTitleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0, 0);
  if ( isHideAttribute )
  {
    if ( ((unsigned __int8)mBG & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0) <= -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, 0.0, 0);
    }
    uiScrollView = this->fields.uiScrollView;
    if ( !uiScrollView )
      goto LABEL_54;
    mPanel = (UnityEngine_Object_o *)uiScrollView->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)mBG & 1) != 0 )
    {
      v10 = this->fields.uiScrollView;
      if ( !v10 )
        goto LABEL_54;
      mBG = (struct UIScrollView_o *)v10->fields.mPanel;
      if ( !mBG )
        goto LABEL_54;
      if ( UIPanel__get_height((UIPanel_o *)mBG, 0) <= 300.0 )
      {
        v11 = this->fields.uiScrollView;
        if ( v11 )
        {
          mBG = (struct UIScrollView_o *)v11->fields.mPanel;
          if ( mBG )
          {
            ((void (__fastcall *)(struct UIScrollView_o *, Il2CppClass *, float, float, float, float))mBG->klass[1]._1.interopData)(
              mBG,
              mBG->klass[1]._1.klass,
              0.0,
              -11.0,
              670.0,
              298.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -196.0, 0);
            v12 = this->fields.uiScrollView;
            if ( v12 )
            {
              verticalScrollBar = v12->fields.verticalScrollBar;
              if ( verticalScrollBar )
              {
                mBG = (struct UIScrollView_o *)verticalScrollBar->fields.mBG;
                if ( mBG )
                {
                  UIWidget__set_height((UIWidget_o *)mBG, 312, 0);
                  v14 = this->fields.uiScrollView;
                  if ( v14 )
                  {
                    v15 = v14->fields.verticalScrollBar;
                    if ( v15 )
                    {
                      mBG = (struct UIScrollView_o *)v15->fields.mFG;
                      if ( mBG )
                      {
                        UIWidget__set_width((UIWidget_o *)mBG, 26, 0);
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
                              UIWidget__set_height((UIWidget_o *)mBG, v18, 0);
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
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0) > -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, -20.0, 0);
    }
    v19 = this->fields.uiScrollView;
    if ( !v19 )
      goto LABEL_54;
    v20 = (UnityEngine_Object_o *)v19->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
    if ( ((unsigned __int8)mBG & 1) != 0 )
    {
      v21 = this->fields.uiScrollView;
      if ( !v21 )
        goto LABEL_54;
      mBG = (struct UIScrollView_o *)v21->fields.mPanel;
      if ( !mBG )
        goto LABEL_54;
      if ( UIPanel__get_height((UIPanel_o *)mBG, 0) <= 298.0 )
      {
        v22 = this->fields.uiScrollView;
        if ( v22 )
        {
          mBG = (struct UIScrollView_o *)v22->fields.mPanel;
          if ( mBG )
          {
            ((void (__fastcall *)(struct UIScrollView_o *, Il2CppClass *, float, float, float, float))mBG->klass[1]._1.interopData)(
              mBG,
              mBG->klass[1]._1.klass,
              0.0,
              -23.0,
              670.0,
              300.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -207.0, 0);
            v23 = this->fields.uiScrollView;
            if ( v23 )
            {
              v24 = v23->fields.verticalScrollBar;
              if ( v24 )
              {
                mBG = (struct UIScrollView_o *)v24->fields.mBG;
                if ( mBG )
                {
                  UIWidget__set_height((UIWidget_o *)mBG, 298, 0);
                  v25 = this->fields.uiScrollView;
                  if ( v25 )
                  {
                    v26 = v25->fields.verticalScrollBar;
                    if ( v26 )
                    {
                      mBG = (struct UIScrollView_o *)v26->fields.mFG;
                      if ( mBG )
                      {
                        UIWidget__set_width((UIWidget_o *)mBG, 26, 0);
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
        sub_1C2D6EC(mBG, v7);
      }
    }
  }
LABEL_51:
  mBG = this->fields.uiScrollView;
  if ( !mBG )
    goto LABEL_54;
  UIScrollView__ResetPosition(mBG, 0);
  mBG = this->fields.uiScrollView;
  if ( !mBG )
    goto LABEL_54;
  UIScrollView__UpdateScrollbars(mBG, 0);
}


void BattleViewBufflistComponent__setBuffList(
        BattleViewBufflistComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *prefabBuffObject; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x25
  int v10; // w26
  BattleBuffData_ShowBuffData_o *v11; // x22
  float height; // s8
  UnityEngine_Object_o *Object; // x21
  UnityEngine_GameObject_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int klass; // w9
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x10
  __int64 klass_low; // x11
  intptr_t v21; // x8
  UnityEngine_Object_o *nothingLabel; // x21
  const MethodInfo *v23; // x1
  System_String_o *v24; // x22
  System_String_o *v25; // x21
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A9DE & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_2808/*"BATTLE_NOBUFFLIST"*/);
    byte_4C2A9DE = 1;
  }
  prefabBuffObject = this->fields.prefabBuffObject;
  if ( !prefabBuffObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(prefabBuffObject, 0, 0);
  BattleViewBufflistComponent__setClearBuffList(this, v6);
  if ( buffList )
  {
    max_length = buffList->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C2D6F4(prefabBuffObject, buffList, v7);
        v11 = buffList->m_Items[v9];
        height = this->fields.height;
        Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           this->fields.prefabBuffObject,
                                           this->fields.listRoot,
                                           0,
                                           0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object, 0, 0);
        if ( ((unsigned __int8)prefabBuffObject & 1) == 0 )
        {
          if ( !Object )
            goto LABEL_34;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           0);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v26.fields.y = -(float)((float)(height * (float)(int)v9) + (float)v10);
          v26.fields.x = 0.0;
          v26.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)prefabBuffObject, v26, 0);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v14 = prefabBuffObject;
          BattleBuffListObjectComponent__SetData((BattleBuffListObjectComponent_o *)prefabBuffObject, v11, 0);
          prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.objList;
          if ( !prefabBuffObject )
            goto LABEL_34;
          klass = (int)v14[4].klass;
          m_CachedPtr = prefabBuffObject->fields.m_CachedPtr;
          v19 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(prefabBuffObject[1].klass);
          if ( !m_CachedPtr )
            goto LABEL_34;
          klass_low = SLODWORD(prefabBuffObject[1].klass);
          v10 += klass;
          if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)prefabBuffObject,
              (Il2CppObject *)Object,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = m_CachedPtr + 8 * klass_low;
            LODWORD(prefabBuffObject[1].klass) = klass_low + 1;
            *(_QWORD *)(v21 + 32) = Object;
            sub_1C2D434((CGThumbnailListItem_o *)(v21 + 32), (int32_t)Object, v15, v16);
          }
        }
        LODWORD(max_length) = buffList->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
    nothingLabel = (UnityEngine_Object_o *)this->fields.nothingLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(nothingLabel, 0, 0) )
      goto LABEL_32;
    v24 = (System_String_o *)StringLiteral_2808/*"BATTLE_NOBUFFLIST"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    prefabBuffObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v24, 0);
    if ( prefabBuffObject )
    {
      v25 = (System_String_o *)prefabBuffObject;
      if ( !System_String__Equals_63493168((System_String_o *)prefabBuffObject, v24, 0) )
      {
        prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
        if ( !prefabBuffObject )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)prefabBuffObject, v25, 0);
      }
      prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
      if ( prefabBuffObject )
      {
        prefabBuffObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)prefabBuffObject, 0);
        if ( prefabBuffObject )
        {
          UnityEngine_GameObject__SetActive(prefabBuffObject, LODWORD(buffList->max_length) == 0, 0);
LABEL_32:
          BattleViewBufflistComponent__setBuffListScrollView(this, v23);
          return;
        }
      }
    }
LABEL_34:
    sub_1C2D6EC(prefabBuffObject, buffList);
  }
}


void BattleViewBufflistComponent__setBuffListScrollView(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UIScrollView_o *uiScrollView; // x0

  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView || (UIScrollView__ResetPosition(uiScrollView, 0), (uiScrollView = this->fields.uiScrollView) == 0) )
    sub_1C2D6EC(uiScrollView, method);
  UIScrollView__UpdateScrollbars(uiScrollView, 0);
}


void BattleViewBufflistComponent__setClassIcon(
        BattleViewBufflistComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *servantClassIconComponent; // x21
  ServantClassIconComponent_o *ClassId; // x0
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x21
  UnityEngine_Object_o *enemyNameEffectPrefab; // x23
  int32_t v11; // w22
  UnityEngine_Object_o *v12; // x23
  System_String_o *NameEffectPath; // x22
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51051712; // x22
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UILabel_o *nameLabel; // x20

  if ( (byte_4C2A9E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18606/*"dialog_title"*/);
    byte_4C2A9E0 = 1;
  }
  servantClassIconComponent = (UnityEngine_Object_o *)this->fields.nameInfo.fields.servantClassIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ClassId = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(servantClassIconComponent, 0, 0);
  if ( ((unsigned __int8)ClassId & 1) != 0 )
  {
    if ( !data )
      goto LABEL_30;
    ClassId = (ServantClassIconComponent_o *)BattleServantData__getClassId(data, 0, 0);
    if ( !this->fields.nameInfo.fields.servantClassIconComponent )
      goto LABEL_30;
    ServantClassIconComponent__SetImage(
      this->fields.nameInfo.fields.servantClassIconComponent,
      (int32_t)ClassId,
      data->fields._frameType_k__BackingField,
      0,
      data->fields._IsGrand_k__BackingField,
      0,
      0);
    ClassId = this->fields.nameInfo.fields.servantClassIconComponent;
    if ( !ClassId )
      goto LABEL_30;
    ServantClassIconComponent__ReSizeClassIcon(ClassId, data->fields.isEnemy, 0);
    EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0);
    p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
    enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
    v11 = EnemyNameEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0, 0) )
    {
      v12 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v12, 0);
    }
    if ( v11 )
    {
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v11, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0);
      if ( AssetStorage )
        Object_object__51051712 = AssetData__GetObject_object__51051712(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_18606/*"dialog_title"*/,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      else
        Object_object__51051712 = 0;
      ClassId = (ServantClassIconComponent_o *)this->fields.nameInfo.fields.nameLabel;
      if ( !ClassId )
        goto LABEL_30;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ClassId, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__Instantiate_object__51752420(
              Object_object__51051712,
              transform,
              (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v17;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v17, v18, v19);
    }
    nameLabel = this->fields.nameInfo.fields.nameLabel;
    ClassId = (ServantClassIconComponent_o *)BattleServantData__getServantShortName(data, 0);
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)ClassId, 0);
      return;
    }
LABEL_30:
    sub_1C2D6EC(ClassId, v7);
  }
}


void BattleViewBufflistComponent__setClearBuffList(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A9DF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9DF = 1;
  }
  memset(&v8, 0, sizeof(v8));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)objList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = this->fields.objList;
  if ( !v5 )
LABEL_13:
    sub_1C2D6EC(objList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  BattleViewBufflistComponent__setBuffListScrollView(this, method);
}


// local variable allocation has failed, the output may be wrong!
void BattleViewBufflistComponent__setHide(BattleViewBufflistComponent_o *this, bool isClose, const MethodInfo *method)
{
  UnityEngine_GameObject_o *barObject; // x0

  if ( isClose )
    BattleViewBufflistComponent__setClearBuffList(this, (const MethodInfo *)isClose);
  barObject = this->fields.barObject;
  if ( !barObject
    || (UnityEngine_GameObject__SetActive(barObject, 0, 0),
        (barObject = (UnityEngine_GameObject_o *)this->fields.listRoot) == 0)
    || (barObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barObject, 0)) == 0 )
  {
    sub_1C2D6EC(barObject, isClose);
  }
  UnityEngine_GameObject__SetActive(barObject, 0, 0);
}


void BattleViewBufflistComponent__setShow(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0
  const MethodInfo *v4; // x1

  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0),
        BattleViewBufflistComponent__setBuffListScrollView(this, v4),
        (listRoot = (UnityEngine_Component_o *)this->fields.barObject) == 0) )
  {
    sub_1C2D6EC(listRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0);
}