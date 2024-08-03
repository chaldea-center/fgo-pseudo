void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49F7FE5 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerMenu_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_12771/*"SoundPlayerNewKey"*/, v2);
    byte_49F7FE5 = 1;
  }
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_12771/*"SoundPlayerNewKey"*/;
  sub_1B6406C(SoundPlayerMenu_TypeInfo->static_fields);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_49F7FE4 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49F7FE4 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C(&this->fields.playSoundName);
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v6, v7);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v8;
  sub_1B6406C(&this->fields.isNewList);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F7FD6 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SoundPlayerMenu_OnSelectSound__, v4);
    byte_49F7FD6 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v6 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1B64314(
                                                      SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                      method,
                                                      v2);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v7);
  if ( !soundPlayerListViewManager )
    sub_1B64324(v8);
  soundPlayerListViewManager->fields.callbackFunc = v6;
  sub_1B6406C(&soundPlayerListViewManager->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_31365088(soundPlayerListViewManager, 2, v9);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_49F7FD1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F7FD1 = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0LL;
  sub_1B6406C(&this->fields.retTrialListening);
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C(&this->fields.backupBgmName);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_1B64324(soundPlayerListViewManager);
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
  __int64 v25; // x1
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  struct BgmEntity_o *v29; // x8
  struct System_String_o **p_fileName; // x8
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2

  if ( (byte_49F7FD7 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B640C8(&SoundManager_TypeInfo, v9);
    sub_1B640C8(&Method_SoundPlayerMenu_OnSelectSound__, v10);
    byte_49F7FD7 = 1;
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
        v20 = (_QWORD *)sub_1B640E0(Method_SoundPlayerMenu_OnSelectSound__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
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
                (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v26 = *((_QWORD *)isNewList + 2);
          v27 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v26 )
            goto LABEL_36;
          v28 = isNewList[6];
          if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v28 + 1;
            *(_DWORD *)(v26 + 4 * v28 + 32) = id;
          }
        }
        if ( (byte_49F7FAB & 1) == 0 )
        {
          sub_1B640C8(&StringLiteral_1/*""*/, v25);
          byte_49F7FAB = 1;
        }
        v29 = v14->fields.bgmEntity;
        if ( v29 )
          p_fileName = &v29->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        this->fields.playSoundName = *p_fileName;
        sub_1B6406C(&this->fields.playSoundName);
        playSoundName = this->fields.playSoundName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(playSoundName, 0LL);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v33 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1B64314(
                                                           SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v34);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v33;
        sub_1B6406C(&soundPlayerListViewManager->fields.callbackFunc);
        SoundPlayerListViewManager__SetMode_31365088(soundPlayerListViewManager, 2, v35);
        return;
      }
LABEL_36:
      sub_1B64324(isNewList);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  SoundPlayerListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F7FE6 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_49F7FE6 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v8 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                            v6,
                                                            v7),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v9),
        !soundPlayerListViewManager) )
  {
    sub_1B64324(maskColl);
  }
  soundPlayerListViewManager->fields.callbackFunc = v8;
  sub_1B6406C(&soundPlayerListViewManager->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_31365088(soundPlayerListViewManager, 2, v10);
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

  if ( (byte_49F7FCF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7FCF = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1B645E4(v8);
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
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  int v10; // w9
  System_String_array *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  struct System_Collections_Generic_List_int__o *v14; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  __int64 v18; // x1

  if ( (byte_49F7FD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v3);
    sub_1B640C8(&SoundPlayerMenu_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49F7FD3 = 1;
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
    v10 = isNewList->fields._version + 1;
    isNewList->fields._size = 0;
    isNewList->fields._version = v10;
    if ( !String )
      goto LABEL_20;
    IsNullOrEmpty = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    v11 = IsNullOrEmpty;
    if ( (int)*(_QWORD *)&IsNullOrEmpty->max_length >= 1 )
    {
      v12 = 0LL;
      v13 = (unsigned int)*(_QWORD *)&IsNullOrEmpty->max_length - 1LL;
      while ( 1 )
      {
        IsNullOrEmpty = (System_String_array *)System_Int32__Parse(v11->m_Items[v12], 0LL);
        v14 = this->fields.isNewList;
        if ( !v14 )
          break;
        items = v14->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        v18 = (unsigned int)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v14,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size + 1] = (int)IsNullOrEmpty;
        }
        if ( v13 == v12 )
          return;
        if ( ++v12 >= (unsigned __int64)v11->max_length )
          sub_1B6432C(IsNullOrEmpty, v18);
      }
LABEL_20:
      sub_1B64324(IsNullOrEmpty);
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
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o **v10; // x20

  if ( (byte_49F7FD9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&SoundPlayerListViewObject_TypeInfo, v4);
    byte_49F7FD9 = 1;
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
        v10 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v10 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v10[17], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 Item,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_1B64324(Item);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20

  if ( (byte_49F7FE2 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method);
    byte_49F7FE2 = 1;
  }
  v4 = sub_1B64314(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C(v4 + 32);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
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
  __int64 num; // x1
  Il2CppObject *v37; // x8
  Il2CppClass *klass; // x9
  const char *namespaze; // x9
  SoundPlayerMenu_o *v40; // x22
  char v41; // w19
  __int64 v42; // x20
  __int64 v43; // x29
  System_String_o *v44; // x23
  Il2CppClass *v45; // x8
  unsigned __int64 v46; // x28
  SoundPlayerMenu_o *v47; // x26
  Il2CppClass *v48; // x8
  int closeTransform; // w8
  Il2CppClass *v50; // x8
  Il2CppClass *v51; // x8
  Il2CppObject *v52; // x27
  Il2CppObject *CountText; // x28
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  bool v58; // w24
  System_String_o *v59; // x25
  System_String_o *v60; // x26
  System_String_array *v61; // x27
  System_String_o *v62; // x21
  System_String_o *v63; // x22
  System_String_o *v64; // x23
  System_String_o *v65; // x25
  Il2CppObject *Instance; // x26
  __int64 v67; // x1
  __int64 v68; // x2
  TripleButtonDlgComponent_CallbackFunc_o *v69; // x27
  SoundPlayerMenu_o *v70; // [xsp+58h] [xbp-88h]
  System_String_o *title; // [xsp+60h] [xbp-80h]
  Il2CppObject *object; // [xsp+68h] [xbp-78h]
  UserItemEntity_o *v73; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_49F7FE3 & 1) == 0 )
  {
    sub_1B640C8(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_SoundPlayerMenu_openCheckDlgCallback__, v13);
    sub_1B640C8(&string___TypeInfo, v14);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v15);
    sub_1B640C8(&StringLiteral_12123/*"SOUNDPLAYER_OPEN_CHECK"*/, v16);
    sub_1B640C8(&StringLiteral_12121/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, v17);
    sub_1B640C8(&StringLiteral_12119/*"SOUNDPLAYER_DIALOG_OK"*/, v18);
    sub_1B640C8(&StringLiteral_12122/*"SOUNDPLAYER_ITEM_DISP"*/, v19);
    sub_1B640C8(&StringLiteral_12117/*"SOUNDPLAYER_DIALOG_CANCEL"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    sub_1B640C8(&StringLiteral_88/*"\r"*/, v22);
    sub_1B640C8(&StringLiteral_12120/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, v23);
    sub_1B640C8(&StringLiteral_12128/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, v24);
    this = (SoundPlayerMenu_o *)sub_1B640C8(&StringLiteral_12118/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v25);
    byte_49F7FE3 = 1;
  }
  v73 = 0LL;
  entity = 0LL;
  if ( !item )
    goto LABEL_72;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_72;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_72;
  this = (SoundPlayerMenu_o *)System_String__Replace_61395016(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_88/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_72;
  v27 = (Il2CppObject *)System_String__Replace_61395016(
                          (System_String_o *)this,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v29 = System_String__Format(v28, v27, 0LL);
  v30 = item->fields.bgmEntity;
  v31 = v29;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_72;
  object = (Il2CppObject *)v4;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_72;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v30 )
    goto LABEL_72;
  title = v31;
  if ( !MasterData_object )
    goto LABEL_72;
  v34 = (SoundPlayerMenu_o *)StringLiteral_1/*""*/;
  v35 = (UserItemMaster_o *)this;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         v30->fields.shopId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
    v37 = entity;
    if ( !entity )
      goto LABEL_72;
    klass = entity[2].klass;
    if ( !klass )
      goto LABEL_72;
    namespaze = klass->_1.namespaze;
    v40 = this;
    if ( (int)namespaze < 1 )
    {
      v41 = 0;
      v44 = (System_String_o *)v34;
    }
    else
    {
      v70 = this;
      v41 = 0;
      v42 = 8LL;
      v43 = 1LL - (unsigned int)namespaze;
      v44 = (System_String_o *)v34;
      while ( 1 )
      {
        v45 = v37[2].klass;
        if ( !v45 )
          goto LABEL_72;
        v46 = v42 - 8;
        if ( v42 - 8 >= (unsigned __int64)LODWORD(v45->_1.namespaze) )
          goto LABEL_73;
        if ( !v33 )
          goto LABEL_72;
        this = (SoundPlayerMenu_o *)ItemMaster__GetItemData((ItemMaster_o *)v33, *((_DWORD *)&v45->_1.image + v42), 0LL);
        if ( this )
        {
          v47 = this;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (SoundPlayerMenu_o *)NetworkManager__get_UserId(0LL);
          if ( !entity )
            goto LABEL_72;
          v48 = entity[2].klass;
          if ( !v48 )
            goto LABEL_72;
          if ( v46 >= LODWORD(v48->_1.namespaze) )
            goto LABEL_73;
          if ( !v35 )
            goto LABEL_72;
          this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                        v35,
                                        &v73,
                                        (int64_t)this,
                                        *((_DWORD *)&v48->_1.image + v42),
                                        0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v73 )
              goto LABEL_72;
            num = (unsigned int)v73->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
            closeTransform = (int)v47->fields.closeTransform;
            if ( closeTransform == 5 )
            {
              if ( !this )
                goto LABEL_72;
              num = LODWORD(this->fields.playSoundName);
            }
            else if ( closeTransform == 22 )
            {
              if ( !this )
                goto LABEL_72;
              num = HIDWORD(this->fields.playSoundName);
            }
            else
            {
              num = 0LL;
            }
          }
          if ( !entity )
            goto LABEL_72;
          v50 = entity[5].klass;
          if ( !v50 )
            goto LABEL_72;
          if ( v46 >= LODWORD(v50->_1.namespaze) )
            goto LABEL_73;
          if ( (int)num < *((_DWORD *)&v50->_1.image + v42) )
            v41 = 1;
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v47->fields.closeTransform, num, 0LL);
          if ( !entity )
            goto LABEL_72;
          v51 = entity[5].klass;
          if ( !v51 )
            goto LABEL_72;
          if ( v46 >= LODWORD(v51->_1.namespaze) )
            goto LABEL_73;
          v52 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v47->fields.closeTransform,
                                        *((_DWORD *)&v51->_1.image + v42),
                                        0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12122/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v55 = System_String__Format_61389768(v54, (Il2CppObject *)v47->fields.m_CancellationTokenSource, v52, 0LL);
          v44 = System_String__Concat_61375396(v44, v55, 0LL);
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12122/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v57 = System_String__Format_61389768(
                  v56,
                  (Il2CppObject *)v47->fields.m_CancellationTokenSource,
                  CountText,
                  0LL);
          this = (SoundPlayerMenu_o *)System_String__Concat_61375396((System_String_o *)v34, v57, 0LL);
          v34 = this;
        }
        if ( v43 + v42 == 8 )
          break;
        v37 = entity;
        ++v42;
        if ( !entity )
          goto LABEL_72;
      }
      v40 = v70;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
    v58 = v41 & 1;
  }
  else
  {
    v58 = 0;
    v59 = (System_String_o *)v34;
    v44 = (System_String_o *)v34;
    v40 = v34;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12123/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_72;
  v61 = (System_String_array *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_73;
  this->fields.basePanelList = (struct UIPanel_array *)v40;
  this = (SoundPlayerMenu_o *)sub_1B6406C(&this->fields.basePanelList);
  if ( v61->max_length <= 1
    || (v61->m_Items[1] = v44, this = (SoundPlayerMenu_o *)sub_1B6406C(&v61->m_Items[1]), v61->max_length <= 2)
    || (v61->m_Items[2] = v59, this = (SoundPlayerMenu_o *)sub_1B6406C(&v61->m_Items[2]), v61->max_length <= 3)
    || (v61->m_Items[3] = (System_String_o *)v34,
        this = (SoundPlayerMenu_o *)sub_1B6406C(&v61->m_Items[3]),
        v61->max_length <= 4) )
  {
LABEL_73:
    sub_1B6432C(this, num);
  }
  v61->m_Items[4] = v60;
  sub_1B6406C(&v61->m_Items[4]);
  v62 = System_String__Concat_61388924(v61, 0LL);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12118/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v69 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1B64314(TripleButtonDlgComponent_CallbackFunc_TypeInfo, v67, v68);
  TripleButtonDlgComponent_CallbackFunc___ctor(v69, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance
    || (CommonUI__OpenTripleButtonDlg(
          (CommonUI_o *)Instance,
          title,
          v62,
          v63,
          v64,
          v65,
          v69,
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
        (this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_72:
    sub_1B64324(this);
  }
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v58, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  const MethodInfo *v7; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  Il2CppObject *EffetData; // x21

  if ( (byte_49F7FD8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_18780/*"ef_soundchoice"*/, v4);
    byte_49F7FD8 = 1;
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
                                  (System_String_o *)StringLiteral_18780/*"ef_soundchoice"*/,
                                  v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                             EffetData,
                                                             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      sub_1B6406C(&this->fields.selectEffect);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_33381252(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_15:
      sub_1B64324(soundPlayerListViewManager);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49F7FDA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7FDA = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v4 = this->fields.selectEffect;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    GameObjectExtensions__SafeSetParent_33381252(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
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
  Il2CppObject *v16; // x19
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  SoundPlayerListViewManager_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  struct SoundPlayerListViewManager_o *v25; // x8
  const MethodInfo *v26; // x2
  _QWORD *monitor; // x8
  __int64 v28; // x8
  Il2CppObject *v29; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // x20
  Il2CppObject *Instance; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x22

  if ( (byte_49F7FDE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SoundPlayerMenu_OnSelectSound__, v8);
    sub_1B640C8(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v9);
    sub_1B640C8(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v11);
    sub_1B640C8(&StringLiteral_12127/*"SOUNDPLAYER_SOUND_OPEN"*/, v12);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    sub_1B640C8(&StringLiteral_88/*"\r"*/, v15);
    byte_49F7FDE = 1;
  }
  v16 = (Il2CppObject *)sub_1B64314(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, result, method);
  System_Object___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  v16[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v16[1]);
  v17 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v18);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v22 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                         v20,
                                                         v21);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v23);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v22;
      sub_1B6406C(&soundPlayerListViewManager->fields.callbackFunc);
      SoundPlayerListViewManager__SetMode_31365088(soundPlayerListViewManager, 2, v24);
      return;
    }
LABEL_16:
    sub_1B64324(v17);
  }
  v25 = this->fields.soundPlayerListViewManager;
  if ( !v25 )
    goto LABEL_16;
  ++v25->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v18);
  v16[1].monitor = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v26);
  v17 = (System_String_o *)sub_1B6406C(&v16[1].monitor);
  monitor = v16[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  v28 = monitor[14];
  if ( !v28 )
    goto LABEL_16;
  v17 = *(System_String_o **)(v28 + 32);
  if ( !v17 )
    goto LABEL_16;
  v17 = System_String__Replace_61395016(
          v17,
          (System_String_o *)StringLiteral_88/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v17 )
    goto LABEL_16;
  v29 = (Il2CppObject *)System_String__Replace_61395016(
                          v17,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12127/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v31 = System_String__Format(v30, v29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(v35, v16, Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, 0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v31,
    v35,
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  _QWORD *m_Items; // x23
  __int64 v12; // x1
  System_String_o *v13; // x0
  SoundPlayerMenu_c *v14; // x8
  System_String_o *v15; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_49F7FD4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1B640C8(&SoundPlayerMenu_TypeInfo, v4);
    sub_1B640C8(&string___TypeInfo, v5);
    this = (SoundPlayerMenu_o *)sub_1B640C8(&StringLiteral_869/*","*/, v6);
    byte_49F7FD4 = 1;
  }
  Item = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_14:
    sub_1B64324(this);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)size);
    v10 = 0LL;
    m_Items = v9->m_Items;
    do
    {
      this = (SoundPlayerMenu_o *)v2->fields.isNewList;
      if ( !this )
        goto LABEL_14;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)this,
               v10,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0LL);
      if ( !v9 )
        goto LABEL_14;
      if ( v10 >= v9->max_length )
        sub_1B6432C(this, v12);
      *m_Items = this;
      sub_1B6406C(m_Items);
      ++v10;
      ++m_Items;
    }
    while ( size != v10 );
    v13 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v9, 0LL);
    v14 = SoundPlayerMenu_TypeInfo;
    v15 = v13;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v14 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v14->static_fields->SOUND_PLAYER_NEW_KEY, v15, 0LL);
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
  Il2CppObject *v9; // x22
  __int64 v10; // x0
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_49F7FD5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, opened_act);
    sub_1B640C8(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v7);
    sub_1B640C8(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v8);
    byte_49F7FD5 = 1;
  }
  v9 = (Il2CppObject *)sub_1B64314(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, opened_act, callback);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  v9[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v9[1]);
  v9[1].monitor = opened_act;
  sub_1B6406C(&v9[1].monitor);
  v9[2].klass = (Il2CppClass *)callback;
  sub_1B6406C(&v9[2]);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, v9, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_1B64324(v10);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v14, v15);
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
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x0
  __int64 *v19; // x8
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x2
  System_Collections_IEnumerator_o *v25; // x0
  Il2CppObject *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  TripleButtonDlgComponent_CallbackFunc_o *v29; // x21

  if ( (byte_49F7FDC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SoundPlayerMenu_openCheckDlgCallback__, v7);
    sub_1B640C8(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v8);
    sub_1B640C8(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v9);
    sub_1B640C8(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v10);
    byte_49F7FDC = 1;
  }
  v11 = sub_1B64314(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B6406C(v11 + 24);
  *(_QWORD *)(v11 + 16) = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v13);
  sub_1B6406C(v11 + 16);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v14);
      SoundPlayerMenu__detachSelectEffect(this, v20);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
      v19 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_9:
      v23 = v18;
      System_Action___ctor(v18, (Il2CppObject *)v11, *v19, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v23, 0LL);
        return;
      }
LABEL_14:
      sub_1B64324(v12);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v14);
      v25 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v11 + 16), v24);
      this->fields.retTrialListening = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                         (UnityEngine_MonoBehaviour_o *)this,
                                         v25,
                                         0LL);
      sub_1B6406C(&this->fields.retTrialListening);
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                         TripleButtonDlgComponent_CallbackFunc_TypeInfo,
                                                         v27,
                                                         v28);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( !v26 )
        goto LABEL_14;
      CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v26, v29, 0LL);
      break;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v14);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      v19 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49F7FDF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&Method_SoundPlayerMenu__openEvent_b__37_0__, v5);
    byte_49F7FDF = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_1B64324(maskColl);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v9, v10);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_49F7FDB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7FDB = 1;
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
    UnityEngine_Object__Destroy_69127736(v6, 0LL);
    *p_selectEffect = 0LL;
    sub_1B6406C(p_selectEffect);
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

  if ( (byte_49F7FD0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7FD0 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1B645E4(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F7FD2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F7FD2 = 1;
  }
  this->fields.playSoundIdx = -1;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C(&this->fields.playSoundName);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v7; // x0
  UILabel_o *canPlaySoundCnt; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v10; // x21
  struct SoundPlayerListViewManager_o *v11; // x8
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F7FDD & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_12124/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, v4);
    sub_1B640C8(&StringLiteral_12125/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, v5);
    byte_49F7FDD = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12124/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v7, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12125/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_10;
  v10 = v7;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum);
  v11 = this->fields.soundPlayerListViewManager;
  if ( !v11
    || (v12 = (Il2CppObject *)v7,
        playSoundMax = v11->fields.playSoundMax,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax),
        v7 = System_String__Format_61389768(v10, v12, v13, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_1B64324(v7);
  }
  UILabel__set_text(canPlaySoundCnt, v7, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *retTrialListening; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1
  struct System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v10; // x20

  if ( (byte_49F7FE1 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49F7FE1 = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_69113628((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_1B6406C(&this->fields.retTrialListening);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v7 = SoundPlayerMenu__busyWaitStopBgm(this, v6);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
        v10 = *p_backupBgmName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(v10, 0LL);
      }
      *p_backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B6406C(p_backupBgmName);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_49F7FE0 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerMenu__trialListening_d__39_TypeInfo, item);
    byte_49F7FE0 = 1;
  }
  v5 = sub_1B64314(SoundPlayerMenu__trialListening_d__39_TypeInfo, item, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C(v5 + 32);
  *(_QWORD *)(v5 + 40) = item;
  sub_1B6406C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7FE7 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerMenu___c_TypeInfo, v1);
    byte_49F7FE7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SoundPlayerMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v3;
  sub_1B6406C(SoundPlayerMenu___c_TypeInfo->static_fields);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_49F7FE9 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    byte_49F7FE9 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_49F7FE8 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    byte_49F7FE8 = 1;
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
  SoundPlayerMenu_o *_4__this; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SoundPlayerMenu_o *v9; // x20
  struct SoundPlayerMenu_o *v10; // x8
  const MethodInfo *v11; // x1
  struct SoundPlayerMenu_o *v12; // x8
  const MethodInfo *v13; // x2
  struct SoundPlayerMenu_o *v14; // x8
  const MethodInfo *v15; // x1
  System_Action_o *v16; // x21
  struct SoundPlayerMenu_o *v17; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v19; // x3
  struct SoundPlayerMenu_o *v20; // x8
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v22; // x8

  if ( (byte_49F7FEA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SoundPlayerMenu_EndOpen__, v5);
    byte_49F7FEA = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerMenu__createSelectEffect(_4__this, method);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_33;
  if ( !v9->fields.state )
  {
    v9->fields.openedAct = this->fields.opened_act;
    sub_1B6406C(&v9->fields.openedAct);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this->fields.callbackFunc = this->fields.callback;
    sub_1B6406C(&_4__this->fields.callbackFunc);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v10->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v12->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, v11);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v14->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__SetMode_31365088((SoundPlayerListViewManager_o *)_4__this, 1, v13);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerMenu__setCanPlaySoundDisp(_4__this, v15);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_33;
    v9->fields.state = 1;
  }
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v16, (Il2CppObject *)v9, Method_SoundPlayerMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)v9, v16, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_33;
  baseWindow = (UnityEngine_Object_o *)v17->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_30;
  v20 = this->fields.__4__this;
  if ( !v20 || (_4__this = (SoundPlayerMenu_o *)v20->fields.baseWindow) == 0LL )
LABEL_33:
    sub_1B64324(_4__this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_33;
  _4__this = (SoundPlayerMenu_o *)v22->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v22->fields.isNewList,
    v22->fields.playSoundName,
    v19);
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
  if ( (byte_49F7FEB & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SoundPlayerMenu_endPurchaseRequest__, v6);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v7);
    byte_49F7FEB = 1;
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
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(v12, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v12,
                                                        (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v13 = v3->fields.__4__this;
    if ( v13 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v13->fields.PURCHASE_NUM, 0, 0LL);
      return;
    }
LABEL_13:
    sub_1B64324(this);
  }
  this = (SoundPlayerMenu___c__DisplayClass34_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)this, (System_String_o *)StringLiteral_22137/*"ok"*/, v2);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SoundPlayerMenu___c__DisplayClass34_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  SoundPlayerListViewManager_o *klass; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v3 = this;
  if ( (byte_49F7FEC & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1B640C8(&Method_SoundPlayerMenu_OnSelectSound__, v4);
    byte_49F7FEC = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (klass = (SoundPlayerListViewManager_o *)_4__this[6].klass,
        v7 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                            method,
                                                            v2),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v7,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v8),
        !klass) )
  {
    sub_1B64324(this);
  }
  klass->fields.callbackFunc = v7;
  sub_1B6406C(&klass->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_31365088(klass, 2, v9);
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
    sub_1B64324(_4__this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v10; // x0
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v12; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v14; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v18; // x0
  System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v21; // x20

  if ( (byte_49F7FED & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v4);
    sub_1B640C8(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v5);
    sub_1B640C8(&SoundPlayerMenu___c_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49F7FED = 1;
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
      sub_1B64324(v18);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = &_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      v21 = *p_backupBgmName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(v21, 0LL);
    }
    *p_backupBgmName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B6406C(p_backupBgmName);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v10 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v10 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__41_0 = v10->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SoundPlayerMenu___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(_9__41_0, v12, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1B6406C(&static_fields->__9__41_0);
  }
  v14 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, method, v2);
  UnityEngine_WaitUntil___ctor(v14, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C(p__2__current);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  struct SoundPlayerListViewItem_o *item; // x21
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8
  float LISTENING_TIME; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_WaitForSeconds_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  SoundPlayerMenu___c_c *v24; // x0
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v26; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v28; // x21
  Il2CppObject **v29; // x19
  System_String_o *backupBgmName; // x19

  if ( (byte_49F7FEE & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v3);
    sub_1B640C8(&SoundManager_TypeInfo, v4);
    sub_1B640C8(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v5);
    sub_1B640C8(&SoundPlayerMenu___c_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_49F7FEE = 1;
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
        sub_1B6406C(&_4__this->fields.backupBgmName);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          _4__this->fields.backupBgmName = _4__this->fields.playSoundName;
          sub_1B6406C(&_4__this->fields.backupBgmName);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0LL);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_49F7FAB & 1) == 0 )
          {
            sub_1B640C8(&StringLiteral_1/*""*/, v12);
            byte_49F7FAB = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v19 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v17, v18);
          UnityEngine_WaitForSeconds___ctor(v19, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v19;
          p__2__current = &this->fields.__2__current;
          sub_1B6406C(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_1B64324(BgmName);
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
    sub_1B6406C(&_4__this->fields.retTrialListening);
    return 0;
  }
  v24 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v24 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__39_0 = v24->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = SoundPlayerMenu___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v22, v23);
    System_Func_bool____ctor(_9__39_0, v26, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = _9__39_0;
    sub_1B6406C(&static_fields->__9__39_0);
  }
  v28 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v22, v23);
  UnityEngine_WaitUntil___ctor(v28, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v28;
  v29 = &this->fields.__2__current;
  sub_1B6406C(v29);
  *((_DWORD *)v29 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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