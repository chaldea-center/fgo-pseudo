void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4BD7F35 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_13085/*"SoundPlayerNewKey"*/);
    byte_4BD7F35 = 1;
  }
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_13085/*"SoundPlayerNewKey"*/;
  sub_1C21DDC(SoundPlayerMenu_TypeInfo->static_fields, StringLiteral_13085/*"SoundPlayerNewKey"*/);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  void *v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20

  if ( (byte_4BD7F34 & 1) == 0 )
  {
    sub_1C21E38(&BaseMenu_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7F34 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v3 = StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(&this->fields.playSoundName, v3);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v4;
  sub_1C21DDC(&this->fields.isNewList, v4);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BD7F26 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4BD7F26 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v4 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C22084(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v5);
  if ( !soundPlayerListViewManager )
    sub_1C22094(v6, v7);
  soundPlayerListViewManager->fields.callbackFunc = v4;
  sub_1C21DDC(&soundPlayerListViewManager->fields.callbackFunc, v4);
  SoundPlayerListViewManager__SetMode_32708124(soundPlayerListViewManager, 2, v8);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  void *v3; // x1
  __int64 v4; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_4BD7F21 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7F21 = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0LL;
  sub_1C21DDC(&this->fields.retTrialListening, 0LL);
  v3 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(&this->fields.backupBgmName, v3);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_1C22094(soundPlayerListViewManager, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__OnSelectSound(
        SoundPlayerMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
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
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct BgmEntity_o *v24; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v26; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2

  if ( (byte_4BD7F27 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4BD7F27 = 1;
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
        v16 = (_QWORD *)sub_1C21E50(Method_SoundPlayerMenu_OnSelectSound__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = (int *)SoundPlayerMenu__getItem(this, playSoundIdx, v9);
      if ( isNewList )
      {
        *((_BYTE *)isNewList + 121) = 0;
        SoundPlayerListViewItem__applyUi((SoundPlayerListViewItem_o *)isNewList, v13);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0LL);
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
                (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v21 = *((_QWORD *)isNewList + 2);
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v21 )
            goto LABEL_36;
          v23 = isNewList[6];
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v23 + 1;
            *(_DWORD *)(v21 + 4 * v23 + 32) = id;
          }
        }
        if ( (byte_4BD7EFB & 1) == 0 )
        {
          sub_1C21E38(&StringLiteral_1/*""*/);
          byte_4BD7EFB = 1;
        }
        v24 = v10->fields.bgmEntity;
        if ( v24 )
          p_fileName = &v24->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v26 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_1C21DDC(&this->fields.playSoundName, v26);
        playSoundName = this->fields.playSoundName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(playSoundName, 0LL);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v29 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C22084(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v30);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v29;
        sub_1C21DDC(&soundPlayerListViewManager->fields.callbackFunc, v29);
        SoundPlayerListViewManager__SetMode_32708124(soundPlayerListViewManager, 2, v31);
        return;
      }
LABEL_36:
      sub_1C22094(isNewList, v13);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_1C22094(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4BD7F36 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4BD7F36 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C22084(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v6),
        !soundPlayerListViewManager) )
  {
    sub_1C22094(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_1C21DDC(&soundPlayerListViewManager->fields.callbackFunc, v5);
  SoundPlayerListViewManager__SetMode_32708124(soundPlayerListViewManager, 2, v7);
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

  if ( (byte_4BD7F1F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD7F1F = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1C22354(v8);
  SoundPlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_c *v3; // x0
  System_String_o *String; // x20
  System_String_array *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  int v8; // w9
  System_String_array *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  struct System_Collections_Generic_List_int__o *v12; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  __int64 v16; // x1

  if ( (byte_4BD7F23 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&SoundPlayerMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7F23 = 1;
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
             0LL);
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    isNewList = this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_20;
    v8 = isNewList->fields._version + 1;
    isNewList->fields._size = 0;
    isNewList->fields._version = v8;
    if ( !String )
      goto LABEL_20;
    IsNullOrEmpty = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    v9 = IsNullOrEmpty;
    if ( (int)*(_QWORD *)&IsNullOrEmpty->max_length >= 1 )
    {
      v10 = 0LL;
      v11 = (unsigned int)*(_QWORD *)&IsNullOrEmpty->max_length - 1LL;
      while ( 1 )
      {
        IsNullOrEmpty = (System_String_array *)System_Int32__Parse(v9->m_Items[v10], 0LL);
        v12 = this->fields.isNewList;
        if ( !v12 )
          break;
        items = v12->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        v16 = (unsigned int)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = (int)IsNullOrEmpty;
        }
        if ( v11 == v10 )
          return;
        if ( ++v10 >= (unsigned __int64)v9->max_length )
          sub_1C2209C(IsNullOrEmpty, v16);
      }
LABEL_20:
      sub_1C22094(IsNullOrEmpty, v6);
    }
  }
}


void __fastcall SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v4; // x2
  UnityEngine_GameObject_o *Item; // x0
  __int64 v6; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o **v9; // x20

  if ( (byte_4BD7F29 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SoundPlayerListViewObject_TypeInfo);
    byte_4BD7F29 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v4);
    if ( !Item )
      goto LABEL_22;
    monitor = Item[4].monitor;
    if ( monitor
      && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == SoundPlayerListViewObject_TypeInfo )
        v9 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v9 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v9[17], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 Item,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_1C22094(Item, v6);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4BD7F32 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
    byte_4BD7F32 = 1;
  }
  v3 = sub_1C22084(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *v3; // x20
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
  int closeTransform; // w8
  Il2CppClass *v27; // x8
  Il2CppClass *v28; // x8
  Il2CppObject *v29; // x28
  Il2CppObject *CountText; // x29
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  bool v35; // w24
  System_String_o *v36; // x25
  System_String_o *v37; // x26
  System_String_array *v38; // x27
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  System_String_o *v42; // x25
  Il2CppObject *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v44; // x27
  SoundPlayerMenu_o *v45; // [xsp+60h] [xbp-90h]
  System_String_o *title; // [xsp+68h] [xbp-88h]
  Il2CppObject *object; // [xsp+70h] [xbp-80h]
  __int64 v48; // [xsp+78h] [xbp-78h]
  UserItemEntity_o *v49; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_4BD7F33 & 1) == 0 )
  {
    sub_1C21E38(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_12416/*"SOUNDPLAYER_OPEN_CHECK"*/);
    sub_1C21E38(&StringLiteral_12414/*"SOUNDPLAYER_ITEM_COST_WARNING"*/);
    sub_1C21E38(&StringLiteral_12412/*"SOUNDPLAYER_DIALOG_OK"*/);
    sub_1C21E38(&StringLiteral_12415/*"SOUNDPLAYER_ITEM_DISP"*/);
    sub_1C21E38(&StringLiteral_12410/*"SOUNDPLAYER_DIALOG_CANCEL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_88/*"\r"*/);
    sub_1C21E38(&StringLiteral_12413/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/);
    sub_1C21E38(&StringLiteral_12421/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/);
    this = (SoundPlayerMenu_o *)sub_1C21E38(&StringLiteral_12411/*"SOUNDPLAYER_DIALOG_MIDDLE"*/);
    byte_4BD7F33 = 1;
  }
  v49 = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_76;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)System_String__Replace_63135104(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_88/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_76;
  v6 = (Il2CppObject *)System_String__Replace_63135104(
                         (System_String_o *)this,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v8 = System_String__Format(v7, v6, 0LL);
  v9 = v3->fields.bgmEntity;
  v10 = v8;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  object = (Il2CppObject *)v4;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
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
      v45 = this;
      v48 = 1LL - (unsigned int)namespaze;
      v19 = 0;
      v20 = 8LL;
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
                                      0LL);
        if ( this )
        {
          v24 = this;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
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
                                        &v49,
                                        *(_QWORD *)&this->fields.playSoundName[2].fields,
                                        *((_DWORD *)&v25->_1.image + v20),
                                        0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v49 )
              goto LABEL_76;
            item = (SoundPlayerListViewItem_o *)(unsigned int)v49->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
            closeTransform = (int)v24->fields.closeTransform;
            if ( closeTransform == 5 )
            {
              if ( !this )
                goto LABEL_76;
              item = (SoundPlayerListViewItem_o *)LODWORD(this->fields.playSoundName);
            }
            else if ( closeTransform == 22 )
            {
              if ( !this )
                goto LABEL_76;
              item = (SoundPlayerListViewItem_o *)HIDWORD(this->fields.playSoundName);
            }
            else
            {
              item = 0LL;
            }
          }
          if ( !entity )
            goto LABEL_76;
          v27 = entity[5].klass;
          if ( !v27 )
            goto LABEL_76;
          if ( v23 >= LODWORD(v27->_1.namespaze) )
            goto LABEL_77;
          if ( (int)item < *((_DWORD *)&v27->_1.image + v20) )
            v19 = 1;
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v24->fields.closeTransform, (int32_t)item, 0LL);
          if ( !entity )
            goto LABEL_76;
          v28 = entity[5].klass;
          if ( !v28 )
            goto LABEL_76;
          if ( v23 >= LODWORD(v28->_1.namespaze) )
            goto LABEL_77;
          v29 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v24->fields.closeTransform,
                                        *((_DWORD *)&v28->_1.image + v20),
                                        0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12415/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v32 = System_String__Format_63129848(v31, (Il2CppObject *)v24->fields.m_CancellationTokenSource, v29, 0LL);
          v21 = System_String__Concat_63115476(v21, v32, 0LL);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12415/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v34 = System_String__Format_63129848(
                  v33,
                  (Il2CppObject *)v24->fields.m_CancellationTokenSource,
                  CountText,
                  0LL);
          this = (SoundPlayerMenu_o *)System_String__Concat_63115476((System_String_o *)v13, v34, 0LL);
          v13 = this;
        }
        if ( v48 + v20 == 8 )
          break;
        v15 = entity;
        ++v20;
        if ( !entity )
          goto LABEL_76;
      }
      v18 = v45;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12414/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
    v35 = v19 & 1;
  }
  else
  {
    v35 = 0;
    v36 = (System_String_o *)v13;
    v21 = (System_String_o *)v13;
    v18 = v13;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12416/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_76;
  v38 = (System_String_array *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_77;
  this->fields.basePanelList = (struct UIPanel_array *)v18;
  this = (SoundPlayerMenu_o *)sub_1C21DDC(&this->fields.basePanelList, v18);
  if ( v38->max_length <= 1
    || (v38->m_Items[1] = v21, this = (SoundPlayerMenu_o *)sub_1C21DDC(&v38->m_Items[1], v21), v38->max_length <= 2)
    || (v38->m_Items[2] = v36, this = (SoundPlayerMenu_o *)sub_1C21DDC(&v38->m_Items[2], v36), v38->max_length <= 3)
    || (v38->m_Items[3] = (System_String_o *)v13,
        this = (SoundPlayerMenu_o *)sub_1C21DDC(&v38->m_Items[3], v13),
        v38->max_length <= 4) )
  {
LABEL_77:
    sub_1C2209C(this, item);
  }
  v38->m_Items[4] = v37;
  sub_1C21DDC(&v38->m_Items[4], v37);
  v39 = System_String__Concat_63129004(v38, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C22084(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v44, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance
    || (CommonUI__OpenTripleButtonDlg(
          (CommonUI_o *)Instance,
          title,
          v39,
          v40,
          v41,
          v42,
          v44,
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
        (this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_76:
    sub_1C22094(this, item);
  }
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v35, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  Il2CppObject *EffetData; // x21
  Il2CppObject *v9; // x0

  if ( (byte_4BD7F28 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19177/*"ef_soundchoice"*/);
    byte_4BD7F28 = 1;
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
                                  (System_String_o *)StringLiteral_19177/*"ef_soundchoice"*/,
                                  v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             EffetData,
             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v9;
      sub_1C21DDC(&this->fields.selectEffect, v9);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_34803616(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_15:
      sub_1C22094(soundPlayerListViewManager, v5);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BD7F2A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F2A = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v5 = this->fields.selectEffect;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct SoundPlayerListViewManager_o *v12; // x8
  const MethodInfo *v13; // x2
  SoundPlayerListViewItem_o *Item; // x0
  _QWORD *monitor; // x8
  __int64 v16; // x8
  Il2CppObject *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x22

  if ( (byte_4BD7F2E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SoundPlayerMenu_OnSelectSound__);
    sub_1C21E38(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__);
    sub_1C21E38(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_12420/*"SOUNDPLAYER_SOUND_OPEN"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_88/*"\r"*/);
    byte_4BD7F2E = 1;
  }
  v5 = (Il2CppObject *)sub_1C22084(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C21DDC(&v5[1], this);
  v6 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v7);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v9 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C22084(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v10);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v9;
      sub_1C21DDC(&soundPlayerListViewManager->fields.callbackFunc, v9);
      SoundPlayerListViewManager__SetMode_32708124(soundPlayerListViewManager, 2, v11);
      return;
    }
LABEL_16:
    sub_1C22094(v6, v7);
  }
  v12 = this->fields.soundPlayerListViewManager;
  if ( !v12 )
    goto LABEL_16;
  ++v12->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v7);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v13);
  v5[1].monitor = Item;
  v6 = (System_String_o *)sub_1C21DDC(&v5[1].monitor, Item);
  monitor = v5[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  v16 = monitor[14];
  if ( !v16 )
    goto LABEL_16;
  v6 = *(System_String_o **)(v16 + 32);
  if ( !v6 )
    goto LABEL_16;
  v6 = System_String__Replace_63135104(v6, (System_String_o *)StringLiteral_88/*"\r"*/, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v6 )
    goto LABEL_16;
  v17 = (Il2CppObject *)System_String__Replace_63135104(
                          v6,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12420/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v19 = System_String__Format(v18, v17, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v21, v5, Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, 0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v19,
    v21,
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
    sub_1C22094(0LL, idx);
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
    sub_1C22094(0LL, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *v2; // x19
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  __int64 size; // x20
  System_String_array *v5; // x21
  unsigned __int64 v6; // x22
  _QWORD *m_Items; // x23
  System_String_o *v8; // x0
  SoundPlayerMenu_c *v9; // x8
  System_String_o *v10; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4BD7F24 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&SoundPlayerMenu_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    this = (SoundPlayerMenu_o *)sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD7F24 = 1;
  }
  Item = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_14:
    sub_1C22094(this, method);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = (System_String_array *)sub_1C21EE0(string___TypeInfo, (unsigned int)size);
    v6 = 0LL;
    m_Items = v5->m_Items;
    do
    {
      this = (SoundPlayerMenu_o *)v2->fields.isNewList;
      if ( !this )
        goto LABEL_14;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)this,
               v6,
               (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0LL);
      if ( !v5 )
        goto LABEL_14;
      if ( v6 >= v5->max_length )
        sub_1C2209C(this, method);
      *m_Items = this;
      sub_1C21DDC(m_Items, this);
      ++v6;
      ++m_Items;
    }
    while ( size != v6 );
    v8 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v5, 0LL);
    v9 = SoundPlayerMenu_TypeInfo;
    v10 = v8;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v9 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v9->static_fields->SOUND_PLAYER_NEW_KEY, v10, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4BD7F25 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__);
    sub_1C21E38(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
    byte_4BD7F25 = 1;
  }
  v7 = (Il2CppObject *)sub_1C22084(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C21DDC(&v7[1], this);
  v7[1].monitor = opened_act;
  sub_1C21DDC(&v7[1].monitor, opened_act);
  v7[2].klass = (Il2CppClass *)callback;
  sub_1C21DDC(&v7[2], callback);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, v7, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_1C22094(v8, v9);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v11, v12);
}


void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v12; // x0
  __int64 *v13; // x8
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  Il2CppObject *v19; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v20; // x21

  if ( (byte_4BD7F2C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_1C21E38(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__);
    sub_1C21E38(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__);
    sub_1C21E38(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
    byte_4BD7F2C = 1;
  }
  v5 = sub_1C22084(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC(v5 + 24, this);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v8);
  *(_QWORD *)(v5 + 16) = Item;
  sub_1C21DDC(v5 + 16, Item);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v10);
      SoundPlayerMenu__detachSelectEffect(this, v14);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v13 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_9:
      v15 = v12;
      System_Action___ctor(v12, (Il2CppObject *)v5, *v13, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v15, 0LL);
        return;
      }
LABEL_14:
      sub_1C22094(v6, v7);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v10);
      v17 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v5 + 16), v16);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
      this->fields.retTrialListening = started;
      sub_1C21DDC(&this->fields.retTrialListening, started);
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C22084(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( !v19 )
        goto LABEL_14;
      CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v19, v20, 0LL);
      break;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v10);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v13 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_9;
  }
}


void __fastcall SoundPlayerMenu__openEvent(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4BD7F2F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu__openEvent_b__37_0__);
    byte_4BD7F2F = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_1C22094(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v6, v7);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4BD7F2B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F2B = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = &this->fields.selectEffect;
  v4 = (UnityEngine_Object_o *)selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_selectEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v6, 0LL);
    *p_selectEffect = 0LL;
    sub_1C21DDC(p_selectEffect, 0LL);
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

  if ( (byte_4BD7F20 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD7F20 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1C22354(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_4BD7F22 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7F22 = 1;
  }
  this->fields.playSoundIdx = -1;
  v3 = StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(&this->fields.playSoundName, v3);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *canPlaySoundCnt; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct SoundPlayerListViewManager_o *v15; // x8
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD7F2D & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12417/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/);
    sub_1C21E38(&StringLiteral_12418/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/);
    byte_4BD7F2D = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12417/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v4, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12418/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_10;
  v11 = v4;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum, v7, v8, v9);
  v15 = this->fields.soundPlayerListViewManager;
  if ( !v15
    || (v16 = (Il2CppObject *)v4,
        playSoundMax = v15->fields.playSoundMax,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax, v12, v13, v14),
        v4 = System_String__Format_63129848(v11, v16, v17, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_1C22094(v4, v5);
  }
  UILabel__set_text(canPlaySoundCnt, v4, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *retTrialListening; // x1
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x1
  struct System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v8; // x20
  void *v9; // x1

  if ( (byte_4BD7F31 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7F31 = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70855504((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_1C21DDC(&this->fields.retTrialListening, 0LL);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v5 = SoundPlayerMenu__busyWaitStopBgm(this, v4);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
    }
    else
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = &this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
      {
        v8 = *p_backupBgmName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(v8, 0LL);
      }
      v9 = StringLiteral_1/*""*/;
      *p_backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C21DDC(p_backupBgmName, v9);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4BD7F30 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerMenu__trialListening_d__39_TypeInfo);
    byte_4BD7F30 = 1;
  }
  v5 = sub_1C22084(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = item;
  sub_1C21DDC(v5 + 40, item);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7F37 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerMenu___c_TypeInfo);
    byte_4BD7F37 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v1;
  sub_1C21DDC(SoundPlayerMenu___c_TypeInfo->static_fields, v1);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7F39 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BD7F39 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7F38 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BD7F38 = 1;
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
  SoundPlayerMenu_o *_4__this; // x0
  struct SoundPlayerMenu_o *v4; // x20
  struct System_Action_o *opened_act; // x1
  struct System_Action_o *callback; // x1
  struct SoundPlayerMenu_o *v7; // x8
  struct SoundPlayerMenu_o *v8; // x8
  const MethodInfo *v9; // x2
  struct SoundPlayerMenu_o *v10; // x8
  System_Action_o *v11; // x21
  struct SoundPlayerMenu_o *v12; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v14; // x3
  struct SoundPlayerMenu_o *v15; // x8
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v17; // x8

  if ( (byte_4BD7F3A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu_EndOpen__);
    byte_4BD7F3A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerMenu__createSelectEffect(_4__this, method);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_33;
  if ( !v4->fields.state )
  {
    opened_act = this->fields.opened_act;
    v4->fields.openedAct = opened_act;
    sub_1C21DDC(&v4->fields.openedAct, opened_act);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    callback = this->fields.callback;
    _4__this->fields.callbackFunc = callback;
    sub_1C21DDC(&_4__this->fields.callbackFunc, callback);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v7->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v8->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, method);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v10->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__SetMode_32708124((SoundPlayerListViewManager_o *)_4__this, 1, v9);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerMenu__setCanPlaySoundDisp(_4__this, method);
    v4 = this->fields.__4__this;
    if ( !v4 )
      goto LABEL_33;
    v4->fields.state = 1;
  }
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v4, Method_SoundPlayerMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)v4, v11, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_33;
  baseWindow = (UnityEngine_Object_o *)v12->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_30;
  v15 = this->fields.__4__this;
  if ( !v15 || (_4__this = (SoundPlayerMenu_o *)v15->fields.baseWindow) == 0LL )
LABEL_33:
    sub_1C22094(_4__this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_33;
    LODWORD(Component_object[3].monitor) = 1045220557;
    LODWORD(Component_object[2].klass) = 2;
  }
LABEL_30:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_33;
  _4__this = (SoundPlayerMenu_o *)v17->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v17->fields.isNewList,
    v17->fields.playSoundName,
    v14);
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
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  struct SoundPlayerMenu_o *v9; // x8

  v3 = this;
  if ( (byte_4BD7F3B & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu_endPurchaseRequest__);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD7F3B = 1;
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
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v8, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v8,
                                                        (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v9 = v3->fields.__4__this;
    if ( v9 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v9->fields.PURCHASE_NUM, 0, 0, 0LL);
      return;
    }
LABEL_13:
    sub_1C22094(this, method);
  }
  this = (SoundPlayerMenu___c__DisplayClass34_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)this, (System_String_o *)StringLiteral_22632/*"ok"*/, v2);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  SoundPlayerListViewManager_o *klass; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4BD7F3C & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1C21E38(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4BD7F3C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (SoundPlayerListViewManager_o *)_4__this[6].klass,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C22084(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v6),
        !klass) )
  {
    sub_1C22094(this, method);
  }
  klass->fields.callbackFunc = v5;
  sub_1C21DDC(&klass->fields.callbackFunc, v5);
  SoundPlayerListViewManager__SetMode_32708124(klass, 2, v7);
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
    sub_1C22094(_4__this, method);
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
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v4; // x0
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v6; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v8; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v16; // x20
  void *v17; // x1

  if ( (byte_4BD7F3D & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__);
    sub_1C21E38(&SoundPlayerMenu___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7F3D = 1;
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
      sub_1C22094(v12, v13);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = &_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      v16 = *p_backupBgmName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(v16, 0LL);
    }
    v17 = StringLiteral_1/*""*/;
    *p_backupBgmName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC(p_backupBgmName, v17);
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
    _9__41_0 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__41_0, v6, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1C21DDC(&static_fields->__9__41_0, _9__41_0);
  }
  v8 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v8, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC(p__2__current, v8);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_String_o *BgmName; // x0
  __int64 v6; // x1
  struct System_String_o *playSoundName; // x1
  struct SoundPlayerListViewItem_o *item; // x21
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  SoundPlayerMenu___c_c *v15; // x0
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v17; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v19; // x21
  Il2CppObject **v20; // x19
  System_String_o *backupBgmName; // x19

  if ( (byte_4BD7F3E & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerMenu___c__trialListening_b__39_0__);
    sub_1C21E38(&SoundPlayerMenu___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BD7F3E = 1;
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
        sub_1C21DDC(&_4__this->fields.backupBgmName, BgmName);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          playSoundName = _4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = playSoundName;
          sub_1C21DDC(&_4__this->fields.backupBgmName, playSoundName);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0LL);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_4BD7EFB & 1) == 0 )
          {
            sub_1C21E38(&StringLiteral_1/*""*/);
            byte_4BD7EFB = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v12 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v12, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v12;
          p__2__current = &this->fields.__2__current;
          sub_1C21DDC(p__2__current, v12);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_1C22094(BgmName, v6);
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
    sub_1C21DDC(&_4__this->fields.retTrialListening, 0LL);
    return 0;
  }
  v15 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v15 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__39_0 = v15->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = SoundPlayerMenu___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__39_0, v17, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = _9__39_0;
    sub_1C21DDC(&static_fields->__9__39_0, _9__39_0);
  }
  v19 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v19, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v19;
  v20 = &this->fields.__2__current;
  sub_1C21DDC(v20, v19);
  *((_DWORD *)v20 - 2) = 2;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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