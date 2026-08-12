void BattleViewBufflistComponent___ctor(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59742BB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_59742BB = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.height = 120.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleViewBufflistComponent__StopScrollViewMotion(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UIScrollView_o *uiScrollView; // x0
  UIScrollView_o *v4; // x19

  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView )
    goto LABEL_6;
  UIScrollView__DisableSpring(uiScrollView, 0);
  v4 = this->fields.uiScrollView;
  if ( !byte_5969AE0 )
  {
    uiScrollView = (UIScrollView_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_2213CDC(uiScrollView, method);
  UIScrollView__set_currentMomentum(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleViewBufflistComponent__UpdateBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        bool isHideAttribute,
        const MethodInfo *method)
{
  UnityEngine_Object_o *stateTitleObj; // x20
  int v6; // w8
  struct UIScrollView_o *mBG; // x0
  __int64 v8; // x1
  struct UIScrollView_o *uiScrollView; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v11; // x8
  struct UIScrollView_o *v12; // x8
  struct UIScrollView_o *v13; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v15; // x8
  struct UIProgressBar_o *v16; // x8
  struct UIScrollView_o *v17; // x8
  struct UIProgressBar_o *v18; // x8
  int32_t v19; // w1
  struct UIScrollView_o *v20; // x8
  UnityEngine_Object_o *v21; // x20
  struct UIScrollView_o *v22; // x8
  struct UIScrollView_o *v23; // x8
  struct UIScrollView_o *v24; // x8
  struct UIProgressBar_o *v25; // x8
  struct UIScrollView_o *v26; // x8
  struct UIProgressBar_o *v27; // x8
  struct UIScrollView_o *v28; // x8
  struct UIProgressBar_o *v29; // x8

  if ( (byte_59742BA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742BA = 1;
  }
  stateTitleObj = (UnityEngine_Object_o *)this->fields.stateTitleObj;
  v6 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( isHideAttribute )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isHideAttribute);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0, 0);
    if ( ((unsigned __int8)mBG & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0) <= -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, 0.0, 0);
    }
    uiScrollView = this->fields.uiScrollView;
    if ( !uiScrollView )
      goto LABEL_56;
    mPanel = (UnityEngine_Object_o *)uiScrollView->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)mBG & 1) != 0 )
    {
      v11 = this->fields.uiScrollView;
      if ( !v11 )
        goto LABEL_56;
      mBG = (struct UIScrollView_o *)v11->fields.mPanel;
      if ( !mBG )
        goto LABEL_56;
      if ( UIPanel__get_height((UIPanel_o *)mBG, 0) <= 300.0 )
      {
        v12 = this->fields.uiScrollView;
        if ( v12 )
        {
          mBG = (struct UIScrollView_o *)v12->fields.mPanel;
          if ( mBG )
          {
            ((void (__fastcall *)(struct UIScrollView_o *, Il2CppClass *, double, float, float, float))mBG->klass[1]._1.interopData)(
              mBG,
              mBG->klass[1]._1.klass,
              0.0,
              -11.0,
              670.0,
              298.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -196.0, 0);
            v13 = this->fields.uiScrollView;
            if ( v13 )
            {
              verticalScrollBar = v13->fields.verticalScrollBar;
              if ( verticalScrollBar )
              {
                mBG = (struct UIScrollView_o *)verticalScrollBar->fields.mBG;
                if ( mBG )
                {
                  UIWidget__set_height((UIWidget_o *)mBG, 312, 0);
                  v15 = this->fields.uiScrollView;
                  if ( v15 )
                  {
                    v16 = v15->fields.verticalScrollBar;
                    if ( v16 )
                    {
                      mBG = (struct UIScrollView_o *)v16->fields.mFG;
                      if ( mBG )
                      {
                        UIWidget__set_width((UIWidget_o *)mBG, 26, 0);
                        v17 = this->fields.uiScrollView;
                        if ( v17 )
                        {
                          v18 = v17->fields.verticalScrollBar;
                          if ( v18 )
                          {
                            mBG = (struct UIScrollView_o *)v18->fields.mFG;
                            if ( mBG )
                            {
                              v19 = 312;
LABEL_52:
                              UIWidget__set_height((UIWidget_o *)mBG, v19, 0);
                              goto LABEL_53;
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
        goto LABEL_56;
      }
    }
  }
  else
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isHideAttribute);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0, 0);
    if ( ((unsigned __int8)mBG & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0) > -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, -20.0, 0);
    }
    v20 = this->fields.uiScrollView;
    if ( !v20 )
      goto LABEL_56;
    v21 = (UnityEngine_Object_o *)v20->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    mBG = (struct UIScrollView_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
    if ( ((unsigned __int8)mBG & 1) != 0 )
    {
      v22 = this->fields.uiScrollView;
      if ( !v22 )
        goto LABEL_56;
      mBG = (struct UIScrollView_o *)v22->fields.mPanel;
      if ( !mBG )
        goto LABEL_56;
      if ( UIPanel__get_height((UIPanel_o *)mBG, 0) <= 298.0 )
      {
        v23 = this->fields.uiScrollView;
        if ( v23 )
        {
          mBG = (struct UIScrollView_o *)v23->fields.mPanel;
          if ( mBG )
          {
            ((void (__fastcall *)(struct UIScrollView_o *, Il2CppClass *, double, float, float, float))mBG->klass[1]._1.interopData)(
              mBG,
              mBG->klass[1]._1.klass,
              0.0,
              -23.0,
              670.0,
              300.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -207.0, 0);
            v24 = this->fields.uiScrollView;
            if ( v24 )
            {
              v25 = v24->fields.verticalScrollBar;
              if ( v25 )
              {
                mBG = (struct UIScrollView_o *)v25->fields.mBG;
                if ( mBG )
                {
                  UIWidget__set_height((UIWidget_o *)mBG, 298, 0);
                  v26 = this->fields.uiScrollView;
                  if ( v26 )
                  {
                    v27 = v26->fields.verticalScrollBar;
                    if ( v27 )
                    {
                      mBG = (struct UIScrollView_o *)v27->fields.mFG;
                      if ( mBG )
                      {
                        UIWidget__set_width((UIWidget_o *)mBG, 26, 0);
                        v28 = this->fields.uiScrollView;
                        if ( v28 )
                        {
                          v29 = v28->fields.verticalScrollBar;
                          if ( v29 )
                          {
                            mBG = (struct UIScrollView_o *)v29->fields.mFG;
                            if ( mBG )
                            {
                              v19 = 298;
                              goto LABEL_52;
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
LABEL_56:
        sub_2213CDC(mBG, v8);
      }
    }
  }
LABEL_53:
  mBG = this->fields.uiScrollView;
  if ( !mBG )
    goto LABEL_56;
  UIScrollView__ResetPosition(mBG, 0);
  mBG = this->fields.uiScrollView;
  if ( !mBG )
    goto LABEL_56;
  UIScrollView__UpdateScrollbars(mBG, 0);
}


void BattleViewBufflistComponent__setBuffList(
        BattleViewBufflistComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *prefabBuffObject; // x0
  const MethodInfo *v6; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x25
  int v9; // w26
  BattleBuffData_ShowBuffData_o *v10; // x22
  float height; // s8
  __int64 v12; // x1
  UnityEngine_Object_o *Object; // x21
  UnityEngine_GameObject_o *v14; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  intptr_t m_CachedPtr; // x8
  int klass; // w10
  _QWORD *v23; // x9
  __int64 klass_low; // x11
  intptr_t v25; // x8
  UnityEngine_Object_o *nothingLabel; // x21
  const MethodInfo *v27; // x1
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59742B7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2926/*"BATTLE_NOBUFFLIST"*/);
    byte_59742B7 = 1;
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
      v8 = 0;
      v9 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_2213CE4(prefabBuffObject);
        v10 = buffList->m_Items[v8];
        height = this->fields.height;
        Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           this->fields.prefabBuffObject,
                                           this->fields.listRoot,
                                           0,
                                           0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
          v30.fields.z = 0.0;
          v30.fields.y = -(float)((float)(height * (float)(int)v8) + (float)v9);
          v30.fields.x = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)prefabBuffObject, v30, 0);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v14 = prefabBuffObject;
          BattleBuffListObjectComponent__SetData((BattleBuffListObjectComponent_o *)prefabBuffObject, v10, 0);
          prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.objList;
          if ( !prefabBuffObject )
            goto LABEL_34;
          m_CachedPtr = prefabBuffObject->fields.m_CachedPtr;
          klass = (int)v14[4].klass;
          v23 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(prefabBuffObject[1].klass);
          if ( !m_CachedPtr )
            goto LABEL_34;
          klass_low = SLODWORD(prefabBuffObject[1].klass);
          v9 += klass;
          if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)prefabBuffObject,
              (Il2CppObject *)Object,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = m_CachedPtr + 8 * klass_low;
            LODWORD(prefabBuffObject[1].klass) = klass_low + 1;
            *(_QWORD *)(v25 + 32) = Object;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)Object, v15, v16, v17, v18, v19, v20);
          }
        }
        LODWORD(max_length) = buffList->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
    }
    nothingLabel = (UnityEngine_Object_o *)this->fields.nothingLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffList);
    if ( !UnityEngine_Object__op_Inequality(nothingLabel, 0, 0) )
      goto LABEL_32;
    v28 = (System_String_o *)StringLiteral_2926/*"BATTLE_NOBUFFLIST"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    prefabBuffObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v28, 0);
    if ( prefabBuffObject )
    {
      v29 = (System_String_o *)prefabBuffObject;
      if ( !System_String__Equals_75686512((System_String_o *)prefabBuffObject, v28, 0) )
      {
        prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
        if ( !prefabBuffObject )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)prefabBuffObject, v29, 0);
      }
      prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
      if ( prefabBuffObject )
      {
        prefabBuffObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)prefabBuffObject, 0);
        if ( prefabBuffObject )
        {
          UnityEngine_GameObject__SetActive(prefabBuffObject, LODWORD(buffList->max_length) == 0, 0);
LABEL_32:
          BattleViewBufflistComponent__setBuffListScrollView(this, v27);
          return;
        }
      }
    }
LABEL_34:
    sub_2213CDC(prefabBuffObject, buffList);
  }
}


void BattleViewBufflistComponent__setBuffListScrollView(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UIScrollView_o *uiScrollView; // x0

  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView || (UIScrollView__ResetPosition(uiScrollView, 0), (uiScrollView = this->fields.uiScrollView) == 0) )
    sub_2213CDC(uiScrollView, method);
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
  __int64 v8; // x1
  int32_t EnemyNameEffect; // w22
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x21
  UnityEngine_Object_o *enemyNameEffectPrefab; // x23
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x23
  __int64 v14; // x1
  System_String_o *NameEffectPath; // x22
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__58532980; // x22
  __int64 v18; // x1
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UILabel_o *nameLabel; // x20

  if ( (byte_59742B9 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&StringLiteral_19456/*"dialog_title"*/);
    byte_59742B9 = 1;
  }
  servantClassIconComponent = (UnityEngine_Object_o *)this->fields.nameInfo.fields.servantClassIconComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0, 0) )
    {
      v13 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_83459800(v13, 0);
    }
    if ( EnemyNameEffect )
    {
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v12);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(EnemyNameEffect, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
      AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0);
      if ( AssetStorage )
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_19456/*"dialog_title"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      else
        Object_object__58532980 = 0;
      ClassId = (ServantClassIconComponent_o *)this->fields.nameInfo.fields.nameLabel;
      if ( !ClassId )
        goto LABEL_30;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ClassId, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      v20 = UnityEngine_Object__Instantiate_object__59717116(
              Object_object__58532980,
              transform,
              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v20;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.enemyNameEffectPrefab,
        (int32_t)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    nameLabel = this->fields.nameInfo.fields.nameLabel;
    ClassId = (ServantClassIconComponent_o *)BattleServantData__getServantShortName(data, 0);
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)ClassId, 0);
      return;
    }
LABEL_30:
    sub_2213CDC(ClassId, v7);
  }
}


void BattleViewBufflistComponent__setClearBuffList(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59742B8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742B8 = 1;
  }
  objList = this->fields.objList;
  memset(&v9, 0, sizeof(v9));
  if ( !objList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)objList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.objList;
  if ( !v6 )
LABEL_13:
    sub_2213CDC(objList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  BattleViewBufflistComponent__setBuffListScrollView(this, method);
}


// local variable allocation has failed, the output may be wrong!
void BattleViewBufflistComponent__setHide(BattleViewBufflistComponent_o *this, bool isClose, const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *barObject; // x0

  if ( isClose )
    BattleViewBufflistComponent__setClearBuffList(this, (const MethodInfo *)isClose);
  BattleViewBufflistComponent__StopScrollViewMotion(this, (const MethodInfo *)isClose);
  barObject = this->fields.barObject;
  if ( !barObject
    || (UnityEngine_GameObject__SetActive(barObject, 0, 0),
        (barObject = (UnityEngine_GameObject_o *)this->fields.listRoot) == 0)
    || (barObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barObject, 0)) == 0 )
  {
    sub_2213CDC(barObject, v4);
  }
  UnityEngine_GameObject__SetActive(barObject, 0, 0);
}


void BattleViewBufflistComponent__setShow(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *listRoot; // x0
  const MethodInfo *v5; // x1

  BattleViewBufflistComponent__StopScrollViewMotion(this, method);
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0),
        BattleViewBufflistComponent__setBuffListScrollView(this, v5),
        (listRoot = (UnityEngine_Component_o *)this->fields.barObject) == 0) )
  {
    sub_2213CDC(listRoot, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0);
}