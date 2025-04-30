void __fastcall ExtraBattleUserInterfaceComponent___ctor(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ExtraBattleUserInterfaceComponent__Awake(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ExtraBattleUserInterfaceComponent__OnTap(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onTapCallback, 0LL);
}


void __fastcall ExtraBattleUserInterfaceComponent__SetActive(
        ExtraBattleUserInterfaceComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
}


void __fastcall ExtraBattleUserInterfaceComponent__SetOnTapCallback(
        ExtraBattleUserInterfaceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onTapCallback = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onTapCallback, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall ExtraBattleUserInterfaceComponent__UpdateData(
        ExtraBattleUserInterfaceComponent_o *this,
        ExtraBattleUserInterfaceData_o *uiData,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *Labels_k__BackingField; // x8
  struct UILabel_array *labels; // x9
  ExtraBattleUserInterfaceComponent_o *v8; // x21
  __int64 v9; // x9
  il2cpp_array_size_t v11; // w22
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *v12; // x8
  struct UILabel_array *v13; // x8
  struct UILabel_array *v14; // x8
  struct UILabel_array *v15; // x8
  UnityEngine_Color_o color; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *text; // [xsp+18h] [xbp-38h] BYREF

  *(_QWORD *)&color.fields.b = 0LL;
  text = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  if ( uiData )
  {
    Labels_k__BackingField = uiData->fields._Labels_k__BackingField;
    if ( Labels_k__BackingField )
    {
      labels = this->fields.labels;
      v8 = this;
      if ( !labels )
        goto LABEL_19;
      v9 = *(_QWORD *)&labels->max_length;
      if ( (_DWORD)v9 == Labels_k__BackingField->max_length && (int)v9 >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = uiData->fields._Labels_k__BackingField;
          if ( !v12 )
            break;
          if ( v11 >= v12->max_length )
            goto LABEL_20;
          this = (ExtraBattleUserInterfaceComponent_o *)v12->m_Items[v11];
          if ( !this )
            break;
          ExtraBattleUserInterfaceData_LabelDataWrapper__LoadTextAndColorByLatestStats(
            (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)this,
            battleData,
            &text,
            &color,
            v4);
          v13 = v8->fields.labels;
          if ( !v13 )
            break;
          if ( v11 >= v13->max_length )
            goto LABEL_20;
          this = (ExtraBattleUserInterfaceComponent_o *)v13->m_Items[v11];
          if ( !this )
            break;
          UILabel__set_text((UILabel_o *)this, text, 0LL);
          v14 = v8->fields.labels;
          if ( !v14 )
            break;
          if ( v11 >= v14->max_length )
LABEL_20:
            sub_1B8661C(this, uiData);
          this = (ExtraBattleUserInterfaceComponent_o *)v14->m_Items[v11];
          if ( !this )
            break;
          UIWidget__set_color((UIWidget_o *)this, color, 0LL);
          v15 = v8->fields.labels;
          if ( !v15 )
            break;
          if ( (signed int)++v11 >= (signed int)v15->max_length )
            return;
        }
LABEL_19:
        sub_1B86614(this, uiData);
      }
    }
  }
}


UnityEngine_Vector2_o __fastcall ExtraBattleUserInterfaceComponent__get_OverKillPositionAdjust(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.overKillPositionAdjust.fields.x;
  y = this->fields.overKillPositionAdjust.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall ExtraBattleUserInterfaceComponent__get_SkillSkipPositionAdjust(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.skillSkipPositionAdjust.fields.x;
  y = this->fields.skillSkipPositionAdjust.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}