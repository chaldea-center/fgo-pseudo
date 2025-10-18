void SoundPlayerMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3E713 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerMenu_TypeInfo);
    sub_1C37058(&StringLiteral_12934/*"SoundPlayerNewKey"*/);
    byte_4C3E713 = 1;
  }
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_12934/*"SoundPlayerNewKey"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)SoundPlayerMenu_TypeInfo->static_fields, StringLiteral_12934/*"SoundPlayerNewKey"*/, v1, v2);
}


void SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3E712 & 1) == 0 )
  {
    sub_1C37058(&BaseMenu_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E712 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v5 = StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playSoundName, v5, v2, v3);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isNewList, (int32_t)v6, v7, v8);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C3E704 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4C3E704 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v4 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C372A4(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v5);
  if ( !soundPlayerListViewManager )
    sub_1C372B4(v6);
  soundPlayerListViewManager->fields.callbackFunc = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v4, v7, v8);
  SoundPlayerListViewManager__SetMode_33905088(soundPlayerListViewManager, 2, v9);
  ActionExtensions__Call(this->fields.openedAct, 0);
}


void SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_4C3E6FF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E6FF = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.retTrialListening, 0, v2, v3);
  v5 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.backupBgmName, v5, v6, v7);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0)) == 0 )
  {
    sub_1C372B4(soundPlayerListViewManager);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  struct BgmEntity_o *v26; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v28; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v31; // x21
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2

  if ( (byte_4C3E705 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4C3E705 = 1;
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
      SoundPlayerMenu__createOpenDlg(this, v10, v15);
      v16 = Method_SoundPlayerMenu_OnSelectSound__;
      if ( (*((_BYTE *)Method_SoundPlayerMenu_OnSelectSound__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C37070(Method_SoundPlayerMenu_OnSelectSound__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
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
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0);
        SoundPlayerMenu__resetPlaySoundData(this, v14);
      }
      else
      {
        bgmEntity = v10->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v10->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v10, v13);
        SoundPlayerListViewItem__applyUi(v10, v20);
        isNewList = (int *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v23 = *((_QWORD *)isNewList + 2);
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v23 )
            goto LABEL_36;
          v25 = isNewList[6];
          if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v25 + 1;
            *(_DWORD *)(v23 + 4 * v25 + 32) = id;
          }
        }
        if ( (byte_4C3E6D9 & 1) == 0 )
        {
          sub_1C37058(&StringLiteral_1/*""*/);
          byte_4C3E6D9 = 1;
        }
        v26 = v10->fields.bgmEntity;
        if ( v26 )
          p_fileName = &v26->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v28 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playSoundName, (int32_t)v28, v21, v22);
        playSoundName = this->fields.playSoundName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(playSoundName, 0);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v31 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C372A4(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v32);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v31;
        sub_1C36FFC((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v31, v33, v34);
        SoundPlayerListViewManager__SetMode_33905088(soundPlayerListViewManager, 2, v35);
        return;
      }
LABEL_36:
      sub_1C372B4(isNewList);
    }
  }
}


void SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0);
}


void SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C3E714 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4C3E714 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C372A4(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v6),
        !soundPlayerListViewManager) )
  {
    sub_1C372B4(maskColl);
  }
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v5, v7, v8);
  SoundPlayerListViewManager__SetMode_33905088(soundPlayerListViewManager, 2, v9);
}


void SoundPlayerMenu__add_callbackFunc(SoundPlayerMenu_o *this, System_Action_o *value, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3E6FD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E6FD = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1C37574(v8);
  SoundPlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_c *v3; // x0
  System_String_o *String; // x20
  System_String_array *IsNullOrEmpty; // x0
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  int v7; // w9
  System_String_array *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  struct System_Collections_Generic_List_int__o *v11; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11

  if ( (byte_4C3E701 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&SoundPlayerMenu_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E701 = 1;
  }
  v3 = SoundPlayerMenu_TypeInfo;
  if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
    v3 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v3->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    isNewList = this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_20;
    v7 = isNewList->fields._version + 1;
    isNewList->fields._size = 0;
    isNewList->fields._version = v7;
    if ( !String )
      goto LABEL_20;
    IsNullOrEmpty = System_String__Split(String, 0x2Cu, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    v8 = IsNullOrEmpty;
    if ( (int)IsNullOrEmpty->max_length >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)IsNullOrEmpty->max_length - 1LL;
      while ( 1 )
      {
        IsNullOrEmpty = (System_String_array *)System_Int32__Parse(v8->m_Items[v9], 0);
        v11 = this->fields.isNewList;
        if ( !v11 )
          break;
        items = v11->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = (int)IsNullOrEmpty;
        }
        if ( v10 == v9 )
          return;
        if ( ++v9 >= (unsigned __int64)LODWORD(v8->max_length) )
          sub_1C372BC(IsNullOrEmpty);
      }
LABEL_20:
      sub_1C372B4(IsNullOrEmpty);
    }
  }
}


void SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v4; // x2
  UnityEngine_GameObject_o *Item; // x0
  intptr_t m_CachedPtr; // x8
  __int64 naturalAligment; // x11
  intptr_t v8; // x20

  if ( (byte_4C3E707 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SoundPlayerListViewObject_TypeInfo);
    byte_4C3E707 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0, 0) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v4);
    if ( !Item )
      goto LABEL_22;
    m_CachedPtr = Item[4].fields.m_CachedPtr;
    if ( m_CachedPtr
      && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)m_CachedPtr + 304LL) >= (unsigned int)naturalAligment) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)m_CachedPtr + 200LL) + 8 * naturalAligment - 8) == SoundPlayerListViewObject_TypeInfo )
        v8 = Item[4].fields.m_CachedPtr;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0);
        if ( v8 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, *(UnityEngine_Component_o **)(v8 + 136), 0);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 Item,
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_1C372B4(Item);
    }
  }
}


System_Collections_IEnumerator_o *SoundPlayerMenu__busyWaitStopBgm(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3E710 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
    byte_4C3E710 = 1;
  }
  v3 = sub_1C372A4(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundPlayerMenu__createOpenDlg(SoundPlayerMenu_o *this, SoundPlayerListViewItem_o *item, const MethodInfo *method)
{
  SoundPlayerMenu_o *v4; // x24
  struct BgmEntity_o *bgmEntity; // x8
  Il2CppObject *v6; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  struct BgmEntity_o *v9; // x20
  System_String_o *v10; // x21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v12; // x24
  SoundPlayerMenu_o *v13; // x21
  UserItemMaster_o *v14; // x25
  Il2CppObject *v15; // x8
  Il2CppClass *klass; // x9
  const char *namespaze; // x9
  SoundPlayerMenu_o *v18; // x22
  char v19; // w20
  __int64 v20; // x22
  System_String_o *v21; // x23
  Il2CppClass *v22; // x8
  unsigned __int64 v23; // x29
  SoundPlayerMenu_o *v24; // x27
  Il2CppClass *v25; // x8
  int32_t num; // w1
  int closeTransform; // w8
  Il2CppClass *v28; // x8
  Il2CppClass *v29; // x8
  Il2CppObject *v30; // x28
  Il2CppObject *CountText; // x29
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  bool v36; // w24
  System_String_o *v37; // x25
  System_String_o *v38; // x26
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  SoundPlayerMenu_o *v41; // x27
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_String_o *v50; // x21
  System_String_o *v51; // x22
  System_String_o *v52; // x23
  System_String_o *v53; // x25
  Il2CppObject *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v55; // x27
  SoundPlayerMenu_o *v56; // [xsp+60h] [xbp-90h]
  System_String_o *title; // [xsp+68h] [xbp-88h]
  Il2CppObject *object; // [xsp+70h] [xbp-80h]
  __int64 v59; // [xsp+78h] [xbp-78h]
  UserItemEntity_o *v60; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4C3E711 & 1) == 0 )
  {
    sub_1C37058(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_12258/*"SOUNDPLAYER_OPEN_CHECK"*/);
    sub_1C37058(&StringLiteral_12256/*"SOUNDPLAYER_ITEM_COST_WARNING"*/);
    sub_1C37058(&StringLiteral_12254/*"SOUNDPLAYER_DIALOG_OK"*/);
    sub_1C37058(&StringLiteral_12257/*"SOUNDPLAYER_ITEM_DISP"*/);
    sub_1C37058(&StringLiteral_12252/*"SOUNDPLAYER_DIALOG_CANCEL"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_86/*"\r"*/);
    sub_1C37058(&StringLiteral_12255/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/);
    sub_1C37058(&StringLiteral_12263/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/);
    this = (SoundPlayerMenu_o *)sub_1C37058(&StringLiteral_12253/*"SOUNDPLAYER_DIALOG_MIDDLE"*/);
    byte_4C3E711 = 1;
  }
  v60 = 0;
  entity = 0;
  if ( !item )
    goto LABEL_76;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)System_String__Replace_63608204(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_86/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0);
  if ( !this )
    goto LABEL_76;
  v6 = (Il2CppObject *)System_String__Replace_63608204(
                         (System_String_o *)this,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0);
  v8 = System_String__Format(v7, v6, 0);
  v9 = item->fields.bgmEntity;
  v10 = v8;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  object = (Il2CppObject *)v4;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v9 )
    goto LABEL_76;
  title = v10;
  if ( !MasterData_object )
    goto LABEL_76;
  v13 = (SoundPlayerMenu_o *)StringLiteral_1/*""*/;
  v14 = (UserItemMaster_o *)this;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         v9->fields.shopId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12255/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0);
    v15 = entity;
    if ( !entity )
      goto LABEL_76;
    klass = entity[2].klass;
    if ( !klass )
      goto LABEL_76;
    namespaze = klass->_1.namespaze;
    v18 = this;
    if ( (int)namespaze < 1 )
    {
      v19 = 0;
      v21 = (System_String_o *)v13;
    }
    else
    {
      v56 = this;
      v59 = 1LL - (unsigned int)namespaze;
      v19 = 0;
      v20 = 8;
      v21 = (System_String_o *)v13;
      while ( 1 )
      {
        v22 = v15[2].klass;
        if ( !v22 )
          goto LABEL_76;
        v23 = v20 - 8;
        if ( v20 - 8 >= (unsigned __int64)LODWORD(v22->_1.namespaze) )
          goto LABEL_77;
        if ( !v12 )
          goto LABEL_76;
        this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(
                                      (ItemMaster_o *)v12,
                                      *((_DWORD *)&v22->_1.image + v20),
                                      -1,
                                      0);
        if ( this )
        {
          v24 = this;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          }
          if ( !entity )
            goto LABEL_76;
          v25 = entity[2].klass;
          if ( !v25 )
            goto LABEL_76;
          if ( v23 >= LODWORD(v25->_1.namespaze) )
            goto LABEL_77;
          if ( !v14 )
            goto LABEL_76;
          this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                        v14,
                                        &v60,
                                        *(_QWORD *)&this->fields.playSoundName[2].fields,
                                        *((_DWORD *)&v25->_1.image + v20),
                                        0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v60 )
              goto LABEL_76;
            num = v60->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0);
            closeTransform = (int)v24->fields.closeTransform;
            if ( closeTransform == 5 )
            {
              if ( !this )
                goto LABEL_76;
              num = (int32_t)this->fields.retTrialListening;
            }
            else if ( closeTransform == 22 )
            {
              if ( !this )
                goto LABEL_76;
              num = HIDWORD(this->fields.retTrialListening);
            }
            else
            {
              num = 0;
            }
          }
          if ( !entity )
            goto LABEL_76;
          v28 = entity[5].klass;
          if ( !v28 )
            goto LABEL_76;
          if ( v23 >= LODWORD(v28->_1.namespaze) )
            goto LABEL_77;
          if ( num < *((_DWORD *)&v28->_1.image + v20) )
            v19 = 1;
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v24->fields.closeTransform, num, 0);
          if ( !entity )
            goto LABEL_76;
          v29 = entity[5].klass;
          if ( !v29 )
            goto LABEL_76;
          if ( v23 >= LODWORD(v29->_1.namespaze) )
            goto LABEL_77;
          v30 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v24->fields.closeTransform,
                                        *((_DWORD *)&v29->_1.image + v20),
                                        0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12257/*"SOUNDPLAYER_ITEM_DISP"*/, 0);
          v33 = System_String__Format_63602948(v32, (Il2CppObject *)v24->fields.m_CancellationTokenSource, v30, 0);
          v21 = System_String__Concat_63561656(v21, v33, 0);
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12257/*"SOUNDPLAYER_ITEM_DISP"*/, 0);
          v35 = System_String__Format_63602948(v34, (Il2CppObject *)v24->fields.m_CancellationTokenSource, CountText, 0);
          this = (SoundPlayerMenu_o *)System_String__Concat_63561656((System_String_o *)v13, v35, 0);
          v13 = this;
        }
        if ( v59 + v20 == 8 )
          break;
        v15 = entity;
        ++v20;
        if ( !entity )
          goto LABEL_76;
      }
      v18 = v56;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0);
    v36 = v19 & 1;
  }
  else
  {
    v36 = 0;
    v37 = (System_String_o *)v13;
    v21 = (System_String_o *)v13;
    v18 = v13;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12258/*"SOUNDPLAYER_OPEN_CHECK"*/, 0);
  this = (SoundPlayerMenu_o *)sub_1C37100(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_76;
  v41 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_77;
  this->fields.basePanelList = (struct UIPanel_array *)v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.basePanelList, (int32_t)v18, v39, v40);
  if ( LODWORD(v41->fields.m_CancellationTokenSource) <= 1
    || (v41->fields.baseWindow = (struct UnityEngine_GameObject_o *)v21,
        sub_1C36FFC((CGThumbnailListItem_o *)&v41->fields.baseWindow, (int32_t)v21, v42, v43),
        LODWORD(v41->fields.m_CancellationTokenSource) <= 2)
    || (v41->fields.closeTransform = (struct UnityEngine_Transform_o *)v37,
        sub_1C36FFC((CGThumbnailListItem_o *)&v41->fields.closeTransform, (int32_t)v37, v44, v45),
        LODWORD(v41->fields.m_CancellationTokenSource) <= 3)
    || (v41->fields.enterTransform = (struct UnityEngine_Transform_o *)v13,
        sub_1C36FFC((CGThumbnailListItem_o *)&v41->fields.enterTransform, (int32_t)v13, v46, v47),
        LODWORD(v41->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_77:
    sub_1C372BC(this);
  }
  *(_QWORD *)&v41->fields.isBasePosition = v38;
  sub_1C36FFC((CGThumbnailListItem_o *)&v41->fields.isBasePosition, (int32_t)v38, v48, v49);
  v50 = System_String__Concat_63602172((System_String_array *)v41, 0);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12254/*"SOUNDPLAYER_DIALOG_OK"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C372A4(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v55, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0);
  if ( !Instance
    || (CommonUI__OpenTripleButtonDlg(
          (CommonUI_o *)Instance,
          title,
          v50,
          v51,
          v52,
          v53,
          v55,
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
          0),
        (this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_76:
    sub_1C372B4(this);
  }
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v36, 0);
}


void SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  const MethodInfo *v5; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  Il2CppObject *EffetData; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3E706 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_18859/*"ef_soundchoice"*/);
    byte_4C3E706 = 1;
  }
  SoundPlayerMenu__releaseSelectEffect(this, method);
  p_selectEffect = &this->fields.selectEffect;
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectEffect, 0, 0) )
  {
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_15;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  soundPlayerListViewManager,
                                  (System_String_o *)StringLiteral_18859/*"ef_soundchoice"*/,
                                  v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object_(
             EffetData,
             (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v8;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectEffect, (int32_t)v8, v9, v10);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0);
        GameObjectExtensions__SafeSetParent_36138184(this->fields.selectEffect, this->fields.selectEffectHideObj, 0);
        return;
      }
LABEL_15:
      sub_1C372B4(soundPlayerListViewManager);
    }
  }
}


void SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3E708 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E708 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0, 0) )
  {
    v4 = this->fields.selectEffect;
    if ( !v4 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v4, 0, 0);
    GameObjectExtensions__SafeSetParent_36138184(this->fields.selectEffect, this->fields.selectEffectHideObj, 0);
  }
}


void SoundPlayerMenu__endPurchaseRequest(SoundPlayerMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct SoundPlayerListViewManager_o *v16; // x8
  const MethodInfo *v17; // x2
  SoundPlayerListViewItem_o *Item; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  __int64 v22; // x8
  Il2CppObject *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v27; // x22

  if ( (byte_4C3E70C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SoundPlayerMenu_OnSelectSound__);
    sub_1C37058(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__);
    sub_1C37058(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_12262/*"SOUNDPLAYER_SOUND_OPEN"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_86/*"\r"*/);
    byte_4C3E70C = 1;
  }
  v5 = sub_1C372A4(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  v6 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v9);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v11 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C372A4(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v12);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v11;
      sub_1C36FFC((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v11, v13, v14);
      SoundPlayerListViewManager__SetMode_33905088(soundPlayerListViewManager, 2, v15);
      return;
    }
LABEL_16:
    sub_1C372B4(v6);
  }
  v16 = this->fields.soundPlayerListViewManager;
  if ( !v16 )
    goto LABEL_16;
  ++v16->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v9);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v17);
  *(_QWORD *)(v5 + 24) = Item;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Item, v19, v20);
  v21 = *(_QWORD *)(v5 + 24);
  if ( !v21 )
    goto LABEL_16;
  v22 = *(_QWORD *)(v21 + 120);
  if ( !v22 )
    goto LABEL_16;
  v6 = *(System_String_o **)(v22 + 32);
  if ( !v6 )
    goto LABEL_16;
  v6 = System_String__Replace_63608204(v6, (System_String_o *)StringLiteral_86/*"\r"*/, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v6 )
    goto LABEL_16;
  v23 = (Il2CppObject *)System_String__Replace_63608204(
                          v6,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12262/*"SOUNDPLAYER_SOUND_OPEN"*/, 0);
  v25 = System_String__Format(v24, v23, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v25,
    v27,
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


SoundPlayerListViewItem_o *SoundPlayerMenu__getItem(SoundPlayerMenu_o *this, int32_t idx, const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0

  if ( idx < 0 )
    return 0;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
  CGThumbnailListItem_o *v7; // x23
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x0
  SoundPlayerMenu_c *v11; // x8
  System_String_o *v12; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4C3E702 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&SoundPlayerMenu_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    this = (SoundPlayerMenu_o *)sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C3E702 = 1;
  }
  Item = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_14:
    sub_1C372B4(this);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = sub_1C37100(string___TypeInfo, (unsigned int)size);
    v6 = 0;
    v7 = (CGThumbnailListItem_o *)(v5 + 32);
    do
    {
      this = (SoundPlayerMenu_o *)v2->fields.isNewList;
      if ( !this )
        goto LABEL_14;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)this,
               v6,
               (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0);
      if ( !v5 )
        goto LABEL_14;
      if ( v6 >= *(unsigned int *)(v5 + 24) )
        sub_1C372BC(this);
      v7->klass = (CGThumbnailListItem_c *)this;
      sub_1C36FFC(v7, (int32_t)this, v8, v9);
      ++v6;
      v7 = (CGThumbnailListItem_o *)((char *)v7 + 8);
    }
    while ( size != v6 );
    v10 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, (System_String_array *)v5, 0);
    v11 = SoundPlayerMenu_TypeInfo;
    v12 = v10;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v11 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v11->static_fields->SOUND_PLAYER_NEW_KEY, v12, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4C3E703 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__);
    sub_1C37058(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
    byte_4C3E703 = 1;
  }
  v7 = sub_1C372A4(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = opened_act;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)opened_act, v11, v12);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v13, v14);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v7, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_1C372B4(v8);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v16, v17);
}


void SoundPlayerMenu__openCheckDlgCallback(SoundPlayerMenu_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SoundPlayerListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x0
  intptr_t *v16; // x8
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *v20; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v25; // x21

  if ( (byte_4C3E70A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_1C37058(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__);
    sub_1C37058(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__);
    sub_1C37058(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
    byte_4C3E70A = 1;
  }
  v5 = sub_1C372A4(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v9);
  *(_QWORD *)(v5 + 16) = Item;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Item, v11, v12);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v13);
      SoundPlayerMenu__detachSelectEffect(this, v17);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v16 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_9:
      v18 = v15;
      System_Action___ctor(v15, (Il2CppObject *)v5, *v16, 0);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v18, 0);
        return;
      }
LABEL_14:
      sub_1C372B4(v6);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v13);
      v20 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v5 + 16), v19);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v20, 0);
      this->fields.retTrialListening = started;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.retTrialListening, (int32_t)started, v22, v23);
      v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C372A4(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0);
      if ( !v24 )
        goto LABEL_14;
      CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v24, v25, 0);
      break;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v13);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v16 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_9;
  }
}


void SoundPlayerMenu__openEvent(SoundPlayerMenu_o *this, SoundPlayerListViewItem_o *item, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4C3E70D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu__openEvent_b__37_0__);
    byte_4C3E70D = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0),
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0),
        !item) )
  {
    sub_1C372B4(maskColl);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v6, v7);
}


void SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3E709 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E709 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = (CGThumbnailListItem_o *)&this->fields.selectEffect;
  v4 = (UnityEngine_Object_o *)selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_selectEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(klass, 0);
    p_selectEffect->klass = 0;
    sub_1C36FFC(p_selectEffect, 0, v7, v8);
  }
}


void SoundPlayerMenu__remove_callbackFunc(SoundPlayerMenu_o *this, System_Action_o *value, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3E6FE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E6FE = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1C37574(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3E700 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E700 = 1;
  }
  this->fields.playSoundIdx = -1;
  v5 = StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playSoundName, v5, v2, v3);
}


void SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v4; // x0
  UILabel_o *canPlaySoundCnt; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  struct SoundPlayerListViewManager_o *v20; // x8
  Il2CppObject *v21; // x19
  Il2CppObject *v22; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3E70B & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12259/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/);
    sub_1C37058(&StringLiteral_12260/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/);
    byte_4C3E70B = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v4, 0);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12260/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_10;
  v13 = v4;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum, v6, v7, v8, v9, v10, v11);
  v20 = this->fields.soundPlayerListViewManager;
  if ( !v20
    || (v21 = (Il2CppObject *)v4,
        playSoundMax = v20->fields.playSoundMax,
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax, v14, v15, v16, v17, v18, v19),
        v4 = System_String__Format_63602948(v13, v21, v22, 0),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_1C372B4(v4);
  }
  UILabel__set_text(canPlaySoundCnt, v4, 0);
}


void SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *retTrialListening; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1
  CGThumbnailListItem_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *klass; // x20
  int32_t v13; // w1

  if ( (byte_4C3E70F & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E70F = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71252944((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0);
    this->fields.retTrialListening = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.retTrialListening, 0, v4, v5);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0) )
    {
      v7 = SoundPlayerMenu__busyWaitStopBgm(this, v6);
      UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
    }
    else
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = (CGThumbnailListItem_o *)&this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0) )
      {
        klass = (System_String_o *)p_backupBgmName->klass;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(klass, 0);
      }
      v13 = StringLiteral_1/*""*/;
      p_backupBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      sub_1C36FFC(p_backupBgmName, v13, v10, v11);
    }
  }
}


System_Collections_IEnumerator_o *SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3E70E & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerMenu__trialListening_d__39_TypeInfo);
    byte_4C3E70E = 1;
  }
  v5 = sub_1C372A4(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = item;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)item, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E715 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerMenu___c_TypeInfo);
    byte_4C3E715 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SoundPlayerMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4C3E717 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C3E717 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0);
}


bool SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4C3E716 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C3E716 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct SoundPlayerMenu_o *v6; // x20
  struct System_Action_o *opened_act; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Action_o *callback; // x1
  struct SoundPlayerMenu_o *v11; // x8
  const MethodInfo *v12; // x1
  struct SoundPlayerMenu_o *v13; // x8
  const MethodInfo *v14; // x2
  struct SoundPlayerMenu_o *v15; // x8
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x21
  struct SoundPlayerMenu_o *v18; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v20; // x3
  struct SoundPlayerMenu_o *v21; // x8
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v23; // x8

  if ( (byte_4C3E718 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu_EndOpen__);
    byte_4C3E718 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerMenu__createSelectEffect((SoundPlayerMenu_o *)_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_33;
  if ( !v6->fields.state )
  {
    opened_act = this->fields.opened_act;
    v6->fields.openedAct = opened_act;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.openedAct, (int32_t)opened_act, v4, v5);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    callback = this->fields.callback;
    *((_QWORD *)_4__this + 19) = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)_4__this + 152), (int32_t)callback, v8, v9);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_33;
    _4__this = v11->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_33;
    _4__this = v13->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, v12);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_33;
    _4__this = v15->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__SetMode_33905088((SoundPlayerListViewManager_o *)_4__this, 1, v14);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerMenu__setCanPlaySoundDisp((SoundPlayerMenu_o *)_4__this, v16);
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_33;
    v6->fields.state = 1;
  }
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v6, Method_SoundPlayerMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)v6, v17, 0);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_33;
  baseWindow = (UnityEngine_Object_o *)v18->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (void *)UnityEngine_Object__op_Inequality(baseWindow, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_30;
  v21 = this->fields.__4__this;
  if ( !v21 || (_4__this = v21->fields.baseWindow) == 0 )
LABEL_33:
    sub_1C372B4(_4__this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_33;
    LODWORD(Component_object[3].monitor) = 1045220557;
    LODWORD(Component_object[2].klass) = 2;
  }
LABEL_30:
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_33;
  _4__this = v23->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v23->fields.isNewList,
    v23->fields.playSoundName,
    v20);
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
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  struct SoundPlayerMenu_o *v9; // x8

  v3 = this;
  if ( (byte_4C3E719 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu_endPurchaseRequest__);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C3E719 = 1;
  }
  item = v3->fields.item;
  if ( !item )
    goto LABEL_13;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_13;
  shopId = bgmEntity->fields.shopId;
  if ( shopId )
  {
    _4__this = (Il2CppObject *)v3->fields.__4__this;
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v8, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v8,
                                                        (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v9 = v3->fields.__4__this;
    if ( v9 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v9->fields.PURCHASE_NUM, 0, 0, 0);
      return;
    }
LABEL_13:
    sub_1C372B4(this);
  }
  this = (SoundPlayerMenu___c__DisplayClass34_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)this, (System_String_o *)StringLiteral_22382/*"ok"*/, v2);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4C3E71A & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1C37058(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4C3E71A = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = _4__this[6].klass,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C372A4(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v6),
        !klass) )
  {
    sub_1C372B4(this);
  }
  klass->vtable[3].method = (const MethodInfo *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&klass->vtable[3].method, (int32_t)v5, v7, v8);
  SoundPlayerListViewManager__SetMode_33905088((SoundPlayerListViewManager_o *)klass, 2, v9);
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
    sub_1C372B4(_4__this);
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
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v4; // x0
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v6; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_WaitUntil_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v16; // x0
  CGThumbnailListItem_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *klass; // x20
  int32_t v22; // w1

  if ( (byte_4C3E71B & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__);
    sub_1C37058(&SoundPlayerMenu___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E71B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
    if ( !_4__this )
      sub_1C372B4(v16);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = (CGThumbnailListItem_o *)&_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0) )
    {
      klass = (System_String_o *)p_backupBgmName->klass;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(klass, 0);
    }
    v22 = StringLiteral_1/*""*/;
    p_backupBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
    sub_1C36FFC(p_backupBgmName, v22, v19, v20);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v4 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__41_0 = v4->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SoundPlayerMenu___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__41_0, v6, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v8, v9);
  }
  v10 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, _9__41_0, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v10, v12, v13);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_String_o *BgmName; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_String_o *playSoundName; // x1
  struct SoundPlayerListViewItem_o *item; // x21
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  SoundPlayerMenu___c_c *v20; // x0
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v22; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_WaitUntil_o *v26; // x21
  Il2CppObject **v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *backupBgmName; // x19

  if ( (byte_4C3E71C & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_SoundPlayerMenu___c__trialListening_b__39_0__);
    sub_1C37058(&SoundPlayerMenu___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C3E71C = 1;
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
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      BgmName = SoundManager__getBgmName(0);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = BgmName;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.backupBgmName, (int32_t)BgmName, v6, v7);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0) )
        {
          playSoundName = _4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = playSoundName;
          sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.backupBgmName, (int32_t)playSoundName, v8, v9);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_4C3E6D9 & 1) == 0 )
          {
            sub_1C37058(&StringLiteral_1/*""*/);
            byte_4C3E6D9 = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v15 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v15, LISTENING_TIME, 0);
          this->fields.__2__current = (Il2CppObject *)v15;
          p__2__current = &this->fields.__2__current;
          sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v15, v17, v18);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_1C372B4(BgmName);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !BgmManager__get_IsBusy(0) )
  {
LABEL_31:
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
    if ( !_4__this )
      goto LABEL_40;
    if ( !System_String__IsNullOrEmpty(_4__this->fields.backupBgmName, 0) )
    {
      backupBgmName = _4__this->fields.backupBgmName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(backupBgmName, 0);
    }
    _4__this->fields.retTrialListening = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.retTrialListening, 0, v30, v31);
    return 0;
  }
  v20 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v20 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__39_0 = v20->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = SoundPlayerMenu___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__39_0, v22, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = _9__39_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v24, v25);
  }
  v26 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v26, _9__39_0, 0);
  this->fields.__2__current = (Il2CppObject *)v26;
  v27 = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)v27, (int32_t)v26, v28, v29);
  *((_DWORD *)v27 - 2) = 2;
  return 1;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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