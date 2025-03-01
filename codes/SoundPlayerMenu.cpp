void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4BF90E1 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerMenu_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_13095/*"SoundPlayerNewKey"*/, v2);
    byte_4BF90E1 = 1;
  }
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_13095/*"SoundPlayerNewKey"*/;
  sub_1C2E0D0(SoundPlayerMenu_TypeInfo->static_fields);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20

  if ( (byte_4BF90E0 & 1) == 0 )
  {
    sub_1C2E12C(&BaseMenu_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4BF90E0 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0(&this->fields.playSoundName);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v6;
  sub_1C2E0D0(&this->fields.isNewList);
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
  const MethodInfo *v9; // x2

  if ( (byte_4BF90D2 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4BF90D2 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C2E378(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v6);
  if ( !soundPlayerListViewManager )
    sub_1C2E388(v7, v8);
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_1C2E0D0(&soundPlayerListViewManager->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_32740828(soundPlayerListViewManager, 2, v9);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_4BF90CD & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF90CD = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0LL;
  sub_1C2E0D0(&this->fields.retTrialListening);
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0(&this->fields.backupBgmName);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_1C2E388(soundPlayerListViewManager, v3);
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
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct BgmEntity_o *v28; // x8
  struct System_String_o **p_fileName; // x8
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2

  if ( (byte_4BF90D3 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1C2E12C(&SoundManager_TypeInfo, v9);
    sub_1C2E12C(&Method_SoundPlayerMenu_OnSelectSound__, v10);
    byte_4BF90D3 = 1;
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
        v20 = (_QWORD *)sub_1C2E144(Method_SoundPlayerMenu_OnSelectSound__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C2E110(v20, v20[4]);
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
                (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v25 = *((_QWORD *)isNewList + 2);
          v26 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v25 )
            goto LABEL_36;
          v27 = isNewList[6];
          if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_364E888 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v27 + 1;
            *(_DWORD *)(v25 + 4 * v27 + 32) = id;
          }
        }
        if ( (byte_4BF90A7 & 1) == 0 )
        {
          sub_1C2E12C(&StringLiteral_1/*""*/, v17);
          byte_4BF90A7 = 1;
        }
        v28 = v14->fields.bgmEntity;
        if ( v28 )
          p_fileName = &v28->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        this->fields.playSoundName = *p_fileName;
        sub_1C2E0D0(&this->fields.playSoundName);
        playSoundName = this->fields.playSoundName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm(playSoundName, 0LL);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v32 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C2E378(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v33);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v32;
        sub_1C2E0D0(&soundPlayerListViewManager->fields.callbackFunc);
        SoundPlayerListViewManager__SetMode_32740828(soundPlayerListViewManager, 2, v34);
        return;
      }
LABEL_36:
      sub_1C2E388(isNewList, v17);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_1C2E388(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4BF90E2 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C2E12C(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4BF90E2 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v6 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C2E378(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v7),
        !soundPlayerListViewManager) )
  {
    sub_1C2E388(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v6;
  sub_1C2E0D0(&soundPlayerListViewManager->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_32740828(soundPlayerListViewManager, 2, v8);
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

  if ( (byte_4BF90CB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BF90CB = 1;
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
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1C2E648(v8);
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
  struct System_Collections_Generic_List_int__o *v15; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  __int64 v19; // x1

  if ( (byte_4BF90CF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Clear__, v3);
    sub_1C2E12C(&SoundPlayerMenu_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4BF90CF = 1;
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
        v15 = this->fields.isNewList;
        if ( !v15 )
          break;
        items = v15->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v19 = (unsigned int)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_364E888 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size + 1] = (int)IsNullOrEmpty;
        }
        if ( v14 == v13 )
          return;
        if ( ++v13 >= (unsigned __int64)v12->max_length )
          sub_1C2E390(IsNullOrEmpty, v19);
      }
LABEL_20:
      sub_1C2E388(IsNullOrEmpty, v9);
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

  if ( (byte_4BF90D5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&SoundPlayerListViewObject_TypeInfo, v4);
    byte_4BF90D5 = 1;
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
                                                 (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_1C2E388(Item, v8);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4BF90DE & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method);
    byte_4BF90DE = 1;
  }
  v3 = sub_1C2E378(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0(v3 + 32);
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
  Il2CppObject *v36; // x8
  Il2CppClass *klass; // x9
  const char *namespaze; // x9
  SoundPlayerMenu_o *v39; // x22
  char v40; // w20
  __int64 v41; // x22
  System_String_o *v42; // x23
  Il2CppClass *v43; // x8
  unsigned __int64 v44; // x29
  SoundPlayerMenu_o *v45; // x27
  Il2CppClass *v46; // x8
  int closeTransform; // w8
  Il2CppClass *v48; // x8
  Il2CppClass *v49; // x8
  Il2CppObject *v50; // x28
  Il2CppObject *CountText; // x29
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  bool v56; // w24
  System_String_o *v57; // x25
  System_String_o *v58; // x26
  System_String_array *v59; // x27
  System_String_o *v60; // x21
  System_String_o *v61; // x22
  System_String_o *v62; // x23
  System_String_o *v63; // x25
  Il2CppObject *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v65; // x27
  SoundPlayerMenu_o *v66; // [xsp+60h] [xbp-90h]
  System_String_o *title; // [xsp+68h] [xbp-88h]
  Il2CppObject *object; // [xsp+70h] [xbp-80h]
  __int64 v69; // [xsp+78h] [xbp-78h]
  UserItemEntity_o *v70; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_4BF90DF & 1) == 0 )
  {
    sub_1C2E12C(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1C2E12C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v8);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&NetworkManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C2E12C(&Method_SoundPlayerMenu_openCheckDlgCallback__, v13);
    sub_1C2E12C(&string___TypeInfo, v14);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v15);
    sub_1C2E12C(&StringLiteral_12425/*"SOUNDPLAYER_OPEN_CHECK"*/, v16);
    sub_1C2E12C(&StringLiteral_12423/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, v17);
    sub_1C2E12C(&StringLiteral_12421/*"SOUNDPLAYER_DIALOG_OK"*/, v18);
    sub_1C2E12C(&StringLiteral_12424/*"SOUNDPLAYER_ITEM_DISP"*/, v19);
    sub_1C2E12C(&StringLiteral_12419/*"SOUNDPLAYER_DIALOG_CANCEL"*/, v20);
    sub_1C2E12C(&StringLiteral_1/*""*/, v21);
    sub_1C2E12C(&StringLiteral_88/*"\r"*/, v22);
    sub_1C2E12C(&StringLiteral_12422/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, v23);
    sub_1C2E12C(&StringLiteral_12430/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, v24);
    this = (SoundPlayerMenu_o *)sub_1C2E12C(&StringLiteral_12420/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v25);
    byte_4BF90DF = 1;
  }
  v70 = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_76;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)System_String__Replace_63255212(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_88/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_76;
  v27 = (Il2CppObject *)System_String__Replace_63255212(
                          (System_String_o *)this,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v29 = System_String__Format(v28, v27, 0LL);
  v30 = v3->fields.bgmEntity;
  v31 = v29;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  object = (Il2CppObject *)v4;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_76;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
         (const MethodInfo_327B1CC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
    v36 = entity;
    if ( !entity )
      goto LABEL_76;
    klass = entity[2].klass;
    if ( !klass )
      goto LABEL_76;
    namespaze = klass->_1.namespaze;
    v39 = this;
    if ( (int)namespaze < 1 )
    {
      v40 = 0;
      v42 = (System_String_o *)v34;
    }
    else
    {
      v66 = this;
      v69 = 1LL - (unsigned int)namespaze;
      v40 = 0;
      v41 = 8LL;
      v42 = (System_String_o *)v34;
      while ( 1 )
      {
        v43 = v36[2].klass;
        if ( !v43 )
          goto LABEL_76;
        v44 = v41 - 8;
        if ( v41 - 8 >= (unsigned __int64)LODWORD(v43->_1.namespaze) )
          goto LABEL_77;
        if ( !v33 )
          goto LABEL_76;
        this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(
                                      (ItemMaster_o *)v33,
                                      *((_DWORD *)&v43->_1.image + v41),
                                      -1,
                                      0LL);
        if ( this )
        {
          v45 = this;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, item);
            byte_4BF81D5 = 1;
          }
          this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (SoundPlayerMenu_o *)NetworkManager_TypeInfo;
          }
          if ( !entity )
            goto LABEL_76;
          v46 = entity[2].klass;
          if ( !v46 )
            goto LABEL_76;
          if ( v44 >= LODWORD(v46->_1.namespaze) )
            goto LABEL_77;
          if ( !v35 )
            goto LABEL_76;
          this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                        v35,
                                        &v70,
                                        *(_QWORD *)&this->fields.playSoundName[2].fields,
                                        *((_DWORD *)&v46->_1.image + v41),
                                        0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v70 )
              goto LABEL_76;
            item = (SoundPlayerListViewItem_o *)(unsigned int)v70->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
            closeTransform = (int)v45->fields.closeTransform;
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
          v48 = entity[5].klass;
          if ( !v48 )
            goto LABEL_76;
          if ( v44 >= LODWORD(v48->_1.namespaze) )
            goto LABEL_77;
          if ( (int)item < *((_DWORD *)&v48->_1.image + v41) )
            v40 = 1;
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v45->fields.closeTransform, (int32_t)item, 0LL);
          if ( !entity )
            goto LABEL_76;
          v49 = entity[5].klass;
          if ( !v49 )
            goto LABEL_76;
          if ( v44 >= LODWORD(v49->_1.namespaze) )
            goto LABEL_77;
          v50 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v45->fields.closeTransform,
                                        *((_DWORD *)&v49->_1.image + v41),
                                        0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v53 = System_String__Format_63249956(v52, (Il2CppObject *)v45->fields.m_CancellationTokenSource, v50, 0LL);
          v42 = System_String__Concat_63235584(v42, v53, 0LL);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v55 = System_String__Format_63249956(
                  v54,
                  (Il2CppObject *)v45->fields.m_CancellationTokenSource,
                  CountText,
                  0LL);
          this = (SoundPlayerMenu_o *)System_String__Concat_63235584((System_String_o *)v34, v55, 0LL);
          v34 = this;
        }
        if ( v69 + v41 == 8 )
          break;
        v36 = entity;
        ++v41;
        if ( !entity )
          goto LABEL_76;
      }
      v39 = v66;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
    v56 = v40 & 1;
  }
  else
  {
    v56 = 0;
    v57 = (System_String_o *)v34;
    v42 = (System_String_o *)v34;
    v39 = v34;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_1C2E1D4(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_76;
  v59 = (System_String_array *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_77;
  this->fields.basePanelList = (struct UIPanel_array *)v39;
  this = (SoundPlayerMenu_o *)sub_1C2E0D0(&this->fields.basePanelList);
  if ( v59->max_length <= 1
    || (v59->m_Items[1] = v42, this = (SoundPlayerMenu_o *)sub_1C2E0D0(&v59->m_Items[1]), v59->max_length <= 2)
    || (v59->m_Items[2] = v57, this = (SoundPlayerMenu_o *)sub_1C2E0D0(&v59->m_Items[2]), v59->max_length <= 3)
    || (v59->m_Items[3] = (System_String_o *)v34,
        this = (SoundPlayerMenu_o *)sub_1C2E0D0(&v59->m_Items[3]),
        v59->max_length <= 4) )
  {
LABEL_77:
    sub_1C2E390(this, item);
  }
  v59->m_Items[4] = v58;
  sub_1C2E0D0(&v59->m_Items[4]);
  v60 = System_String__Concat_63249112(v59, 0LL);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12420/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v65 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C2E378(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v65, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance
    || (CommonUI__OpenTripleButtonDlg(
          (CommonUI_o *)Instance,
          title,
          v60,
          v61,
          v62,
          v63,
          v65,
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
        (this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_76:
    sub_1C2E388(this, item);
  }
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v56, 0LL);
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

  if ( (byte_4BF90D4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_19187/*"ef_soundchoice"*/, v4);
    byte_4BF90D4 = 1;
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
                                  (System_String_o *)StringLiteral_19187/*"ef_soundchoice"*/,
                                  v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                             EffetData,
                                                             (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      sub_1C2E0D0(&this->fields.selectEffect);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_34863736(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_15:
      sub_1C2E388(soundPlayerListViewManager, v7);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BF90D6 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF90D6 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v5 = this->fields.selectEffect;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    GameObjectExtensions__SafeSetParent_34863736(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
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
  SoundPlayerListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  struct SoundPlayerListViewManager_o *v23; // x8
  const MethodInfo *v24; // x2
  _QWORD *monitor; // x8
  __int64 v26; // x8
  Il2CppObject *v27; // x20
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v31; // x22

  if ( (byte_4BF90DA & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, result);
    sub_1C2E12C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C2E12C(&Method_SoundPlayerMenu_OnSelectSound__, v8);
    sub_1C2E12C(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v9);
    sub_1C2E12C(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v11);
    sub_1C2E12C(&StringLiteral_12429/*"SOUNDPLAYER_SOUND_OPEN"*/, v12);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v13);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    sub_1C2E12C(&StringLiteral_88/*"\r"*/, v15);
    byte_4BF90DA = 1;
  }
  v16 = (Il2CppObject *)sub_1C2E378(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  v16[1].klass = (Il2CppClass *)this;
  sub_1C2E0D0(&v16[1]);
  v17 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_22468/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v18);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v20 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C2E378(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v21);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v20;
      sub_1C2E0D0(&soundPlayerListViewManager->fields.callbackFunc);
      SoundPlayerListViewManager__SetMode_32740828(soundPlayerListViewManager, 2, v22);
      return;
    }
LABEL_16:
    sub_1C2E388(v17, v18);
  }
  v23 = this->fields.soundPlayerListViewManager;
  if ( !v23 )
    goto LABEL_16;
  ++v23->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v18);
  v16[1].monitor = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v24);
  v17 = (System_String_o *)sub_1C2E0D0(&v16[1].monitor);
  monitor = v16[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  v26 = monitor[14];
  if ( !v26 )
    goto LABEL_16;
  v17 = *(System_String_o **)(v26 + 32);
  if ( !v17 )
    goto LABEL_16;
  v17 = System_String__Replace_63255212(
          v17,
          (System_String_o *)StringLiteral_88/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v17 )
    goto LABEL_16;
  v27 = (Il2CppObject *)System_String__Replace_63255212(
                          v17,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12429/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v29 = System_String__Format(v28, v27, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v31, v16, Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, 0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v29,
    v31,
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
    sub_1C2E388(0LL, idx);
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
    sub_1C2E388(0LL, method);
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
  System_String_o *v12; // x0
  SoundPlayerMenu_c *v13; // x8
  System_String_o *v14; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4BF90D0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1C2E12C(&SoundPlayerMenu_TypeInfo, v4);
    sub_1C2E12C(&string___TypeInfo, v5);
    this = (SoundPlayerMenu_o *)sub_1C2E12C(&StringLiteral_845/*","*/, v6);
    byte_4BF90D0 = 1;
  }
  Item = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_14:
    sub_1C2E388(this, method);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = (System_String_array *)sub_1C2E1D4(string___TypeInfo, (unsigned int)size);
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
               (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0LL);
      if ( !v9 )
        goto LABEL_14;
      if ( v10 >= v9->max_length )
        sub_1C2E390(this, method);
      *m_Items = this;
      sub_1C2E0D0(m_Items);
      ++v10;
      ++m_Items;
    }
    while ( size != v10 );
    v12 = System_String__Join((System_String_o *)StringLiteral_845/*","*/, v9, 0LL);
    v13 = SoundPlayerMenu_TypeInfo;
    v14 = v12;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v13 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v13->static_fields->SOUND_PLAYER_NEW_KEY, v14, 0LL);
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
  __int64 v11; // x1
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4BF90D1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, opened_act);
    sub_1C2E12C(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v7);
    sub_1C2E12C(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v8);
    byte_4BF90D1 = 1;
  }
  v9 = (Il2CppObject *)sub_1C2E378(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  v9[1].klass = (Il2CppClass *)this;
  sub_1C2E0D0(&v9[1]);
  v9[1].monitor = opened_act;
  sub_1C2E0D0(&v9[1].monitor);
  v9[2].klass = (Il2CppClass *)callback;
  sub_1C2E0D0(&v9[2]);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v13 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v13, v9, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_1C2E388(v10, v11);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v13, v14);
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
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v17; // x0
  __int64 *v18; // x8
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *v22; // x0
  Il2CppObject *v23; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v24; // x21

  if ( (byte_4BF90D8 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_SoundPlayerMenu_openCheckDlgCallback__, v7);
    sub_1C2E12C(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v8);
    sub_1C2E12C(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v9);
    sub_1C2E12C(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v10);
    byte_4BF90D8 = 1;
  }
  v11 = sub_1C2E378(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C2E0D0(v11 + 24);
  *(_QWORD *)(v11 + 16) = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v14);
  sub_1C2E0D0(v11 + 16);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v15);
      SoundPlayerMenu__detachSelectEffect(this, v19);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v18 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_9:
      v20 = v17;
      System_Action___ctor(v17, (Il2CppObject *)v11, *v18, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v20, 0LL);
        return;
      }
LABEL_14:
      sub_1C2E388(v12, v13);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v15);
      v22 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v11 + 16), v21);
      this->fields.retTrialListening = UnityEngine_MonoBehaviour__StartCoroutine_70974992(
                                         (UnityEngine_MonoBehaviour_o *)this,
                                         v22,
                                         0LL);
      sub_1C2E0D0(&this->fields.retTrialListening);
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C2E378(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( !v23 )
        goto LABEL_14;
      CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v23, v24, 0LL);
      break;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v15);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v18 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
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

  if ( (byte_4BF90DB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, item);
    sub_1C2E12C(&Method_SoundPlayerMenu__openEvent_b__37_0__, v5);
    byte_4BF90DB = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v7 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_1C2E388(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v7, v8);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4BF90D7 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF90D7 = 1;
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
    UnityEngine_Object__Destroy_70989720(v6, 0LL);
    *p_selectEffect = 0LL;
    sub_1C2E0D0(p_selectEffect);
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

  if ( (byte_4BF90CC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BF90CC = 1;
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
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1C2E648(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BF90CE & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF90CE = 1;
  }
  this->fields.playSoundIdx = -1;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0(&this->fields.playSoundName);
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

  if ( (byte_4BF90D9 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_12426/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, v4);
    sub_1C2E12C(&StringLiteral_12427/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, v5);
    byte_4BF90D9 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12426/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v7, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
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
        v7 = System_String__Format_63249956(v14, v19, v20, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_1C2E388(v7, v8);
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

  if ( (byte_4BF90DD & 1) == 0 )
  {
    sub_1C2E12C(&BgmManager_TypeInfo, method);
    sub_1C2E12C(&SoundManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_1/*""*/, v4);
    byte_4BF90DD = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70975612((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_1C2E0D0(&this->fields.retTrialListening);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v7 = SoundPlayerMenu__busyWaitStopBgm(this, v6);
      UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
      sub_1C2E0D0(p_backupBgmName);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4BF90DC & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerMenu__trialListening_d__39_TypeInfo, item);
    byte_4BF90DC = 1;
  }
  v5 = sub_1C2E378(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2E0D0(v5 + 32);
  *(_QWORD *)(v5 + 40) = item;
  sub_1C2E0D0(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4BF90E3 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerMenu___c_TypeInfo, v1);
    byte_4BF90E3 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v2;
  sub_1C2E0D0(SoundPlayerMenu___c_TypeInfo->static_fields);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4BF90E5 & 1) == 0 )
  {
    sub_1C2E12C(&BgmManager_TypeInfo, method);
    byte_4BF90E5 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_4BF90E4 & 1) == 0 )
  {
    sub_1C2E12C(&BgmManager_TypeInfo, method);
    byte_4BF90E4 = 1;
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
  struct SoundPlayerMenu_o *v7; // x20
  struct SoundPlayerMenu_o *v8; // x8
  struct SoundPlayerMenu_o *v9; // x8
  const MethodInfo *v10; // x2
  struct SoundPlayerMenu_o *v11; // x8
  System_Action_o *v12; // x21
  struct SoundPlayerMenu_o *v13; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v15; // x3
  struct SoundPlayerMenu_o *v16; // x8
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v18; // x8

  if ( (byte_4BF90E6 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_SoundPlayerMenu_EndOpen__, v5);
    byte_4BF90E6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerMenu__createSelectEffect(_4__this, method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_33;
  if ( !v7->fields.state )
  {
    v7->fields.openedAct = this->fields.opened_act;
    sub_1C2E0D0(&v7->fields.openedAct);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this->fields.callbackFunc = this->fields.callback;
    sub_1C2E0D0(&_4__this->fields.callbackFunc);
    _4__this = this->fields.__4__this;
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
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v9->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, method);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v11->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__SetMode_32740828((SoundPlayerListViewManager_o *)_4__this, 1, v10);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerMenu__setCanPlaySoundDisp(_4__this, method);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_33;
    v7->fields.state = 1;
  }
  v12 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v7, Method_SoundPlayerMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)v7, v12, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_33;
  baseWindow = (UnityEngine_Object_o *)v13->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_30;
  v16 = this->fields.__4__this;
  if ( !v16 || (_4__this = (SoundPlayerMenu_o *)v16->fields.baseWindow) == 0LL )
LABEL_33:
    sub_1C2E388(_4__this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_33;
  _4__this = (SoundPlayerMenu_o *)v18->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v18->fields.isNewList,
    v18->fields.playSoundName,
    v15);
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
  if ( (byte_4BF90E7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C2E12C(&Method_SoundPlayerMenu_endPurchaseRequest__, v6);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1C2E12C(&StringLiteral_22644/*"ok"*/, v7);
    byte_4BF90E7 = 1;
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
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v12,
                                                        (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v13 = v3->fields.__4__this;
    if ( v13 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v13->fields.PURCHASE_NUM, 0, 0, 0LL);
      return;
    }
LABEL_13:
    sub_1C2E388(this, method);
  }
  this = (SoundPlayerMenu___c__DisplayClass34_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)this, (System_String_o *)StringLiteral_22644/*"ok"*/, v2);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  SoundPlayerListViewManager_o *klass; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4BF90E8 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1C2E12C(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4BF90E8 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (SoundPlayerListViewManager_o *)_4__this[6].klass,
        v6 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1C2E378(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v6,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v7),
        !klass) )
  {
    sub_1C2E388(this, method);
  }
  klass->fields.callbackFunc = v6;
  sub_1C2E0D0(&klass->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_32740828(klass, 2, v8);
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
    sub_1C2E388(_4__this, method);
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
  UnityEngine_WaitUntil_o *v13; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v21; // x20

  if ( (byte_4BF90E9 & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, method);
    sub_1C2E12C(&SoundManager_TypeInfo, v3);
    sub_1C2E12C(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v4);
    sub_1C2E12C(&SoundPlayerMenu___c_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_1/*""*/, v7);
    byte_4BF90E9 = 1;
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
      sub_1C2E388(v17, v18);
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
    sub_1C2E0D0(p_backupBgmName);
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
    _9__41_0 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__41_0, v11, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1C2E0D0(&static_fields->__9__41_0);
  }
  v13 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1C2E0D0(p__2__current);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  SoundPlayerMenu___c_c *v20; // x0
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v22; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v24; // x21
  Il2CppObject **v25; // x19
  System_String_o *backupBgmName; // x19

  if ( (byte_4BF90EA & 1) == 0 )
  {
    sub_1C2E12C(&BgmManager_TypeInfo, method);
    sub_1C2E12C(&System_Func_bool__TypeInfo, v3);
    sub_1C2E12C(&SoundManager_TypeInfo, v4);
    sub_1C2E12C(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v5);
    sub_1C2E12C(&SoundPlayerMenu___c_TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_4BF90EA = 1;
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
        sub_1C2E0D0(&_4__this->fields.backupBgmName);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          _4__this->fields.backupBgmName = _4__this->fields.playSoundName;
          sub_1C2E0D0(&_4__this->fields.backupBgmName);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0LL);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_4BF90A7 & 1) == 0 )
          {
            sub_1C2E12C(&StringLiteral_1/*""*/, v12);
            byte_4BF90A7 = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v17 = (UnityEngine_WaitForSeconds_o *)sub_1C2E378(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v17, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = &this->fields.__2__current;
          sub_1C2E0D0(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_1C2E388(BgmName, v12);
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
    sub_1C2E0D0(&_4__this->fields.retTrialListening);
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
    _9__39_0 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__39_0, v22, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = _9__39_0;
    sub_1C2E0D0(&static_fields->__9__39_0);
  }
  v24 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v24, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v24;
  v25 = &this->fields.__2__current;
  sub_1C2E0D0(v25);
  *((_DWORD *)v25 - 2) = 2;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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