void SoundPlayerMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596BD2F & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerMenu_TypeInfo);
    sub_2213A60(&StringLiteral_13482/*"SoundPlayerNewKey"*/);
    byte_596BD2F = 1;
  }
  v7 = StringLiteral_13482/*"SoundPlayerNewKey"*/;
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_13482/*"SoundPlayerNewKey"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)SoundPlayerMenu_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2

  if ( (byte_596BD2E & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD2E = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  this->fields.playSoundName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playSoundName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.isNewList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v17, v18);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerListViewManager_CallbackFunc_c *v3; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596BD20 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_596BD20 = 1;
  }
  v3 = SoundPlayerListViewManager_CallbackFunc_TypeInfo;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  this->fields.state = 2;
  v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v6);
  if ( !soundPlayerListViewManager )
    sub_2213CDC(v7, v8);
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SoundPlayerListViewManager__SetMode_40646528(soundPlayerListViewManager, 2, v15);
  ActionExtensions__Call(this->fields.openedAct, 0);
}


void SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_596BD1B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD1B = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.retTrialListening, 0, v2, v3, v4, v5, v6, v7);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.backupBgmName, v9, v10, v11, v12, v13, v14, v15);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0)) == 0 )
  {
    sub_2213CDC(soundPlayerListViewManager, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void SoundPlayerMenu__InitPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1

  Item = SoundPlayerMenu__getItem(this, this->fields.playSoundIdx, v2);
  if ( Item )
  {
    Item->fields._isPlaySound_k__BackingField = 0;
    SoundPlayerListViewItem__applyUi(Item, v5);
  }
  SoundPlayerMenu__resetPlaySoundData(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerMenu__OnSelectSound(SoundPlayerMenu_o *this, int32_t kind, int32_t index, const MethodInfo *method)
{
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  SoundPlayerListViewItem_o *v10; // x20
  int32_t playSoundIdx; // w22
  int *isNewList; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  struct BgmEntity_o *v31; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v38; // x21
  const MethodInfo *v39; // x3
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x2

  if ( (byte_596BD21 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_596BD21 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v10 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v8);
      SoundPlayerMenu__createOpenDlg(this, v10, v16);
      v17 = Method_SoundPlayerMenu_OnSelectSound__;
      if ( (*((_BYTE *)Method_SoundPlayerMenu_OnSelectSound__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_2213A78(Method_SoundPlayerMenu_OnSelectSound__);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = (int *)SoundPlayerMenu__getItem(this, playSoundIdx, v9);
      if ( isNewList )
      {
        *((_BYTE *)isNewList + 129) = 0;
        SoundPlayerListViewItem__applyUi((SoundPlayerListViewItem_o *)isNewList, v13);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13, v14);
        SoundManager__stopBgm(0);
        SoundPlayerMenu__resetPlaySoundData(this, v15);
      }
      else
      {
        bgmEntity = v10->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v10->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v10, v13);
        SoundPlayerListViewItem__applyUi(v10, v21);
        isNewList = (int *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v28 = *((_QWORD *)isNewList + 2);
          v29 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v28 )
            goto LABEL_36;
          v30 = isNewList[6];
          if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v30 + 1;
            *(_DWORD *)(v28 + 4 * v30 + 32) = id;
          }
        }
        if ( (byte_596BCF3 & 1) == 0 )
        {
          sub_2213A60(&StringLiteral_1/*""*/);
          byte_596BCF3 = 1;
        }
        v31 = v10->fields.bgmEntity;
        if ( v31 )
          p_fileName = &v31->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v33 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.playSoundName,
          (int32_t)v33,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        playSoundName = this->fields.playSoundName;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v34, v35);
        SoundManager__playBgm(playSoundName, 0);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v38 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_2213CCC(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v39);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v38;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&soundPlayerListViewManager->fields.callbackFunc,
          (int32_t)v38,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        SoundPlayerListViewManager__SetMode_40646528(soundPlayerListViewManager, 2, v46);
        return;
      }
LABEL_36:
      sub_2213CDC(isNewList, v13);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_2213CDC(0, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0);
}


void SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_596BD30 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_596BD30 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_2213CCC(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v6),
        !soundPlayerListViewManager) )
  {
    sub_2213CDC(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SoundPlayerListViewManager__SetMode_40646528(soundPlayerListViewManager, 2, v13);
}


void SoundPlayerMenu__add_callbackFunc(SoundPlayerMenu_o *this, System_Action_o *value, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SoundPlayerMenu_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BD19 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD19 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SoundPlayerMenu_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  SoundPlayerMenu__remove_callbackFunc(v13, v14, v15);
}


void SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundPlayerMenu_c *v4; // x0
  System_String_o *String; // x20
  System_String_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  int v9; // w9
  System_String_array *v10; // x20
  unsigned __int64 v11; // x21
  __int64 max_length; // x23
  struct System_Collections_Generic_List_int__o *v13; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11

  if ( (byte_596BD1D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&SoundPlayerMenu_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD1D = 1;
  }
  v4 = SoundPlayerMenu_TypeInfo;
  if ( !*(&SoundPlayerMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo, method, v2);
    v4 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v4->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    isNewList = this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_19;
    v9 = isNewList->fields._version + 1;
    isNewList->fields._size = 0;
    isNewList->fields._version = v9;
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x2Cu, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v10 = IsNullOrEmpty;
    if ( (int)IsNullOrEmpty->max_length >= 1 )
    {
      v11 = 0;
      max_length = (unsigned int)IsNullOrEmpty->max_length;
      while ( 1 )
      {
        if ( v11 >= LODWORD(v10->max_length) )
          sub_2213CE4(IsNullOrEmpty);
        IsNullOrEmpty = (System_String_array *)System_Int32__Parse(v10->m_Items[v11], 0);
        v13 = this->fields.isNewList;
        if ( !v13 )
          break;
        items = v13->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size] = (int)IsNullOrEmpty;
        }
        if ( max_length == ++v11 )
          return;
      }
LABEL_19:
      sub_2213CDC(IsNullOrEmpty, v7);
    }
  }
}


void SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  intptr_t m_CachedPtr; // x8
  __int64 naturalAligment; // x11
  intptr_t v11; // x20

  if ( (byte_596BD23 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundPlayerListViewObject_TypeInfo);
    byte_596BD23 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0, 0) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v5);
    if ( !Item )
      goto LABEL_22;
    m_CachedPtr = Item[4].fields.m_CachedPtr;
    if ( m_CachedPtr
      && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)m_CachedPtr + 304LL) >= (unsigned int)naturalAligment) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)m_CachedPtr + 200LL) + 8 * naturalAligment - 8) == SoundPlayerListViewObject_TypeInfo )
        v11 = Item[4].fields.m_CachedPtr;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0);
        if ( v11 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, *(UnityEngine_Component_o **)(v11 + 136), 0);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 Item,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_2213CDC(Item, v7);
    }
  }
}


System_Collections_IEnumerator_o *SoundPlayerMenu__busyWaitStopBgm(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596BD2C & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
    byte_596BD2C = 1;
  }
  v3 = sub_2213CCC(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundPlayerMenu__createOpenDlg(SoundPlayerMenu_o *this, SoundPlayerListViewItem_o *item, const MethodInfo *method)
{
  SoundPlayerListViewItem_o *v3; // x20
  SoundPlayerMenu_o *v4; // x24
  struct BgmEntity_o *bgmEntity; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  struct BgmEntity_o *v11; // x20
  System_String_o *v12; // x21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v14; // x23
  UserItemMaster_o *v15; // x25
  SoundPlayerMenu_o *v16; // x28
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x2
  Il2CppClass *klass; // x8
  const char *namespaze; // x8
  int v22; // w19
  __int64 v23; // x20
  Il2CppClass *v24; // x8
  unsigned __int64 v25; // x29
  SoundPlayerMenu_o *v26; // x27
  Il2CppClass *v27; // x8
  int closeTransform; // w8
  Il2CppClass *v29; // x8
  System_String_o *v30; // x24
  int v31; // w26
  _BOOL4 v32; // w19
  Il2CppClass *v33; // x8
  Il2CppObject *v34; // x28
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *CountText; // x29
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  char v42; // w29
  System_String_o *v43; // x23
  struct UIPanel_array *v44; // x22
  System_String_o *v45; // x25
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  SoundPlayerMenu_o *v52; // x26
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_String_o *v77; // x21
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  System_String_o *v80; // x24
  Il2CppObject *Instance; // x25
  TripleButtonDlgComponent_CallbackFunc_o *v82; // x26
  SoundPlayerMenu_o *v83; // [xsp+68h] [xbp-98h]
  System_String_o *title; // [xsp+70h] [xbp-90h]
  Il2CppObject *object; // [xsp+78h] [xbp-88h]
  __int64 v86; // [xsp+80h] [xbp-80h]
  System_String_o *str0; // [xsp+88h] [xbp-78h]
  UserItemEntity_o *v88; // [xsp+90h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_596BD2D & 1) == 0 )
  {
    sub_2213A60(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_12779/*"SOUNDPLAYER_OPEN_CHECK"*/);
    sub_2213A60(&StringLiteral_12777/*"SOUNDPLAYER_ITEM_COST_WARNING"*/);
    sub_2213A60(&StringLiteral_12775/*"SOUNDPLAYER_DIALOG_OK"*/);
    sub_2213A60(&StringLiteral_12778/*"SOUNDPLAYER_ITEM_DISP"*/);
    sub_2213A60(&StringLiteral_12773/*"SOUNDPLAYER_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_86/*"\r"*/);
    sub_2213A60(&StringLiteral_12776/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/);
    sub_2213A60(&StringLiteral_12784/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/);
    this = (SoundPlayerMenu_o *)sub_2213A60(&StringLiteral_12774/*"SOUNDPLAYER_DIALOG_MIDDLE"*/);
    byte_596BD2D = 1;
  }
  v88 = 0;
  entity = 0;
  if ( !v3 )
    goto LABEL_73;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_73;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_73;
  this = (SoundPlayerMenu_o *)System_String__Replace_75703400(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_86/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0);
  if ( !this )
    goto LABEL_73;
  v8 = (Il2CppObject *)System_String__Replace_75703400(
                         (System_String_o *)this,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12784/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0);
  v10 = System_String__Format(v9, v8, 0);
  v11 = v3->fields.bgmEntity;
  v12 = v10;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v11 )
    goto LABEL_73;
  title = v12;
  if ( !MasterData_object )
    goto LABEL_73;
  v15 = (UserItemMaster_o *)this;
  v16 = (SoundPlayerMenu_o *)StringLiteral_1/*""*/;
  object = (Il2CppObject *)v4;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         v11->fields.shopId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12776/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0);
    if ( !entity )
      goto LABEL_73;
    klass = entity[2].klass;
    if ( !klass )
      goto LABEL_73;
    namespaze = klass->_1.namespaze;
    v83 = this;
    if ( (int)namespaze >= 1 )
    {
      v22 = 0;
      v23 = 8;
      v86 = -(__int64)(unsigned int)namespaze;
      str0 = (System_String_o *)v16;
      while ( entity )
      {
        v24 = entity[2].klass;
        if ( !v24 )
          break;
        v25 = v23 - 8;
        if ( v23 - 8 >= (unsigned __int64)LODWORD(v24->_1.namespaze) )
          goto LABEL_74;
        if ( !v14 )
          break;
        this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(
                                      (ItemMaster_o *)v14,
                                      *((_DWORD *)&v24->_1.image + v23),
                                      -1,
                                      0);
        if ( this )
        {
          v26 = this;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v19);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v19);
            this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          }
          if ( !entity )
            break;
          v27 = entity[2].klass;
          if ( !v27 )
            break;
          if ( v25 >= LODWORD(v27->_1.namespaze) )
            goto LABEL_74;
          if ( !v15 )
            break;
          this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                        v15,
                                        &v88,
                                        *(_QWORD *)&this->fields.playSoundName[2].fields,
                                        *((_DWORD *)&v27->_1.image + v23),
                                        0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v88 )
              break;
            item = (SoundPlayerListViewItem_o *)(unsigned int)v88->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0);
            closeTransform = (int)v26->fields.closeTransform;
            if ( closeTransform == 5 )
            {
              if ( !this )
                break;
              item = (SoundPlayerListViewItem_o *)LODWORD(this->fields.retTrialListening);
            }
            else if ( closeTransform == 22 )
            {
              if ( !this )
                break;
              item = (SoundPlayerListViewItem_o *)HIDWORD(this->fields.retTrialListening);
            }
            else
            {
              item = 0;
            }
          }
          if ( !entity )
            break;
          v29 = entity[5].klass;
          if ( !v29 )
            break;
          if ( v25 >= LODWORD(v29->_1.namespaze) )
            goto LABEL_74;
          v30 = (System_String_o *)v16;
          v31 = v22;
          v32 = (int)item < *((_DWORD *)&v29->_1.image + v23);
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v26->fields.closeTransform, (int32_t)item, 0);
          if ( !entity )
            break;
          v33 = entity[5].klass;
          if ( !v33 )
            break;
          if ( v25 >= LODWORD(v33->_1.namespaze) )
            goto LABEL_74;
          v34 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v26->fields.closeTransform,
                                        *((_DWORD *)&v33->_1.image + v23),
                                        0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v22 = v32 | v31;
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12778/*"SOUNDPLAYER_ITEM_DISP"*/, 0);
          v39 = System_String__Format_75697880(v38, (Il2CppObject *)v26->fields.m_CancellationTokenSource, v34, 0);
          str0 = System_String__Concat_75651716(str0, v39, 0);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12778/*"SOUNDPLAYER_ITEM_DISP"*/, 0);
          v41 = System_String__Format_75697880(v40, (Il2CppObject *)v26->fields.m_CancellationTokenSource, CountText, 0);
          this = (SoundPlayerMenu_o *)System_String__Concat_75651716(v30, v41, 0);
          v16 = this;
        }
        ++v23;
        if ( v86 + v23 == 8 )
          goto LABEL_59;
      }
LABEL_73:
      sub_2213CDC(this, item);
    }
    LOBYTE(v22) = 0;
    str0 = (System_String_o *)v16;
LABEL_59:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v19);
    v42 = v22;
    v44 = (struct UIPanel_array *)v83;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12777/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0);
  }
  else
  {
    v42 = 0;
    v43 = (System_String_o *)v16;
    str0 = (System_String_o *)v16;
    v44 = (struct UIPanel_array *)v16;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12779/*"SOUNDPLAYER_OPEN_CHECK"*/, 0);
  this = (SoundPlayerMenu_o *)sub_2213B20(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_73;
  v52 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_74;
  this->fields.basePanelList = v44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanelList,
    (int32_t)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( ((__int64)v52->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0
    || (v52->fields.baseWindow = (struct UnityEngine_GameObject_o *)str0,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v52->fields.baseWindow,
          (int32_t)str0,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58),
        LODWORD(v52->fields.m_CancellationTokenSource) <= 2)
    || (v52->fields.closeTransform = (struct UnityEngine_Transform_o *)v43,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v52->fields.closeTransform,
          (int32_t)v43,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64),
        ((__int64)v52->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0)
    || (v52->fields.enterTransform = (struct UnityEngine_Transform_o *)v16,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v52->fields.enterTransform,
          (int32_t)v16,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70),
        LODWORD(v52->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_74:
    sub_2213CE4(this);
  }
  *(_QWORD *)&v52->fields.isBasePosition = v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v52->fields.isBasePosition,
    (int32_t)v45,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = System_String__Concat_75697120((System_String_array *)v52, 0);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12773/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12774/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12775/*"SOUNDPLAYER_DIALOG_OK"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v82 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_2213CCC(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v82, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0);
  if ( !Instance )
    goto LABEL_73;
  CommonUI__OpenTripleButtonDlg(
    (CommonUI_o *)Instance,
    title,
    v77,
    v78,
    v79,
    v80,
    v82,
    30,
    10,
    10,
    5,
    1,
    0,
    8,
    1,
    0,
    0,
    0,
    0,
    0);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_73;
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v42 & 1, 0);
}


void SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *EffetData; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596BD22 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19725/*"ef_soundchoice"*/);
    byte_596BD22 = 1;
  }
  SoundPlayerMenu__releaseSelectEffect(this, method);
  p_selectEffect = &this->fields.selectEffect;
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Equality(selectEffect, 0, 0) )
  {
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_15;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  soundPlayerListViewManager,
                                  (System_String_o *)StringLiteral_19725/*"ef_soundchoice"*/,
                                  v8);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      v15 = UnityEngine_Object__Instantiate_object_(
              EffetData,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v15;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.selectEffect,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0);
        GameObjectExtensions__SafeSetParent_42897308(this->fields.selectEffect, this->fields.selectEffectHideObj, 0);
        return;
      }
LABEL_15:
      sub_2213CDC(soundPlayerListViewManager, v7);
    }
  }
}


void SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_596BD24 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD24 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0, 0) )
  {
    v6 = this->fields.selectEffect;
    if ( !v6 )
      sub_2213CDC(0, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0);
    GameObjectExtensions__SafeSetParent_42897308(this->fields.selectEffect, this->fields.selectEffectHideObj, 0);
  }
}


void SoundPlayerMenu__endPurchaseRequest(SoundPlayerMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  struct SoundPlayerListViewManager_o *v24; // x8
  const MethodInfo *v25; // x2
  SoundPlayerListViewItem_o *Item; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x20
  System_String_o *v38; // x0
  System_String_o *v39; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v41; // x22

  if ( (byte_596BD28 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SoundPlayerMenu_OnSelectSound__);
    sub_2213A60(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__);
    sub_2213A60(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_12783/*"SOUNDPLAYER_SOUND_OPEN"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_86/*"\r"*/);
    byte_596BD28 = 1;
  }
  v5 = sub_2213CCC(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v7);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v15 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_2213CCC(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v16);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v15;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&soundPlayerListViewManager->fields.callbackFunc,
        (int32_t)v15,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      SoundPlayerListViewManager__SetMode_40646528(soundPlayerListViewManager, 2, v23);
      return;
    }
LABEL_16:
    sub_2213CDC(v6, v7);
  }
  v24 = this->fields.soundPlayerListViewManager;
  if ( !v24 )
    goto LABEL_16;
  ++v24->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v7);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v25);
  *(_QWORD *)(v5 + 24) = Item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v27, v28, v29, v30, v31, v32);
  v33 = *(_QWORD *)(v5 + 24);
  if ( !v33 )
    goto LABEL_16;
  v34 = *(_QWORD *)(v33 + 120);
  if ( !v34 )
    goto LABEL_16;
  v6 = *(System_String_o **)(v34 + 32);
  if ( !v6 )
    goto LABEL_16;
  v6 = System_String__Replace_75703400(v6, (System_String_o *)StringLiteral_86/*"\r"*/, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v6 )
    goto LABEL_16;
  v37 = (Il2CppObject *)System_String__Replace_75703400(
                          v6,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12783/*"SOUNDPLAYER_SOUND_OPEN"*/, 0);
  v39 = System_String__Format(v38, v37, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v5,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v39,
    v41,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0.0,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
SoundPlayerListViewItem_o *SoundPlayerMenu__getItem(SoundPlayerMenu_o *this, int32_t idx, const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0

  if ( idx < 0 )
    return 0;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_2213CDC(0, *(_QWORD *)&idx);
  return SoundPlayerListViewManager__GetItem(soundPlayerListViewManager, idx, method);
}


System_String_o *SoundPlayerMenu__getPlaySoundName(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  return this->fields.playSoundName;
}


void SoundPlayerMenu__hideMenu(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_2213CDC(0, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *v2; // x19
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  __int64 size; // x20
  __int64 v5; // x21
  unsigned __int64 v6; // x22
  MissionNaviTransitionBoardItem_o *v7; // x23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  SoundPlayerMenu_c *v17; // x8
  System_String_o *v18; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_596BD1E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&SoundPlayerMenu_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    this = (SoundPlayerMenu_o *)sub_2213A60(&StringLiteral_869/*","*/);
    byte_596BD1E = 1;
  }
  isNewList = v2->fields.isNewList;
  Item = 0;
  if ( !isNewList )
LABEL_14:
    sub_2213CDC(this, method);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = sub_2213B20(string___TypeInfo, (unsigned int)size);
    v6 = 0;
    v7 = (MissionNaviTransitionBoardItem_o *)(v5 + 32);
    do
    {
      this = (SoundPlayerMenu_o *)v2->fields.isNewList;
      if ( !this )
        goto LABEL_14;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)this,
               v6,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0);
      if ( !v5 )
        goto LABEL_14;
      if ( v6 >= *(unsigned int *)(v5 + 24) )
        sub_2213CE4(this);
      v7->klass = (MissionNaviTransitionBoardItem_c *)this;
      sub_2213A04(v7, (int32_t)this, v8, v9, v10, v11, v12, v13);
      ++v6;
      v7 = (MissionNaviTransitionBoardItem_o *)((char *)v7 + 8);
    }
    while ( size != v6 );
    v14 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, (System_String_array *)v5, 0);
    v17 = SoundPlayerMenu_TypeInfo;
    v18 = v14;
    if ( !*(&SoundPlayerMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo, v15, v16);
      v17 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v17->static_fields->SOUND_PLAYER_NEW_KEY, v18, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2

  if ( (byte_596BD1F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__);
    sub_2213A60(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
    byte_596BD1F = 1;
  }
  v7 = sub_2213CCC(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = opened_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)opened_act, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v7, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_2213CDC(v8, v9);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v29, v30);
}


void SoundPlayerMenu__openCheckDlgCallback(SoundPlayerMenu_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  SoundPlayerListViewItem_o *Item; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v24; // x0
  intptr_t *v25; // x8
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x1
  System_Action_o *v38; // x21

  if ( (byte_596BD26 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_2213A60(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__);
    sub_2213A60(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__);
    sub_2213A60(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
    byte_596BD26 = 1;
  }
  v5 = sub_2213CCC(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v14);
  *(_QWORD *)(v5 + 16) = Item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v22);
      SoundPlayerMenu__detachSelectEffect(this, v37);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v25 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_11:
      v38 = v24;
      System_Action___ctor(v24, (Il2CppObject *)v5, *v25, 0);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v38, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(v6, v7);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v22);
      v27 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v5 + 16), v26);
      started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v27, 0);
      this->fields.retTrialListening = started;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.retTrialListening,
        (int32_t)started,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_2213CCC(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0);
      if ( v35 )
      {
        CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v35, v36, 0);
        return;
      }
      goto LABEL_14;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v22);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v25 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_11;
  }
}


void SoundPlayerMenu__openEvent(SoundPlayerMenu_o *this, SoundPlayerListViewItem_o *item, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_596BD29 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu__openEvent_b__37_0__);
    byte_596BD29 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0),
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0),
        !item) )
  {
    sub_2213CDC(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v6, v7);
}


void SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_selectEffect; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596BD25 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD25 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = (MissionNaviTransitionBoardItem_o *)&this->fields.selectEffect;
  v5 = (UnityEngine_Object_o *)selectEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_selectEffect->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_selectEffect->klass = 0;
    sub_2213A04(p_selectEffect, 0, v10, v11, v12, v13, v14, v15);
  }
}


void SoundPlayerMenu__remove_callbackFunc(SoundPlayerMenu_o *this, System_Action_o *value, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SoundPlayerMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BD1A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD1A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SoundPlayerMenu_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  SoundPlayerMenu__releaseSelectEffect(v13, v14);
}


void SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596BD1C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD1C = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.playSoundIdx = -1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playSoundName, v9, v2, v3, v4, v5, v6, v7);
}


void SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *canPlaySoundCnt; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v9; // x21
  struct SoundPlayerListViewManager_o *v10; // x8
  Il2CppObject *v11; // x19
  Il2CppObject *v12; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596BD27 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12780/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/);
    sub_2213A60(&StringLiteral_12781/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/);
    byte_596BD27 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12780/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v5, 0);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12781/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_10;
  v9 = v5;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v5 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &canPlaySoundNum);
  v10 = this->fields.soundPlayerListViewManager;
  if ( !v10
    || (v11 = (Il2CppObject *)v5,
        playSoundMax = v10->fields.playSoundMax,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &playSoundMax),
        v5 = System_String__Format_75697880(v9, v11, v12, 0),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_2213CDC(v5, v6);
  }
  UILabel__set_text(canPlaySoundCnt, v5, 0);
}


void SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *retTrialListening; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  System_Collections_IEnumerator_o *v14; // x1
  MissionNaviTransitionBoardItem_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *klass; // x20
  int32_t v25; // w1

  if ( (byte_596BD2B & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD2B = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0);
    this->fields.retTrialListening = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.retTrialListening, 0, v4, v5, v6, v7, v8, v9);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v10, v11);
    if ( BgmManager__get_IsBusy(0) )
    {
      v14 = SoundPlayerMenu__busyWaitStopBgm(this, v12);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v14, 0);
    }
    else
    {
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12, v13);
      SoundManager__stopBgm(0);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = (MissionNaviTransitionBoardItem_o *)&this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0) )
      {
        klass = (System_String_o *)p_backupBgmName->klass;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17, v18);
        SoundManager__playBgm(klass, 0);
      }
      v25 = (int)StringLiteral_1/*""*/;
      p_backupBgmName->klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
      sub_2213A04(p_backupBgmName, v25, v18, v19, v20, v21, v22, v23);
    }
  }
}


System_Collections_IEnumerator_o *SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596BD2A & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerMenu__trialListening_d__39_TypeInfo);
    byte_596BD2A = 1;
  }
  v5 = sub_2213CCC(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)item, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BD31 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerMenu___c_TypeInfo);
    byte_596BD31 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SoundPlayerMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BD33 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596BD33 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  return !BgmManager__get_IsBusy(0);
}


bool SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BD32 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596BD32 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  return !BgmManager__get_IsBusy(0);
}


void SoundPlayerMenu___c__DisplayClass27_0___ctor(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundPlayerMenu___c__DisplayClass27_0___open_b__0(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct SoundPlayerMenu_o *v10; // x20
  System_Action_c *v11; // x0
  struct System_Action_o *opened_act; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Action_o *callback; // x1
  struct SoundPlayerMenu_o *v20; // x8
  struct SoundPlayerMenu_o *v21; // x8
  const MethodInfo *v22; // x2
  struct SoundPlayerMenu_o *v23; // x8
  System_Action_o *v24; // x21
  __int64 v25; // x2
  struct SoundPlayerMenu_o *v26; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v28; // x3
  struct SoundPlayerMenu_o *v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v33; // x8

  if ( (byte_596BD34 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu_EndOpen__);
    byte_596BD34 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  SoundPlayerMenu__createSelectEffect((SoundPlayerMenu_o *)_4__this, method);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_34;
  if ( v10->fields.state )
  {
    v11 = System_Action_TypeInfo;
  }
  else
  {
    opened_act = this->fields.opened_act;
    v10->fields.openedAct = opened_act;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.openedAct, (int32_t)opened_act, v4, v5, v6, v7, v8, v9);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_34;
    callback = this->fields.callback;
    *((_QWORD *)_4__this + 19) = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)_4__this + 152),
      (int32_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_34;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_34;
    _4__this = v20->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_34;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_34;
    _4__this = v21->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_34;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, method);
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_34;
    _4__this = v23->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_34;
    SoundPlayerListViewManager__SetMode_40646528((SoundPlayerListViewManager_o *)_4__this, 1, v22);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_34;
    SoundPlayerMenu__setCanPlaySoundDisp((SoundPlayerMenu_o *)_4__this, method);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_34;
    v11 = System_Action_TypeInfo;
    v10->fields.state = 1;
  }
  v24 = (System_Action_o *)sub_2213CCC(v11);
  System_Action___ctor(v24, (Il2CppObject *)v10, Method_SoundPlayerMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)v10, v24, 0);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_34;
  baseWindow = (UnityEngine_Object_o *)v26->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v25);
  _4__this = (void *)UnityEngine_Object__op_Inequality(baseWindow, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_31;
  v29 = this->fields.__4__this;
  if ( !v29 || (_4__this = v29->fields.baseWindow) == 0 )
LABEL_34:
    sub_2213CDC(_4__this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  _4__this = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_34;
    LODWORD(Component_object[2].klass) = 2;
    LODWORD(Component_object[3].monitor) = 1045220557;
  }
LABEL_31:
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_34;
  _4__this = v33->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_34;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v33->fields.isNewList,
    v33->fields.playSoundName,
    v28);
}


void SoundPlayerMenu___c__DisplayClass34_0___ctor(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__0(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SoundPlayerMenu___c__DisplayClass34_0_o *v3; // x19
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x21
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  struct SoundPlayerMenu_o *v11; // x8

  v3 = this;
  if ( (byte_596BD35 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu_endPurchaseRequest__);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596BD35 = 1;
  }
  item = v3->fields.item;
  if ( !item )
    goto LABEL_13;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_13;
  shopId = bgmEntity->fields.shopId;
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( shopId )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v8, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v8,
                                                        (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v11 = v3->fields.__4__this;
    if ( v11 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v11->fields.PURCHASE_NUM, 0, 0, 0, 0, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
  if ( !_4__this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest(v3->fields.__4__this, (System_String_o *)StringLiteral_23515/*"ok"*/, v2);
}


void SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  Il2CppClass *klass; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_596BD36 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_2213A60(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_596BD36 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = _4__this[6].klass,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_2213CCC(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v6),
        !klass) )
  {
    sub_2213CDC(this, method);
  }
  klass->vtable[3].method = (const MethodInfo *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->vtable[3].method, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  SoundPlayerListViewManager__SetMode_40646528((SoundPlayerListViewManager_o *)klass, 2, v13);
}


void SoundPlayerMenu___c__DisplayClass36_0___ctor(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundPlayerMenu___c__DisplayClass36_0___endPurchaseRequest_b__0(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu_o *_4__this; // x0
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this || (SoundPlayerMenu__detachSelectEffect(_4__this, method), (_4__this = this->fields.__4__this) == 0) )
    sub_2213CDC(_4__this, method);
  SoundPlayerMenu__openEvent(_4__this, this->fields.item, v4);
}


void SoundPlayerMenu__busyWaitStopBgm_d__41___ctor(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundPlayerMenu__busyWaitStopBgm_d__41__MoveNext(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w22
  struct SoundPlayerMenu_o *_4__this; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  MissionNaviTransitionBoardItem_o *p_backupBgmName; // x20
  System_String_o *backupBgmName; // t1
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *klass; // x19
  int32_t v18; // w1
  SoundPlayerMenu___c_c *v19; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v22; // x21
  struct SoundPlayerMenu___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_WaitUntil_o *v30; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_596BD37 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__);
    sub_2213A60(&SoundPlayerMenu___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BD37 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
      SoundManager__stopBgm(0);
      if ( !_4__this )
        sub_2213CDC(v6, v7);
      backupBgmName = _4__this->fields.backupBgmName;
      p_backupBgmName = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0) )
      {
        klass = (System_String_o *)p_backupBgmName->klass;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10, v11);
        SoundManager__playBgm(klass, 0);
      }
      v18 = (int)StringLiteral_1/*""*/;
      p_backupBgmName->klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
      sub_2213A04(p_backupBgmName, v18, v11, v12, v13, v14, v15, v16);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v19 = SoundPlayerMenu___c_TypeInfo;
    if ( !*(&SoundPlayerMenu___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo, method, v2);
      v19 = SoundPlayerMenu___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__41_0 = static_fields->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( !*(&v19->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v19, method, v2);
        static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__41_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__41_0, v22, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0);
      v23 = SoundPlayerMenu___c_TypeInfo->static_fields;
      v23->__9__41_0 = _9__41_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__41_0, (int32_t)_9__41_0, v24, v25, v26, v27, v28, v29);
    }
    v30 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v30, _9__41_0, 0);
    this->fields.__2__current = (Il2CppObject *)v30;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v30, v32, v33, v34, v35, v36, v37);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundPlayerMenu__busyWaitStopBgm_d__41__System_IDisposable_Dispose(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundPlayerMenu__trialListening_d__39___ctor(
        SoundPlayerMenu__trialListening_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundPlayerMenu__trialListening_d__39__MoveNext(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_String_o *BgmName; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o *playSoundName; // x1
  struct SoundPlayerListViewItem_o *item; // x21
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  bool result; // w0
  SoundPlayerMenu___c_c *v35; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v38; // x21
  struct SoundPlayerMenu___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  UnityEngine_WaitUntil_o *v46; // x21
  Il2CppObject **v47; // x19
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *backupBgmName; // x19

  if ( (byte_596BD38 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SoundPlayerMenu___c__trialListening_b__39_0__);
    sub_2213A60(&SoundPlayerMenu___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596BD38 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
      BgmName = SoundManager__getBgmName(0);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = BgmName;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.backupBgmName,
          (int32_t)BgmName,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0) )
        {
          playSoundName = _4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = playSoundName;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.backupBgmName,
            (int32_t)playSoundName,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v14, v15);
        SoundManager__stopBgm(0);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_596BCF3 & 1) == 0 )
          {
            sub_2213A60(&StringLiteral_1/*""*/);
            byte_596BCF3 = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v26 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v26, LISTENING_TIME, 0);
          this->fields.__2__current = (Il2CppObject *)v26;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v26, v28, v29, v30, v31, v32, v33);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_2213CDC(BgmName, v7);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  if ( !BgmManager__get_IsBusy(0) )
  {
LABEL_31:
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    SoundManager__stopBgm(0);
    if ( !_4__this )
      goto LABEL_40;
    if ( !System_String__IsNullOrEmpty(_4__this->fields.backupBgmName, 0) )
    {
      backupBgmName = _4__this->fields.backupBgmName;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v54, v55);
      SoundManager__playBgm(backupBgmName, 0);
    }
    _4__this->fields.retTrialListening = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.retTrialListening,
      0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    return 0;
  }
  v35 = SoundPlayerMenu___c_TypeInfo;
  if ( !*(&SoundPlayerMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo, method, v2);
    v35 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__39_0 = static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, method, v2);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__39_0, v38, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0);
    v39 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v39->__9__39_0 = _9__39_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__39_0, (int32_t)_9__39_0, v40, v41, v42, v43, v44, v45);
  }
  v46 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, _9__39_0, 0);
  this->fields.__2__current = (Il2CppObject *)v46;
  v47 = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v47, (int32_t)v46, v48, v49, v50, v51, v52, v53);
  result = 1;
  *((_DWORD *)v47 - 2) = 2;
  return result;
}


Il2CppObject *SoundPlayerMenu__trialListening_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundPlayerMenu__trialListening_d__39__System_IDisposable_Dispose(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  ;
}