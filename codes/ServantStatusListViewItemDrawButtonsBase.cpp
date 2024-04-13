void __fastcall ServantStatusListViewItemDrawButtonsBase___ctor(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        UICommonButton_o *buttonObj,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ED35C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_UICommonButton___, (_DWORD)buttonObj, (_DWORD)method, v3);
    byte_42ED35C = 1;
  }
  return System_Array__IndexOf_UICommonButton_(
           (UICommonButton_array *)this->fields.tdSpeedButtonSpriteList,
           buttonObj,
           (const MethodInfo_1FC18BC *)Method_System_Array_IndexOf_UICommonButton___);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  return (int32_t)this[1].klass;
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__Selected(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall ServantStatusListViewItemDrawButtonsBase__SetButtonKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  LODWORD(this[1].klass) = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawButtonsBase__SetItem(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  LocalizationManager_c *v13; // x0
  float *static_fields; // x8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s11
  float *v19; // x8
  float v20; // s12
  float v21; // s13
  float v22; // s14
  float v23; // s15
  UICommonButton_o *v24; // x0
  __int64 v25; // x1
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w21
  int v28; // w20
  int v29; // w22
  bool v30; // w25
  int v31; // w9
  __int64 v32; // x26
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  System_String_o **v34; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  float v36; // s3
  float v37; // s2
  float v38; // s1
  float v39; // s0
  __int64 v40; // x0

  if ( (byte_42ED35B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v10, v11, v12);
    byte_42ED35B = 1;
  }
  LODWORD(this->fields.collider) = mode;
  if ( item && mode )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E563C )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
      byte_42E563C = 1;
    }
    v13 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v13->static_fields;
    v15 = static_fields[20];
    v16 = static_fields[21];
    v17 = static_fields[22];
    v18 = static_fields[23];
    if ( !byte_42E563D )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
      v13 = LocalizationManager_TypeInfo;
      byte_42E563D = 1;
    }
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = LocalizationManager_TypeInfo;
    }
    v19 = (float *)v13->static_fields;
    v20 = v19[24];
    v21 = v19[25];
    v22 = v19[26];
    v23 = v19[27];
    v24 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, void *, const MethodInfo *))this->klass->vtable._14_Selected.method)(
                                this,
                                item,
                                this->klass[1]._1.image,
                                method);
    tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
    if ( !tdSpeedButtonSpriteList )
      goto LABEL_46;
    max_length = tdSpeedButtonSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v28 = (int)v24;
      v29 = 1;
      v30 = (_DWORD)v24 == 0;
      do
      {
        v31 = v29 - 1;
        if ( v29 - 1 >= tdSpeedButtonSpriteList->max_length )
        {
LABEL_48:
          v40 = sub_B5D6C8(v24);
          sub_B5D668(v40, 0LL);
        }
        v32 = v31;
        v24 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v31];
        if ( !v24 )
          break;
        UICommonButton__SetColliderEnable(v24, !v30, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( (unsigned int)v32 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_48;
        v24 = (UICommonButton_o *)*((_QWORD *)&clickEventObject[1].monitor + v32);
        if ( !v24 )
          break;
        v34 = (System_String_o **)(v30 ? &StringLiteral_17175/*"btn_bg_21"*/ : &StringLiteral_17174/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v24, *v34, 0LL);
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        if ( !tdSpeedButtonList )
          break;
        if ( (unsigned int)v32 >= tdSpeedButtonList->max_length )
          goto LABEL_48;
        v24 = tdSpeedButtonList->m_Items[v32];
        if ( !v24 )
          break;
        if ( v30 )
          v36 = v23;
        else
          v36 = v18;
        if ( v30 )
          v37 = v22;
        else
          v37 = v17;
        if ( v30 )
          v38 = v21;
        else
          v38 = v16;
        if ( v30 )
          v39 = v20;
        else
          v39 = v15;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v24, *(UnityEngine_Color_o *)(&v36 - 3), 0LL);
        if ( v29 >= max_length )
          return;
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        v30 = v28 == v29++;
      }
      while ( tdSpeedButtonSpriteList );
LABEL_46:
      sub_B5D69C(v24, v25);
    }
  }
}