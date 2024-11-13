void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B11CCD & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_12993/*"SoundPlayerNewKey"*/, v3, v4);
    byte_4B11CCD = 1;
  }
  SoundPlayerMenu_TypeInfo->static_fields->SOUND_PLAYER_NEW_KEY = (struct System_String_o *)StringLiteral_12993/*"SoundPlayerNewKey"*/;
  sub_1BCA784(SoundPlayerMenu_TypeInfo->static_fields, StringLiteral_12993/*"SoundPlayerNewKey"*/);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x1

  if ( (byte_4B11CCC & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B11CCC = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v10 = StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.playSoundName, v10);
  v14 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v14;
  sub_1BCA784(&this->fields.isNewList, v14);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v15);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11CBE & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SoundPlayerMenu_OnSelectSound__, v5, v6);
    byte_4B11CBE = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v8 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                      SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    v9);
  if ( !soundPlayerListViewManager )
    sub_1BCAA3C(v10, v11);
  soundPlayerListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(&soundPlayerListViewManager->fields.callbackFunc, v8);
  SoundPlayerListViewManager__SetMode_32308840(soundPlayerListViewManager, 2, v12);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1
  __int64 v5; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_4B11CB9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11CB9 = 1;
  }
  this->fields.state = 0;
  this->fields.retTrialListening = 0LL;
  sub_1BCA784(&this->fields.retTrialListening, 0LL);
  v4 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.backupBgmName, v4);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_1BCAA3C(soundPlayerListViewManager, v5);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  SoundPlayerListViewItem_o *v19; // x20
  int32_t playSoundIdx; // w22
  int *isNewList; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  struct BgmEntity_o *v34; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v36; // x1
  __int64 v37; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v40; // x21
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2

  if ( (byte_4B11CBF & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&SoundManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SoundPlayerMenu_OnSelectSound__, v13, v14);
    byte_4B11CBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v19 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v16);
      SoundPlayerMenu__createOpenDlg(this, v19, v24);
      v25 = Method_SoundPlayerMenu_OnSelectSound__;
      if ( (*((_BYTE *)Method_SoundPlayerMenu_OnSelectSound__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_1BCA7F8(Method_SoundPlayerMenu_OnSelectSound__);
      v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = (int *)SoundPlayerMenu__getItem(this, playSoundIdx, v17);
      if ( isNewList )
      {
        *((_BYTE *)isNewList + 121) = 0;
        SoundPlayerListViewItem__applyUi((SoundPlayerListViewItem_o *)isNewList, v22);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v22);
        SoundManager__stopBgm(0LL);
        SoundPlayerMenu__resetPlaySoundData(this, v23);
      }
      else
      {
        bgmEntity = v19->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v19->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v19, v22);
        SoundPlayerListViewItem__applyUi(v19, v29);
        isNewList = (int *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (int *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          v31 = *((_QWORD *)isNewList + 2);
          v32 = Method_System_Collections_Generic_List_int__Add__;
          ++isNewList[7];
          if ( !v31 )
            goto LABEL_36;
          v33 = isNewList[6];
          if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)isNewList,
              id,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            isNewList[6] = v33 + 1;
            *(_DWORD *)(v31 + 4 * v33 + 32) = id;
          }
        }
        if ( (byte_4B11C93 & 1) == 0 )
        {
          sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v30);
          byte_4B11C93 = 1;
        }
        v34 = v19->fields.bgmEntity;
        if ( v34 )
          p_fileName = &v34->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v36 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_1BCA784(&this->fields.playSoundName, v36);
        playSoundName = this->fields.playSoundName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v37);
        SoundManager__playBgm(playSoundName, 0LL);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v40 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                           SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                           v16,
                                                           v17,
                                                           v18);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        v41);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v40;
        sub_1BCA784(&soundPlayerListViewManager->fields.callbackFunc, v40);
        SoundPlayerListViewManager__SetMode_32308840(soundPlayerListViewManager, 2, v42);
        return;
      }
LABEL_36:
      sub_1BCAA3C(isNewList, v22);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_1BCAA3C(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  SoundPlayerListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B11CCE & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SoundPlayerMenu_OnSelectSound__, v4, v5);
    byte_4B11CCE = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v11 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                             v8,
                                                             v9,
                                                             v10),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v12),
        !soundPlayerListViewManager) )
  {
    sub_1BCAA3C(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v11;
  sub_1BCA784(&soundPlayerListViewManager->fields.callbackFunc, v11);
  SoundPlayerListViewManager__SetMode_32308840(soundPlayerListViewManager, 2, v13);
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

  if ( (byte_4B11CB7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11CB7 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1BCACFC(v8);
  SoundPlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SoundPlayerMenu_c *v10; // x0
  System_String_o *String; // x20
  System_String_array *IsNullOrEmpty; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  int v15; // w9
  System_String_array *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  struct System_Collections_Generic_List_int__o *v19; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  __int64 v23; // x1

  if ( (byte_4B11CBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v4, v5);
    sub_1BCA7E0(&SoundPlayerMenu_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B11CBB = 1;
  }
  v10 = SoundPlayerMenu_TypeInfo;
  if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo, method);
    v10 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v10->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    isNewList = this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_20;
    v15 = isNewList->fields._version + 1;
    isNewList->fields._size = 0;
    isNewList->fields._version = v15;
    if ( !String )
      goto LABEL_20;
    IsNullOrEmpty = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    v16 = IsNullOrEmpty;
    if ( (int)*(_QWORD *)&IsNullOrEmpty->max_length >= 1 )
    {
      v17 = 0LL;
      v18 = (unsigned int)*(_QWORD *)&IsNullOrEmpty->max_length - 1LL;
      while ( 1 )
      {
        IsNullOrEmpty = (System_String_array *)System_Int32__Parse(v16->m_Items[v17], 0LL);
        v19 = this->fields.isNewList;
        if ( !v19 )
          break;
        items = v19->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        v23 = (unsigned int)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            (int32_t)IsNullOrEmpty,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = (int)IsNullOrEmpty;
        }
        if ( v18 == v17 )
          return;
        if ( ++v17 >= (unsigned __int64)v16->max_length )
          sub_1BCAA44(IsNullOrEmpty, v23);
      }
LABEL_20:
      sub_1BCAA3C(IsNullOrEmpty, v13);
    }
  }
}


void __fastcall SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *Item; // x0
  __int64 v11; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o **v14; // x20

  if ( (byte_4B11CC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&SoundPlayerListViewObject_TypeInfo, v6, v7);
    byte_4B11CC1 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v9);
    if ( !Item )
      goto LABEL_22;
    monitor = Item[4].monitor;
    if ( monitor
      && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == SoundPlayerListViewObject_TypeInfo )
        v14 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v14 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v14[17], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 Item,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_22:
      sub_1BCAA3C(Item, v11);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B11CCA & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method, v2);
    byte_4B11CCA = 1;
  }
  v5 = sub_1BCAA2C(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *v3; // x20
  SoundPlayerMenu_o *v4; // x24
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  struct BgmEntity_o *bgmEntity; // x8
  __int64 v48; // x1
  Il2CppObject *v49; // x21
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  struct BgmEntity_o *v52; // x20
  System_String_o *v53; // x21
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v55; // x24
  SoundPlayerMenu_o *v56; // x21
  UserItemMaster_o *v57; // x25
  __int64 v58; // x1
  Il2CppObject *v59; // x8
  Il2CppClass *klass; // x9
  const char *namespaze; // x9
  SoundPlayerMenu_o *v62; // x22
  char v63; // w19
  __int64 v64; // x20
  __int64 v65; // x29
  System_String_o *v66; // x23
  Il2CppClass *v67; // x8
  unsigned __int64 v68; // x28
  SoundPlayerMenu_o *v69; // x26
  Il2CppClass *v70; // x8
  int closeTransform; // w8
  Il2CppClass *v72; // x8
  Il2CppClass *v73; // x8
  Il2CppObject *v74; // x27
  __int64 v75; // x1
  Il2CppObject *CountText; // x28
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  bool v81; // w24
  System_String_o *v82; // x25
  System_String_o *v83; // x26
  System_String_array *v84; // x27
  System_String_o *v85; // x21
  System_String_o *v86; // x22
  System_String_o *v87; // x23
  System_String_o *v88; // x25
  Il2CppObject *Instance; // x26
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  TripleButtonDlgComponent_CallbackFunc_o *v93; // x27
  SoundPlayerMenu_o *v94; // [xsp+58h] [xbp-88h]
  System_String_o *title; // [xsp+60h] [xbp-80h]
  Il2CppObject *object; // [xsp+68h] [xbp-78h]
  UserItemEntity_o *v97; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_4B11CCB & 1) == 0 )
  {
    sub_1BCA7E0(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SoundPlayerMenu_openCheckDlgCallback__, v21, v22);
    sub_1BCA7E0(&string___TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12334/*"SOUNDPLAYER_OPEN_CHECK"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12332/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12330/*"SOUNDPLAYER_DIALOG_OK"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12333/*"SOUNDPLAYER_ITEM_DISP"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12328/*"SOUNDPLAYER_DIALOG_CANCEL"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_87/*"\r"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12331/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_12339/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, v43, v44);
    this = (SoundPlayerMenu_o *)sub_1BCA7E0(&StringLiteral_12329/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v45, v46);
    byte_4B11CCB = 1;
  }
  v97 = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_72;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_72;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_72;
  this = (SoundPlayerMenu_o *)System_String__Replace_62420848(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_87/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_72;
  v49 = (Il2CppObject *)System_String__Replace_62420848(
                          (System_String_o *)this,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12339/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v51 = System_String__Format(v50, v49, 0LL);
  v52 = v3->fields.bgmEntity;
  v53 = v51;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_72;
  object = (Il2CppObject *)v4;
  v55 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_72;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v52 )
    goto LABEL_72;
  title = v53;
  if ( !MasterData_object )
    goto LABEL_72;
  v56 = (SoundPlayerMenu_o *)StringLiteral_1/*""*/;
  v57 = (UserItemMaster_o *)this;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         v52->fields.shopId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
    this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12331/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
    v59 = entity;
    if ( !entity )
      goto LABEL_72;
    klass = entity[2].klass;
    if ( !klass )
      goto LABEL_72;
    namespaze = klass->_1.namespaze;
    v62 = this;
    if ( (int)namespaze < 1 )
    {
      v63 = 0;
      v66 = (System_String_o *)v56;
    }
    else
    {
      v94 = this;
      v63 = 0;
      v64 = 8LL;
      v65 = 1LL - (unsigned int)namespaze;
      v66 = (System_String_o *)v56;
      while ( 1 )
      {
        v67 = v59[2].klass;
        if ( !v67 )
          goto LABEL_72;
        v68 = v64 - 8;
        if ( v64 - 8 >= (unsigned __int64)LODWORD(v67->_1.namespaze) )
          goto LABEL_73;
        if ( !v55 )
          goto LABEL_72;
        this = (SoundPlayerMenu_o *)ItemMaster__GetItemData((ItemMaster_o *)v55, *((_DWORD *)&v67->_1.image + v64), 0LL);
        if ( this )
        {
          v69 = this;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item);
          this = (SoundPlayerMenu_o *)NetworkManager__get_UserId(0LL);
          if ( !entity )
            goto LABEL_72;
          v70 = entity[2].klass;
          if ( !v70 )
            goto LABEL_72;
          if ( v68 >= LODWORD(v70->_1.namespaze) )
            goto LABEL_73;
          if ( !v57 )
            goto LABEL_72;
          this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                        v57,
                                        &v97,
                                        (int64_t)this,
                                        *((_DWORD *)&v70->_1.image + v64),
                                        0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v97 )
              goto LABEL_72;
            item = (SoundPlayerListViewItem_o *)(unsigned int)v97->fields.num;
          }
          else
          {
            this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
            closeTransform = (int)v69->fields.closeTransform;
            if ( closeTransform == 5 )
            {
              if ( !this )
                goto LABEL_72;
              item = (SoundPlayerListViewItem_o *)LODWORD(this->fields.playSoundName);
            }
            else if ( closeTransform == 22 )
            {
              if ( !this )
                goto LABEL_72;
              item = (SoundPlayerListViewItem_o *)HIDWORD(this->fields.playSoundName);
            }
            else
            {
              item = 0LL;
            }
          }
          if ( !entity )
            goto LABEL_72;
          v72 = entity[5].klass;
          if ( !v72 )
            goto LABEL_72;
          if ( v68 >= LODWORD(v72->_1.namespaze) )
            goto LABEL_73;
          if ( (int)item < *((_DWORD *)&v72->_1.image + v64) )
            v63 = 1;
          this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v69->fields.closeTransform, (int32_t)item, 0LL);
          if ( !entity )
            goto LABEL_72;
          v73 = entity[5].klass;
          if ( !v73 )
            goto LABEL_72;
          if ( v68 >= LODWORD(v73->_1.namespaze) )
            goto LABEL_73;
          v74 = (Il2CppObject *)this;
          CountText = (Il2CppObject *)ItemType__GetCountText(
                                        (int32_t)v69->fields.closeTransform,
                                        *((_DWORD *)&v73->_1.image + v64),
                                        0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75);
          v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v78 = System_String__Format_62415592(v77, (Il2CppObject *)v69->fields.m_CancellationTokenSource, v74, 0LL);
          v66 = System_String__Concat_62401220(v66, v78, 0LL);
          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
          v80 = System_String__Format_62415592(
                  v79,
                  (Il2CppObject *)v69->fields.m_CancellationTokenSource,
                  CountText,
                  0LL);
          this = (SoundPlayerMenu_o *)System_String__Concat_62401220((System_String_o *)v56, v80, 0LL);
          v56 = this;
        }
        if ( v65 + v64 == 8 )
          break;
        v59 = entity;
        ++v64;
        if ( !entity )
          goto LABEL_72;
      }
      v62 = v94;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
    v81 = v63 & 1;
  }
  else
  {
    v81 = 0;
    v82 = (System_String_o *)v56;
    v66 = (System_String_o *)v56;
    v62 = v56;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_72;
  v84 = (System_String_array *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_73;
  this->fields.basePanelList = (struct UIPanel_array *)v62;
  this = (SoundPlayerMenu_o *)sub_1BCA784(&this->fields.basePanelList, v62);
  if ( v84->max_length <= 1
    || (v84->m_Items[1] = v66, this = (SoundPlayerMenu_o *)sub_1BCA784(&v84->m_Items[1], v66), v84->max_length <= 2)
    || (v84->m_Items[2] = v82, this = (SoundPlayerMenu_o *)sub_1BCA784(&v84->m_Items[2], v82), v84->max_length <= 3)
    || (v84->m_Items[3] = (System_String_o *)v56,
        this = (SoundPlayerMenu_o *)sub_1BCA784(&v84->m_Items[3], v56),
        v84->max_length <= 4) )
  {
LABEL_73:
    sub_1BCAA44(this, item);
  }
  v84->m_Items[4] = v83;
  sub_1BCA784(&v84->m_Items[4], v83);
  v85 = System_String__Concat_62414748(v84, 0LL);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12328/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12329/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12330/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v93 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                     TripleButtonDlgComponent_CallbackFunc_TypeInfo,
                                                     v90,
                                                     v91,
                                                     v92);
  TripleButtonDlgComponent_CallbackFunc___ctor(v93, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance
    || (CommonUI__OpenTripleButtonDlg(
          (CommonUI_o *)Instance,
          title,
          v85,
          v86,
          v87,
          v88,
          v93,
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
        (this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_72:
    sub_1BCAA3C(this, item);
  }
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v81, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  __int64 v14; // x1
  Il2CppObject *EffetData; // x21
  __int64 v16; // x1
  Il2CppObject *v17; // x0

  if ( (byte_4B11CC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_19047/*"ef_soundchoice"*/, v6, v7);
    byte_4B11CC0 = 1;
  }
  SoundPlayerMenu__releaseSelectEffect(this, method);
  p_selectEffect = &this->fields.selectEffect;
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_15;
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  soundPlayerListViewManager,
                                  (System_String_o *)StringLiteral_19047/*"ef_soundchoice"*/,
                                  v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      v17 = UnityEngine_Object__Instantiate_object_(
              EffetData,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v17;
      sub_1BCA784(&this->fields.selectEffect, v17);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_34336992(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(soundPlayerListViewManager, v11);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B11CC2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11CC2 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v6 = this->fields.selectEffect;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x19
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  SoundPlayerListViewManager_CallbackFunc_o *v35; // x21
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x2
  struct SoundPlayerListViewManager_o *v38; // x8
  const MethodInfo *v39; // x2
  SoundPlayerListViewItem_o *Item; // x0
  _QWORD *monitor; // x8
  __int64 v42; // x8
  __int64 v43; // x1
  Il2CppObject *v44; // x20
  System_String_o *v45; // x0
  System_String_o *v46; // x20
  Il2CppObject *Instance; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x22

  if ( (byte_4B11CC6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SoundPlayerMenu_OnSelectSound__, v12, v13);
    sub_1BCA7E0(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v14, v15);
    sub_1BCA7E0(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12338/*"SOUNDPLAYER_SOUND_OPEN"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_87/*"\r"*/, v26, v27);
    byte_4B11CC6 = 1;
  }
  v28 = (Il2CppObject *)sub_1BCAA2C(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, result, method, v3);
  System_Object___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_16;
  v28[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v28[1], this);
  v29 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v29 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v30);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v35 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                         v32,
                                                         v33,
                                                         v34);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      v36);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v35;
      sub_1BCA784(&soundPlayerListViewManager->fields.callbackFunc, v35);
      SoundPlayerListViewManager__SetMode_32308840(soundPlayerListViewManager, 2, v37);
      return;
    }
LABEL_16:
    sub_1BCAA3C(v29, v30);
  }
  v38 = this->fields.soundPlayerListViewManager;
  if ( !v38 )
    goto LABEL_16;
  ++v38->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v30);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v39);
  v28[1].monitor = Item;
  v29 = (System_String_o *)sub_1BCA784(&v28[1].monitor, Item);
  monitor = v28[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  v42 = monitor[14];
  if ( !v42 )
    goto LABEL_16;
  v29 = *(System_String_o **)(v42 + 32);
  if ( !v29 )
    goto LABEL_16;
  v29 = System_String__Replace_62420848(
          v29,
          (System_String_o *)StringLiteral_87/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v29 )
    goto LABEL_16;
  v44 = (Il2CppObject *)System_String__Replace_62420848(
                          v29,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12338/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v46 = System_String__Format(v45, v44, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
  System_Action___ctor(v51, v28, Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, 0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v46,
    v51,
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&idx);
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
    sub_1BCAA3C(0LL, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundPlayerMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  __int64 size; // x20
  System_String_array *v14; // x21
  unsigned __int64 v15; // x22
  _QWORD *m_Items; // x23
  System_String_o *v17; // x0
  __int64 v18; // x1
  SoundPlayerMenu_c *v19; // x8
  System_String_o *v20; // x19
  int32_t Item; // [xsp+Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_4B11CBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v4, v5);
    sub_1BCA7E0(&SoundPlayerMenu_TypeInfo, v6, v7);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    this = (SoundPlayerMenu_o *)sub_1BCA7E0(&StringLiteral_863/*","*/, v10, v11);
    byte_4B11CBC = 1;
  }
  Item = 0;
  isNewList = v3->fields.isNewList;
  if ( !isNewList )
LABEL_14:
    sub_1BCAA3C(this, method);
  size = (unsigned int)isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)size);
    v15 = 0LL;
    m_Items = v14->m_Items;
    do
    {
      this = (SoundPlayerMenu_o *)v3->fields.isNewList;
      if ( !this )
        goto LABEL_14;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)this,
               v15,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&Item, 0LL);
      if ( !v14 )
        goto LABEL_14;
      if ( v15 >= v14->max_length )
        sub_1BCAA44(this, method);
      *m_Items = this;
      sub_1BCA784(m_Items, this);
      ++v15;
      ++m_Items;
    }
    while ( size != v15 );
    v17 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v14, 0LL);
    v19 = SoundPlayerMenu_TypeInfo;
    v20 = v17;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo, v18);
      v19 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v19->static_fields->SOUND_PLAYER_NEW_KEY, v20, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4B11CBD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, opened_act, callback);
    sub_1BCA7E0(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v7, v8);
    sub_1BCA7E0(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v9, v10);
    byte_4B11CBD = 1;
  }
  v11 = (Il2CppObject *)sub_1BCAA2C(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, opened_act, callback, method);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  v11[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v11[1], this);
  v11[1].monitor = opened_act;
  sub_1BCA784(&v11[1].monitor, opened_act);
  v11[2].klass = (Il2CppClass *)callback;
  sub_1BCA784(&v11[2], callback);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v18, v11, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_1BCAA3C(v12, v13);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *Instance; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x0
  __int64 *v29; // x8
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x2
  System_Collections_IEnumerator_o *v36; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  Il2CppObject *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  TripleButtonDlgComponent_CallbackFunc_o *v42; // x21

  if ( (byte_4B11CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SoundPlayerMenu_openCheckDlgCallback__, v10, v11);
    sub_1BCA7E0(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v12, v13);
    sub_1BCA7E0(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v14, v15);
    sub_1BCA7E0(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v16, v17);
    byte_4B11CC4 = 1;
  }
  v18 = sub_1BCAA2C(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_14;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BCA784(v18 + 24, this);
  Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v21);
  *(_QWORD *)(v18 + 16) = Item;
  sub_1BCA784(v18 + 16, Item);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v23);
      SoundPlayerMenu__detachSelectEffect(this, v30);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
      v29 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_9:
      v34 = v28;
      System_Action___ctor(v28, (Il2CppObject *)v18, *v29, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, v34, 0LL);
        return;
      }
LABEL_14:
      sub_1BCAA3C(v19, v20);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v23);
      v36 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v18 + 16), v35);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v36, 0LL);
      this->fields.retTrialListening = started;
      sub_1BCA784(&this->fields.retTrialListening, started);
      v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                         TripleButtonDlgComponent_CallbackFunc_TypeInfo,
                                                         v39,
                                                         v40,
                                                         v41);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( !v38 )
        goto LABEL_14;
      CommonUI__setCallbackTripleButtonDlg((CommonUI_o *)v38, v42, 0LL);
      break;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v23);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
      v29 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_9;
  }
}


void __fastcall SoundPlayerMenu__openEvent(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Collider_o *maskColl; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4B11CC7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, method);
    sub_1BCA7E0(&Method_SoundPlayerMenu__openEvent_b__37_0__, v5, v6);
    byte_4B11CC7 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_1BCAA3C(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v11, v12);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_selectEffect; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4B11CC3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11CC3 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = &this->fields.selectEffect;
  v5 = (UnityEngine_Object_o *)selectEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)*p_selectEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v8, 0LL);
    *p_selectEffect = 0LL;
    sub_1BCA784(p_selectEffect, 0LL);
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

  if ( (byte_4B11CB8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11CB8 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_1BCACFC(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1

  if ( (byte_4B11CBA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11CBA = 1;
  }
  this->fields.playSoundIdx = -1;
  v4 = StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.playSoundName, v4);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *canPlaySoundCnt; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v15; // x21
  struct SoundPlayerListViewManager_o *v16; // x8
  Il2CppObject *v17; // x19
  Il2CppObject *v18; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B11CC5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12335/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12336/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, v8, v9);
    byte_4B11CC5 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_10;
  UILabel__set_text(canPlaySoundStr, v11, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_10;
  v15 = v11;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum);
  v16 = this->fields.soundPlayerListViewManager;
  if ( !v16
    || (v17 = (Il2CppObject *)v11,
        playSoundMax = v16->fields.playSoundMax,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax),
        v11 = System_String__Format_62415592(v15, v17, v18, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_10:
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(canPlaySoundCnt, v11, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Coroutine_o *retTrialListening; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x1
  struct System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  __int64 v14; // x1
  System_String_o *v15; // x20
  void *v16; // x1

  if ( (byte_4B11CC9 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B11CC9 = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70140136((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_1BCA784(&this->fields.retTrialListening, 0LL);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v11 = SoundPlayerMenu__busyWaitStopBgm(this, v10);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    }
    else
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
      SoundManager__stopBgm(0LL);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = &this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
      {
        v15 = *p_backupBgmName;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v14);
        SoundManager__playBgm(v15, 0LL);
      }
      v16 = StringLiteral_1/*""*/;
      *p_backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1BCA784(p_backupBgmName, v16);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B11CC8 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerMenu__trialListening_d__39_TypeInfo, item, method);
    byte_4B11CC8 = 1;
  }
  v6 = sub_1BCAA2C(SoundPlayerMenu__trialListening_d__39_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_QWORD *)(v6 + 40) = item;
  sub_1BCA784(v6 + 40, item);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11CCF & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerMenu___c_TypeInfo, v1, v2);
    byte_4B11CCF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SoundPlayerMenu___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SoundPlayerMenu___c_TypeInfo->static_fields->__9 = (struct SoundPlayerMenu___c_o *)v4;
  sub_1BCA784(SoundPlayerMenu___c_TypeInfo->static_fields, v4);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11CD1 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B11CD1 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11CD0 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B11CD0 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SoundPlayerMenu_o *_4__this; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  struct SoundPlayerMenu_o *v13; // x20
  struct System_Action_o *opened_act; // x1
  struct System_Action_o *callback; // x1
  struct SoundPlayerMenu_o *v16; // x8
  struct SoundPlayerMenu_o *v17; // x8
  const MethodInfo *v18; // x2
  struct SoundPlayerMenu_o *v19; // x8
  System_Action_o *v20; // x21
  struct SoundPlayerMenu_o *v21; // x8
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v23; // x3
  struct SoundPlayerMenu_o *v24; // x8
  __int64 v25; // x1
  Il2CppObject *Component_object; // x20
  struct SoundPlayerMenu_o *v27; // x8

  if ( (byte_4B11CD2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SoundPlayerMenu_EndOpen__, v8, v9);
    byte_4B11CD2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerMenu__createSelectEffect(_4__this, method);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_33;
  if ( !v13->fields.state )
  {
    opened_act = this->fields.opened_act;
    v13->fields.openedAct = opened_act;
    sub_1BCA784(&v13->fields.openedAct, opened_act);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    callback = this->fields.callback;
    _4__this->fields.callbackFunc = callback;
    sub_1BCA784(&_4__this->fields.callbackFunc, callback);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v16->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v17->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, method);
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_33;
    _4__this = (SoundPlayerMenu_o *)v19->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerListViewManager__SetMode_32308840((SoundPlayerListViewManager_o *)_4__this, 1, v18);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_33;
    SoundPlayerMenu__setCanPlaySoundDisp(_4__this, method);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_33;
    v13->fields.state = 1;
  }
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v11, v12);
  System_Action___ctor(v20, (Il2CppObject *)v13, Method_SoundPlayerMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)v13, v20, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_33;
  baseWindow = (UnityEngine_Object_o *)v21->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_30;
  v24 = this->fields.__4__this;
  if ( !v24 || (_4__this = (SoundPlayerMenu_o *)v24->fields.baseWindow) == 0LL )
LABEL_33:
    sub_1BCAA3C(_4__this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_33;
    LODWORD(Component_object[3].monitor) = 1045220557;
    LODWORD(Component_object[2].klass) = 2;
  }
LABEL_30:
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_33;
  _4__this = (SoundPlayerMenu_o *)v27->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_33;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v27->fields.isNewList,
    v27->fields.playSoundName,
    v23);
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
  __int64 v3; // x3
  SoundPlayerMenu___c__DisplayClass34_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v17; // x21
  __int64 v18; // x1
  struct SoundPlayerMenu_o *v19; // x8

  v4 = this;
  if ( (byte_4B11CD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SoundPlayerMenu_endPurchaseRequest__, v9, v10);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    byte_4B11CD3 = 1;
  }
  item = v4->fields.item;
  if ( !item )
    goto LABEL_13;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_13;
  shopId = bgmEntity->fields.shopId;
  if ( shopId )
  {
    _4__this = (Il2CppObject *)v4->fields.__4__this;
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(v17, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_object_(
                                                        v17,
                                                        (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v19 = v4->fields.__4__this;
    if ( v19 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v19->fields.PURCHASE_NUM, 0, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  this = (SoundPlayerMenu___c__DisplayClass34_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)this, (System_String_o *)StringLiteral_22465/*"ok"*/, v2);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  SoundPlayerMenu___c__DisplayClass34_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  SoundPlayerListViewManager_o *klass; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4B11CD4 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method, v2);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_1BCA7E0(&Method_SoundPlayerMenu_OnSelectSound__, v5, v6);
    byte_4B11CD4 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (klass = (SoundPlayerListViewManager_o *)_4__this[6].klass,
        v9 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v9,
          _4__this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          v10),
        !klass) )
  {
    sub_1BCAA3C(this, method);
  }
  klass->fields.callbackFunc = v9;
  sub_1BCA784(&klass->fields.callbackFunc, v9);
  SoundPlayerListViewManager__SetMode_32308840(klass, 2, v11);
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
    sub_1BCAA3C(_4__this, method);
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
  __int64 v3; // x3
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
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v16; // x0
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v18; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v20; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  __int64 v28; // x1
  System_String_o *v29; // x20
  void *v30; // x1

  if ( (byte_4B11CD5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v7, v8);
    sub_1BCA7E0(&SoundPlayerMenu___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B11CD5 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      sub_1BCAA3C(v24, v25);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = &_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      v29 = *p_backupBgmName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v28);
      SoundManager__playBgm(v29, 0LL);
    }
    v30 = StringLiteral_1/*""*/;
    *p_backupBgmName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(p_backupBgmName, v30);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v16 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo, method);
    v16 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__41_0 = v16->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, method);
      v16 = SoundPlayerMenu___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(_9__41_0, v18, Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1BCA784(&static_fields->__9__41_0, _9__41_0);
  }
  v20 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, method, v2, v3);
  UnityEngine_WaitUntil___ctor(v20, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, v20);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_String_o *BgmName; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_String_o *playSoundName; // x1
  __int64 v22; // x2
  struct SoundPlayerListViewItem_o *item; // x21
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8
  float LISTENING_TIME; // s8
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  UnityEngine_WaitForSeconds_o *v30; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 v33; // x2
  __int64 v34; // x3
  SoundPlayerMenu___c_c *v35; // x0
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v37; // x21
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0
  UnityEngine_WaitUntil_o *v39; // x21
  Il2CppObject **v40; // x19
  __int64 v41; // x1
  System_String_o *backupBgmName; // x19

  if ( (byte_4B11CD6 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&SoundManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v8, v9);
    sub_1BCA7E0(&SoundPlayerMenu___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v14, v15);
    byte_4B11CD6 = 1;
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
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      BgmName = SoundManager__getBgmName(0LL);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = BgmName;
        sub_1BCA784(&_4__this->fields.backupBgmName, BgmName);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          playSoundName = _4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = playSoundName;
          sub_1BCA784(&_4__this->fields.backupBgmName, playSoundName);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v20);
        SoundManager__stopBgm(0LL);
        item = this->fields.item;
        if ( item )
        {
          if ( (byte_4B11C93 & 1) == 0 )
          {
            sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v22);
            byte_4B11C93 = 1;
          }
          bgmEntity = item->fields.bgmEntity;
          if ( bgmEntity )
            p_fileName = &bgmEntity->fields.fileName;
          else
            p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
          SoundManager__playBgm(*p_fileName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v30 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v27, v28, v29);
          UnityEngine_WaitForSeconds___ctor(v30, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v30;
          p__2__current = &this->fields.__2__current;
          sub_1BCA784(p__2__current, v30);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_40:
      sub_1BCAA3C(BgmName, v19);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  if ( !BgmManager__get_IsBusy(0LL) )
  {
LABEL_31:
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      goto LABEL_40;
    if ( !System_String__IsNullOrEmpty(_4__this->fields.backupBgmName, 0LL) )
    {
      backupBgmName = _4__this->fields.backupBgmName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v41);
      SoundManager__playBgm(backupBgmName, 0LL);
    }
    _4__this->fields.retTrialListening = 0LL;
    sub_1BCA784(&_4__this->fields.retTrialListening, 0LL);
    return 0;
  }
  v35 = SoundPlayerMenu___c_TypeInfo;
  if ( !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo, method);
    v35 = SoundPlayerMenu___c_TypeInfo;
  }
  _9__39_0 = v35->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, method);
      v35 = SoundPlayerMenu___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v33, v34);
    System_Func_bool____ctor(_9__39_0, v37, Method_SoundPlayerMenu___c__trialListening_b__39_0__, 0LL);
    static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = _9__39_0;
    sub_1BCA784(&static_fields->__9__39_0, _9__39_0);
  }
  v39 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, method, v33, v34);
  UnityEngine_WaitUntil___ctor(v39, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v39;
  v40 = &this->fields.__2__current;
  sub_1BCA784(v40, v39);
  *((_DWORD *)v40 - 2) = 2;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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