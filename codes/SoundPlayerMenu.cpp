void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B401FD & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerMenu_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_12905/*"SoundPlayerNewKey"*/, v4);
    byte_4B401FD = 1;
  }
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_12905/*"SoundPlayerNewKey"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)SoundPlayerMenu_TypeInfo->static_fields, StringLiteral_12905/*"SoundPlayerNewKey"*/, v2, v3);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B401FC & 1) == 0 )
  {
    sub_1BDB878(&BaseMenu_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B401FC = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.playSoundName, v8, v2, v3);
  v9 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.isNewList, (int32_t)v9, v10, v11);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B401EE & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4B401EE = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BDBAC4(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v6);
  if ( !soundPlayerListViewManager )
    sub_1BDBAD4(v7, v8);
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  SoundPlayerListViewManager__SetMode_32954236(soundPlayerListViewManager, 2, v11);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_4B401E9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B401E9 = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.retTrialListening, 0, v2, v3);
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.backupBgmName, v5, v6, v7);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_1BDBAD4(soundPlayerListViewManager, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__InitPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
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
void __fastcall SoundPlayerMenu__OnSelectSound(
        SoundPlayerMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  SoundPlayerListViewItem_o *v14; // x20
  int32_t playSoundIdx; // w22
  int *isNewList; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct BgmEntity_o *v30; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v32; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v35; // x21
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2

  if ( (byte_4B401EF & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1BDB878(&SoundManager_TypeInfo, v9);
    sub_1BDB878(&Method_SoundPlayerMenu_OnSelectSound__, v10);
    byte_4B401EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v14 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v12);
      SoundPlayerMenu__createOpenDlg(this, v14, v19);
      v20 = Method_SoundPlayerMenu_OnSelectSound__;
      if ( (*((_BYTE *)Method_SoundPlayerMenu_OnSelectSound__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BDB890(Method_SoundPlayerMenu_OnSelectSound__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = (int *)SoundPlayerMenu__getItem(this, playSoundIdx, v13);
      if ( isNewList )
      {
        *((_BYTE *)isNewList + 121) = 0;
        SoundPlayerListViewItem__applyUi((SoundPlayerListViewItem_o *)isNewList, v17);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0LL);
        SoundPlayerMenu__resetPlaySoundData(this, v18);
      }
      else
      {
        bgmEntity = v14->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v14->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v14, v17);
        SoundPlayerListViewItem__applyUi(v14, v24);
        isNewList = (int *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v27 = *((_QWORD *)isNewList + 2);
          v28 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v27 )
            goto LABEL_36;
          v29 = isNewList[6];
          if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v29 + 1;
            *(_DWORD *)(v27 + 4 * v29 + 32) = id;
          }
        }
        if ( (byte_4B401C3 & 1) == 0 )
        {
          sub_1BDB878(&StringLiteral_1/*""*/, v17);
          byte_4B401C3 = 1;
        }
        v30 = v14->fields.bgmEntity;
        if ( v30 )
          p_fileName = &v30->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v32 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.playSoundName, (int32_t)v32, v25, v26);
        playSoundName = this->fields.playSoundName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(playSoundName, 0LL);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v35 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BDBAC4(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v36);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v35, v37, v38);
        SoundPlayerListViewManager__SetMode_32954236(soundPlayerListViewManager, 2, v39);
        return;
      }
LABEL_36:
      sub_1BDBAD4(isNewList, v17);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_1BDBAD4(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4B401FE & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4B401FE = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v6 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BDBAC4(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v7),
        !soundPlayerListViewManager) )
  {
    sub_1BDBAD4(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v6, v8, v9);
  SoundPlayerListViewManager__SetMode_32954236(soundPlayerListViewManager, 2, v10);
}


void __fastcall SoundPlayerMenu__add_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
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

  if ( (byte_4B401E7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B401E7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1BDBD94(v8);
  SoundPlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SoundPlayerMenu_c *v6; // x0
  System_String_o *String; // x20
  System_String_array *IsNullOrEmpty; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  int v11; // w9
  System_String_array *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x2
  struct System_Collections_Generic_List_int__o *v16; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  __int64 v20; // x1

  if ( (byte_4B401EB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, v3);
    sub_1BDB878(&SoundPlayerMenu_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B401EB = 1;
  }
  v6 = SoundPlayerMenu_TypeInfo;
  if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
    v6 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v6->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    isNewList = this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_20;
    v11 = isNewList->fields._version + 1;
    isNewList->fields._size = 0;
    isNewList->fields._version = v11;
    if ( !String )
      goto LABEL_20;
    IsNullOrEmpty = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    v12 = IsNullOrEmpty;
    if ( (int)*(_QWORD *)&IsNullOrEmpty->max_length >= 1 )
    {
      v13 = 0LL;
      v14 = (unsigned int)*(_QWORD *)&IsNullOrEmpty->max_length - 1LL;
      while ( 1 )
      {
        IsNullOrEmpty = (System_String_array *)System_Int32__Parse(v12->m_Items[v13], 0LL);
        v16 = this->fields.isNewList;
        if ( !v16 )
          break;
        items = v16->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        v20 = (unsigned int)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size + 1] = (int)IsNullOrEmpty;
        }
        if ( v14 == v13 )
          return;
        if ( ++v13 >= (unsigned __int64)v12->max_length )
          sub_1BDBADC(IsNullOrEmpty, v20, v15);
      }
LABEL_20:
      sub_1BDBAD4(IsNullOrEmpty, v9);
    }
  }
}


void __fastcall SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *Item; // x0
  __int64 v8; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o **v11; // x20

  if ( (byte_4B401F1 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&SoundPlayerListViewObject_TypeInfo, v4);
    byte_4B401F1 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v6);
    if ( !Item )
      goto LABEL_22;
    monitor = Item[4].monitor;
    if ( monitor
      && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == SoundPlayerListViewObject_TypeInfo )
        v11 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v11 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v11[17], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 Item,
                                                 (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_1BDBAD4(Item, v8);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B401FA & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method);
    byte_4B401FA = 1;
  }
  v3 = sub_1BDBAC4(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *v3; // x20
  SoundPlayerMenu_o *v4; // x24
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct BgmEntity_o *bgmEntity; // x8
  Il2CppObject *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  struct BgmEntity_o *v30; // x20
  System_String_o *v31; // x21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v33; // x24
  SoundPlayerMenu_o *v34; // x21
  UserItemMaster_o *v35; // x25
  __int64 v36; // x2
  Il2CppObject *v37; // x8
  Il2CppClass *klass; // x9
  const char *namespaze; // x9
  SoundPlayerMenu_o *v40; // x22
  char v41; // w20
  __int64 v42; // x22
  System_String_o *v43; // x23
  Il2CppClass *v44; // x8
  unsigned __int64 v45; // x29
  SoundPlayerMenu_o *v46; // x27
  Il2CppClass *v47; // x8
  int closeTransform; // w8
  Il2CppClass *v49; // x8
  Il2CppClass *v50; // x8
  Il2CppObject *v51; // x28
  Il2CppObject *CountText; // x29
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  bool v57; // w24
  System_String_o *v58; // x25
  System_String_o *v59; // x26
  const MethodInfo *v60; // x3
  SoundPlayerMenu_o *v61; // x27
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  System_String_o *v68; // x23
  System_String_o *v69; // x25
  Il2CppObject *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v71; // x27
  SoundPlayerMenu_o *v72; // [xsp+60h] [xbp-90h]
  System_String_o *title; // [xsp+68h] [xbp-88h]
  Il2CppObject *object; // [xsp+70h] [xbp-80h]
  __int64 v75; // [xsp+78h] [xbp-78h]
  UserItemEntity_o *v76; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_4B401FB & 1) == 0 )
  {
    sub_1BDB878(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, item);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&Method_SoundPlayerMenu_openCheckDlgCallback__, v13);
    sub_1BDB878(&string___TypeInfo, v14);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v15);
    sub_1BDB878(&StringLiteral_12228/*"SOUNDPLAYER_OPEN_CHECK"*/, v16);
    sub_1BDB878(&StringLiteral_12226/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, v17);
    sub_1BDB878(&StringLiteral_12224/*"SOUNDPLAYER_DIALOG_OK"*/, v18);
    sub_1BDB878(&StringLiteral_12227/*"SOUNDPLAYER_ITEM_DISP"*/, v19);
    sub_1BDB878(&StringLiteral_12222/*"SOUNDPLAYER_DIALOG_CANCEL"*/, v20);
    sub_1BDB878(&StringLiteral_1/*""*/, v21);
    sub_1BDB878(&StringLiteral_88/*"\r"*/, v22);
    sub_1BDB878(&StringLiteral_12225/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, v23);
    sub_1BDB878(&StringLiteral_12233/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, v24);
    this = (SoundPlayerMenu_o *)sub_1BDB878(&StringLiteral_12223/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v25);
    byte_4B401FB = 1;
  }
  v76 = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_76;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)System_String__Replace_62618808(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_88/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_76;
  v27 = (Il2CppObject *)System_String__Replace_62618808(
                          (System_String_o *)this,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v29 = System_String__Format(v28, v27, 0LL);
  v30 = v3->fields.bgmEntity;
  v31 = v29;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  object = (Il2CppObject *)v4;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v30 )
    goto LABEL_76;
  title = v31;
  if ( !MasterData_object )
    goto LABEL_76;
  v34 = (SoundPlayerMenu_o *)StringLiteral_1/*""*/;
  v35 = (UserItemMaster_o *)this;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         v30->fields.shopId,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
    v37 = entity;
    if ( !entity )
      goto LABEL_76;
    klass = entity[2].klass;
    if ( !klass )
      goto LABEL_76;
    namespaze = klass->_1.namespaze;
    v40 = this;
    if ( (int)namespaze < 1 )
    {
      v41 = 0;
      v43 = (System_String_o *)v34;
    }
    else
    {
      v72 = this;
      v75 = 1LL - (unsigned int)namespaze;
      v41 = 0;
      v42 = 8LL;
      v43 = (System_String_o *)v34;
      while ( 1 )
      {
        v44 = v37[2].klass;
        if ( !v44 )
          goto LABEL_76;
        v45 = v42 - 8;
        if ( v42 - 8 >= (unsigned __int64)LODWORD(v44->_1.namespaze) )
          goto LABEL_77;
        if ( !v33 )
          goto LABEL_76;
        this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(
                                      (ItemMaster_o *)v33,
                                      *((_DWORD *)&v44->_1.image + v42),
                                      -1,
                                      0LL);
        if ( this )
        {
          v46 = this;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B3ED56 )
          {
            sub_1BDB878(&NetworkManager_TypeInfo, item);
            byte_4B3ED56 = 1;
          }
          this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          }
          if ( !entity )
            goto LABEL_76;
          v47 = entity[2].klass;
          if ( !v47 )
            goto LABEL_76;
          if ( v45 >= LODWORD(v47->_1.namespaze) )
            goto LABEL_77;
          if ( !v35 )
            goto LABEL_76;
          this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                        v35,
                                        &v76,
                                        *(_QWORD *)&this->fields.playSoundName[2].fields,
                                        *((_DWORD *)&v47->_1.image + v42),
                                        0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v76 )
              goto LABEL_76;
            item = (SoundPlayerListViewItem_o *)(unsigned int)v76->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
            closeTransform = (int)v46->fields.closeTransform;
            if ( closeTransform == 5 )
            {
              if ( !this )
                goto LABEL_76;
              item = (SoundPlayerListViewItem_o *)LODWORD(this->fields.retTrialListening);
            }
            else if ( closeTransform == 22 )
            {
              if ( !this )
                goto LABEL_76;
              item = (SoundPlayerListViewItem_o *)HIDWORD(this->fields.retTrialListening);
            }
            else
            {
              item = 0LL;
            }
          }
          if ( !entity )
            goto LABEL_76;
          v49 = entity[5].klass;
          if ( !v49 )
            goto LABEL_76;
          if ( v45 >= LODWORD(v49->_1.namespaze) )
            goto LABEL_77;
          if ( (int)item < *((_DWORD *)&v49->_1.image + v42) )
            v41 = 1;
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v46->fields.closeTransform, (int32_t)item, 0LL);
          if ( !entity )
            goto LABEL_76;
          v50 = entity[5].klass;
          if ( !v50 )
            goto LABEL_76;
          if ( v45 >= LODWORD(v50->_1.namespaze) )
            goto LABEL_77;
          v51 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v46->fields.closeTransform,
                                        *((_DWORD *)&v50->_1.image + v42),
                                        0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v54 = System_String__Format_62613552(v53, (Il2CppObject *)v46->fields.m_CancellationTokenSource, v51, 0LL);
          v43 = System_String__Concat_62572260(v43, v54, 0LL);
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v56 = System_String__Format_62613552(
                  v55,
                  (Il2CppObject *)v46->fields.m_CancellationTokenSource,
                  CountText,
                  0LL);
          this = (SoundPlayerMenu_o *)System_String__Concat_62572260((System_String_o *)v34, v56, 0LL);
          v34 = this;
        }
        if ( v75 + v42 == 8 )
          break;
        v37 = entity;
        ++v42;
        if ( !entity )
          goto LABEL_76;
      }
      v40 = v72;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12226/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
    v57 = v41 & 1;
  }
  else
  {
    v57 = 0;
    v58 = (System_String_o *)v34;
    v43 = (System_String_o *)v34;
    v40 = v34;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12228/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_76;
  v61 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_77;
  this->fields.basePanelList = (struct UIPanel_array *)v40;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.basePanelList, (int32_t)v40, v36, v60);
  if ( LODWORD(v61->fields.m_CancellationTokenSource) <= 1
    || (v61->fields.baseWindow = (struct UnityEngine_GameObject_o *)v43,
        sub_1BDB81C((CGThumbnailListItem_o *)&v61->fields.baseWindow, (int32_t)v43, v36, v62),
        LODWORD(v61->fields.m_CancellationTokenSource) <= 2)
    || (v61->fields.closeTransform = (struct UnityEngine_Transform_o *)v58,
        sub_1BDB81C((CGThumbnailListItem_o *)&v61->fields.closeTransform, (int32_t)v58, v36, v63),
        LODWORD(v61->fields.m_CancellationTokenSource) <= 3)
    || (v61->fields.enterTransform = (struct UnityEngine_Transform_o *)v34,
        sub_1BDB81C((CGThumbnailListItem_o *)&v61->fields.enterTransform, (int32_t)v34, v36, v64),
        LODWORD(v61->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_77:
    sub_1BDBADC(this, item, v36);
  }
  *(_QWORD *)&v61->fields.isBasePosition = v59;
  sub_1BDB81C((CGThumbnailListItem_o *)&v61->fields.isBasePosition, (int32_t)v59, v36, v65);
  v66 = System_String__Concat_62612776((System_String_array *)v61, 0LL);
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v71 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1BDBAC4(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v71, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance
    || (CommonUI__OpenTripleButtonDlg(
          (CommonUI_o *)Instance,
          title,
          v66,
          v67,
          v68,
          v69,
          v71,
          30,
          10,
          10,
          1,
          0,
          8,
          1,
          0,
          0,
          0,
          0,
          0LL),
        (this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_76:
    sub_1BDBAD4(this, item);
  }
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v57, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  Il2CppObject *EffetData; // x21
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B401F0 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_18866/*"ef_soundchoice"*/, v4);
    byte_4B401F0 = 1;
  }
  SoundPlayerMenu__releaseSelectEffect(this, method);
  p_selectEffect = &this->fields.selectEffect;
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_15;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  soundPlayerListViewManager,
                                  (System_String_o *)StringLiteral_18866/*"ef_soundchoice"*/,
                                  v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object_(
              EffetData,
              (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v11;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectEffect, (int32_t)v11, v12, v13);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_35216896(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_15:
      sub_1BDBAD4(soundPlayerListViewManager, v7);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4B401F2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B401F2 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v5 = this->fields.selectEffect;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    GameObjectExtensions__SafeSetParent_35216896(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  struct SoundPlayerListViewManager_o *v27; // x8
  const MethodInfo *v28; // x2
  SoundPlayerListViewItem_o *Item; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  __int64 v33; // x8
  Il2CppObject *v34; // x20
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v38; // x22

  if ( (byte_4B401F6 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, result);
    sub_1BDB878(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BDB878(&Method_SoundPlayerMenu_OnSelectSound__, v8);
    sub_1BDB878(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v9);
    sub_1BDB878(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v11);
    sub_1BDB878(&StringLiteral_12232/*"SOUNDPLAYER_SOUND_OPEN"*/, v12);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v13);
    sub_1BDB878(&StringLiteral_1/*""*/, v14);
    sub_1BDB878(&StringLiteral_88/*"\r"*/, v15);
    byte_4B401F6 = 1;
  }
  v16 = sub_1BDBAC4(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  v17 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v18);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v22 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BDBAC4(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v23);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v22;
      sub_1BDB81C((CGThumbnailListItem_o *)&soundPlayerListViewManager->fields.callbackFunc, (int32_t)v22, v24, v25);
      SoundPlayerListViewManager__SetMode_32954236(soundPlayerListViewManager, 2, v26);
      return;
    }
LABEL_16:
    sub_1BDBAD4(v17, v18);
  }
  v27 = this->fields.soundPlayerListViewManager;
  if ( !v27 )
    goto LABEL_16;
  ++v27->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v18);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v28);
  *(_QWORD *)(v16 + 24) = Item;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)Item, v30, v31);
  v32 = *(_QWORD *)(v16 + 24);
  if ( !v32 )
    goto LABEL_16;
  v33 = *(_QWORD *)(v32 + 112);
  if ( !v33 )
    goto LABEL_16;
  v17 = *(System_String_o **)(v33 + 32);
  if ( !v17 )
    goto LABEL_16;
  v17 = System_String__Replace_62618808(
          v17,
          (System_String_o *)StringLiteral_88/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v17 )
    goto LABEL_16;
  v34 = (Il2CppObject *)System_String__Replace_62618808(
                          v17,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v36 = System_String__Format(v35, v34, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v16,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v36,
    v38,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0.0,
    0,
    0LL);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerMenu__getItem(
        SoundPlayerMenu_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0

  if ( (idx & 0x80000000) != 0 )
    return 0LL;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_1BDBAD4(0LL, idx);
  return SoundPlayerListViewManager__GetItem(soundPlayerListViewManager, idx, method);
}


System_String_o *__fastcall SoundPlayerMenu__getPlaySoundName(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  return this->fields.playSoundName;
}


void __fastcall SoundPlayerMenu__hideMenu(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_1BDBAD4(0LL, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  __int64 size; // x20
  System_String_array *v9; // x21
  unsigned __int64 v10; // x22
  CGThumbnailListItem_o *m_Items; // x23
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  SoundPlayerMenu_c *v15; // x8
  System_String_o *v16; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4B401EC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1BDB878(&SoundPlayerMenu_TypeInfo, v4);
    sub_1BDB878(&string___TypeInfo, v5);
    this = (SoundPlayerMenu_o *)sub_1BDB878(&StringLiteral_820/*","*/, v6);
    byte_4B401EC = 1;
  }
  Item = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_14:
    sub_1BDBAD4(this, method);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = (System_String_array *)sub_1BDB920(string___TypeInfo, (unsigned int)size);
    v10 = 0LL;
    m_Items = (CGThumbnailListItem_o *)v9->m_Items;
    do
    {
      this = (SoundPlayerMenu_o *)v2->fields.isNewList;
      if ( !this )
        goto LABEL_14;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)this,
               v10,
               (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0LL);
      if ( !v9 )
        goto LABEL_14;
      if ( v10 >= v9->max_length )
        sub_1BDBADC(this, method, v12);
      m_Items->klass = (CGThumbnailListItem_c *)this;
      sub_1BDB81C(m_Items, (int32_t)this, v12, v13);
      ++v10;
      m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
    }
    while ( size != v10 );
    v14 = System_String__Join((System_String_o *)StringLiteral_820/*","*/, v9, 0LL);
    v15 = SoundPlayerMenu_TypeInfo;
    v16 = v14;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v15 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v15->static_fields->SOUND_PLAYER_NEW_KEY, v16, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2

  if ( (byte_4B401ED & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, opened_act);
    sub_1BDB878(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v7);
    sub_1BDB878(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v8);
    byte_4B401ED = 1;
  }
  v9 = sub_1BDBAC4(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = opened_act;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)opened_act, v14, v15);
  *(_QWORD *)(v9 + 32) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)callback, v16, v17);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_1BDBAD4(v10, v11);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  SoundPlayerListViewItem_o *Item; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v22; // x0
  __int64 *v23; // x8
  const MethodInfo *v24; // x1
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v32; // x21

  if ( (byte_4B401F4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BDB878(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_SoundPlayerMenu_openCheckDlgCallback__, v7);
    sub_1BDB878(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v8);
    sub_1BDB878(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v9);
    sub_1BDB878(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v10);
    byte_4B401F4 = 1;
  }
  v11 = sub_1BDBAC4(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v16);
  *(_QWORD *)(v11 + 16) = Item;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Item, v18, v19);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v20);
      SoundPlayerMenu__detachSelectEffect(this, v24);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      v23 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_9:
      v25 = v22;
      System_Action___ctor(v22, (Il2CppObject *)v11, *v23, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v25, 0LL);
        return;
      }
LABEL_14:
      sub_1BDBAD4(v12, v13);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v20);
      v27 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v11 + 16), v26);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
      this->fields.retTrialListening = started;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.retTrialListening, (int32_t)started, v29, v30);
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v32 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1BDBAC4(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( !v31 )
        goto LABEL_14;
      CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v31, v32, 0LL);
      break;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v20);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      v23 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_9;
  }
}


void __fastcall SoundPlayerMenu__openEvent(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *maskColl; // x0
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4B401F7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, item);
    sub_1BDB878(&Method_SoundPlayerMenu__openEvent_b__37_0__, v5);
    byte_4B401F7 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_1BDBAD4(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v7, v8);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B401F3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B401F3 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = (CGThumbnailListItem_o *)&this->fields.selectEffect;
  v4 = (UnityEngine_Object_o *)selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_selectEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(klass, 0LL);
    p_selectEffect->klass = 0LL;
    sub_1BDB81C(p_selectEffect, 0, v7, v8);
  }
}


void __fastcall SoundPlayerMenu__remove_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B401E8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B401E8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1BDBD94(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B401EA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B401EA = 1;
  }
  this->fields.playSoundIdx = -1;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.playSoundName, v5, v2, v3);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *canPlaySoundCnt; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct SoundPlayerListViewManager_o *v18; // x8
  Il2CppObject *v19; // x19
  Il2CppObject *v20; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B401F5 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_12229/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, v4);
    sub_1BDB878(&StringLiteral_12230/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, v5);
    byte_4B401F5 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v7, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_10;
  v14 = v7;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum, v10, v11, v12);
  v18 = this->fields.soundPlayerListViewManager;
  if ( !v18
    || (v19 = (Il2CppObject *)v7,
        playSoundMax = v18->fields.playSoundMax,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax, v15, v16, v17),
        v7 = System_String__Format_62613552(v14, v19, v20, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_1BDBAD4(v7, v8);
  }
  UILabel__set_text(canPlaySoundCnt, v7, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *retTrialListening; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *v9; // x1
  CGThumbnailListItem_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *klass; // x20
  int32_t v15; // w1

  if ( (byte_4B401F9 & 1) == 0 )
  {
    sub_1BDB878(&BgmManager_TypeInfo, method);
    sub_1BDB878(&SoundManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B401F9 = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70270392((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.retTrialListening, 0, v6, v7);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v9 = SoundPlayerMenu__busyWaitStopBgm(this, v8);
      UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
    }
    else
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = (CGThumbnailListItem_o *)&this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
      {
        klass = (System_String_o *)p_backupBgmName->klass;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(klass, 0LL);
      }
      v15 = (int)StringLiteral_1/*""*/;
      p_backupBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      sub_1BDB81C(p_backupBgmName, v15, v12, v13);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B401F8 & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerMenu__trialListening_d__39_TypeInfo, item);
    byte_4B401F8 = 1;
  }
  v5 = sub_1BDBAC4(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = item;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)item, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B401FF & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerMenu___c_TypeInfo, v1);
    byte_4B401FF = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)SoundPlayerMenu___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4B40201 & 1) == 0 )
  {
    sub_1BDB878(&BgmManager_TypeInfo, method);
    byte_4B40201 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4B40200 & 1) == 0 )
  {
    sub_1BDB878(&BgmManager_TypeInfo, method);
    byte_4B40200 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass27_0___ctor(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass27_0___open_b__0(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *_4__this; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct SoundPlayerMenu_o *v9; // x20
  struct System_Action_o *opened_act; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Action_o *callback; // x1
  struct SoundPlayerMenu_o *v14; // x8
  struct SoundPlayerMenu_o *v15; // x8
  const MethodInfo *v16; // x2
  struct SoundPlayerMenu_o *v17; // x8
  System_Action_o *v18; // x21
  struct SoundPlayerMenu_o *v19; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v21; // x3
  struct SoundPlayerMenu_o *v22; // x8
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v24; // x8

  if ( (byte_4B40202 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&Method_SoundPlayerMenu_EndOpen__, v5);
    byte_4B40202 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerMenu__createSelectEffect((SoundPlayerMenu_o *)_4__this, method);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_33;
  if ( !v9->fields.state )
  {
    opened_act = this->fields.opened_act;
    v9->fields.openedAct = opened_act;
    sub_1BDB81C((CGThumbnailListItem_o *)&v9->fields.openedAct, (int32_t)opened_act, v7, v8);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    callback = this->fields.callback;
    *((_QWORD *)_4__this + 19) = callback;
    sub_1BDB81C((CGThumbnailListItem_o *)((char *)_4__this + 152), (int32_t)callback, v11, v12);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_33;
    _4__this = v14->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_33;
    _4__this = v15->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, method);
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_33;
    _4__this = v17->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__SetMode_32954236((SoundPlayerListViewManager_o *)_4__this, 1, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerMenu__setCanPlaySoundDisp((SoundPlayerMenu_o *)_4__this, method);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_33;
    v9->fields.state = 1;
  }
  v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v9, Method_SoundPlayerMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)v9, v18, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_33;
  baseWindow = (UnityEngine_Object_o *)v19->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (void *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_30;
  v22 = this->fields.__4__this;
  if ( !v22 || (_4__this = v22->fields.baseWindow) == 0LL )
LABEL_33:
    sub_1BDBAD4(_4__this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_33;
    LODWORD(Component_object[3].monitor) = 1045220557;
    LODWORD(Component_object[2].klass) = 2;
  }
LABEL_30:
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_33;
  _4__this = v24->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v24->fields.isNewList,
    v24->fields.playSoundName,
    v21);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___ctor(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__0(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SoundPlayerMenu___c__DisplayClass34_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  struct SoundPlayerMenu_o *v13; // x8

  v3 = this;
  if ( (byte_4B40203 & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BDB878(&Method_SoundPlayerMenu_endPurchaseRequest__, v6);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1BDB878(&StringLiteral_22401/*"ok"*/, v7);
    byte_4B40203 = 1;
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
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v12,
                                                        (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v13 = v3->fields.__4__this;
    if ( v13 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v13->fields.PURCHASE_NUM, 0, 0, 0LL);
      return;
    }
LABEL_13:
    sub_1BDBAD4(this, method);
  }
  this = (SoundPlayerMenu___c__DisplayClass34_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)this, (System_String_o *)StringLiteral_22401/*"ok"*/, v2);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  Il2CppClass *klass; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_4B40204 & 1) == 0 )
  {
    sub_1BDB878(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1BDB878(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4B40204 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = _4__this[6].klass,
        v6 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BDBAC4(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v6,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v7),
        !klass) )
  {
    sub_1BDBAD4(this, method);
  }
  klass->vtable[4].methodPtr = (Il2CppMethodPointer)v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&klass->vtable[4], (int32_t)v6, v8, v9);
  SoundPlayerListViewManager__SetMode_32954236((SoundPlayerListViewManager_o *)klass, 2, v10);
}


void __fastcall SoundPlayerMenu___c__DisplayClass36_0___ctor(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass36_0___endPurchaseRequest_b__0(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu_o *_4__this; // x0
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this || (SoundPlayerMenu__detachSelectEffect(_4__this, method), (_4__this = this->fields.__4__this) == 0LL) )
    sub_1BDBAD4(_4__this, method);
  SoundPlayerMenu__openEvent(_4__this, this->fields.item, v4);
}


void __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41___ctor(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__MoveNext(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v9; // x0
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v11; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_WaitUntil_o *v15; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  CGThumbnailListItem_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *klass; // x20
  int32_t v28; // w1

  if ( (byte_4B40205 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&SoundManager_TypeInfo, v3);
    sub_1BDB878(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v4);
    sub_1BDB878(&SoundPlayerMenu___c_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B40205 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      sub_1BDBAD4(v21, v22);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = (CGThumbnailListItem_o *)&_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      klass = (System_String_o *)p_backupBgmName->klass;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(klass, 0LL);
    }
    v28 = (int)StringLiteral_1/*""*/;
    p_backupBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
    sub_1BDB81C(p_backupBgmName, v28, v25, v26);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v9 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v9 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__41_0 = v9->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = SoundPlayerMenu___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__41_0, v11, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v13, v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, (int32_t)v15, v17, v18);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_IDisposable_Dispose(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SoundPlayerMenu__trialListening_d__39___ctor(
        SoundPlayerMenu__trialListening_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SoundPlayerMenu__trialListening_d__39__MoveNext(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_String_o *BgmName; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_o *playSoundName; // x1
  struct SoundPlayerListViewItem_o *item; // x21
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool result; // w0
  SoundPlayerMenu___c_c *v27; // x0
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v29; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_WaitUntil_o *v33; // x21
  Il2CppObject **v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *backupBgmName; // x19

  if ( (byte_4B40206 & 1) == 0 )
  {
    sub_1BDB878(&BgmManager_TypeInfo, method);
    sub_1BDB878(&System_Func_bool__TypeInfo, v3);
    sub_1BDB878(&SoundManager_TypeInfo, v4);
    sub_1BDB878(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v5);
    sub_1BDB878(&SoundPlayerMenu___c_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_4B40206 = 1;
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
      BgmName = SoundManager__getBgmName(0LL);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = BgmName;
        sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.backupBgmName, (int32_t)BgmName, v13, v14);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          playSoundName = _4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = playSoundName;
          sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.backupBgmName, (int32_t)playSoundName, v15, v16);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0LL);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_4B401C3 & 1) == 0 )
          {
            sub_1BDB878(&StringLiteral_1/*""*/, v12);
            byte_4B401C3 = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v22 = (UnityEngine_WaitForSeconds_o *)sub_1BDBAC4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v22, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = &this->fields.__2__current;
          sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, (int32_t)v22, v24, v25);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_1BDBAD4(BgmName, v12);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !BgmManager__get_IsBusy(0LL) )
  {
LABEL_31:
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      goto LABEL_40;
    if ( !System_String__IsNullOrEmpty(_4__this->fields.backupBgmName, 0LL) )
    {
      backupBgmName = _4__this->fields.backupBgmName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(backupBgmName, 0LL);
    }
    _4__this->fields.retTrialListening = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.retTrialListening, 0, v37, v38);
    return 0;
  }
  v27 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v27 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__39_0 = v27->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = SoundPlayerMenu___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__39_0, v29, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = _9__39_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v31, v32);
  }
  v33 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v33, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v33;
  v34 = &this->fields.__2__current;
  sub_1BDB81C((CGThumbnailListItem_o *)v34, (int32_t)v33, v35, v36);
  *((_DWORD *)v34 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall SoundPlayerMenu__trialListening_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SoundPlayerMenu__trialListening_d__39__System_IDisposable_Dispose(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  ;
}