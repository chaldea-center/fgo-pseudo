void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42186FA & 1) == 0 )
  {
    sub_B0D8A4(&UISprite___TypeInfo, method);
    byte_42186FA = 1;
  }
  v3 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
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
  __int64 v19; // x23
  __int64 v20; // x24
  unsigned __int64 v21; // x25
  System_String_o *v22; // x21
  __int64 *v23; // x8
  System_String_o *v24; // x20
  unsigned int v25; // w26
  float v26; // s8
  float v27; // s9
  __int64 *v28; // x8
  __int64 *v29; // x8
  UISprite_o *evaluationSprite; // x0
  unsigned __int64 v31; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v33; // x8
  System_String_o *v34; // x1
  __int64 v36; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186F8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19605/*"img_parameter_C"*/, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_19620/*"img_parametergage_edge"*/, v7);
    sub_B0D8A4(&StringLiteral_19621/*"img_parametergage_edge_ex"*/, v8);
    sub_B0D8A4(&StringLiteral_19612/*"img_parameter_minus"*/, v9);
    sub_B0D8A4(&StringLiteral_19604/*"img_parameter_B"*/, v10);
    sub_B0D8A4(&StringLiteral_19606/*"img_parameter_D"*/, v11);
    sub_B0D8A4(&StringLiteral_19619/*"img_parametergage_bar_ex"*/, v12);
    sub_B0D8A4(&StringLiteral_19614/*"img_parameter_plus"*/, v13);
    sub_B0D8A4(&StringLiteral_19603/*"img_parameter_A"*/, v14);
    sub_B0D8A4(&StringLiteral_19618/*"img_parametergage_bar"*/, v15);
    sub_B0D8A4(&StringLiteral_19615/*"img_parameter_question"*/, v16);
    sub_B0D8A4(&StringLiteral_19607/*"img_parameter_E"*/, v17);
    sub_B0D8A4(&StringLiteral_19608/*"img_parameter_EX"*/, v18);
    byte_42186F8 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v19 = StringLiteral_19618/*"img_parametergage_bar"*/;
  v20 = StringLiteral_19620/*"img_parametergage_edge"*/;
  v21 = 0LL;
  v22 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      v23 = &StringLiteral_19603/*"img_parameter_A"*/;
      v21 = 5LL;
      goto LABEL_9;
    case 17:
    case 18:
    case 19:
    case 20:
    case 27:
    case 28:
    case 29:
    case 30:
    case 37:
    case 38:
    case 39:
    case 40:
    case 47:
    case 48:
    case 49:
    case 50:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_10;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      v23 = &StringLiteral_19604/*"img_parameter_B"*/;
      v21 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      v23 = &StringLiteral_19605/*"img_parameter_C"*/;
      v21 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      v23 = &StringLiteral_19606/*"img_parameter_D"*/;
      v21 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v23 = &StringLiteral_19607/*"img_parameter_E"*/;
      v21 = 1LL;
LABEL_9:
      v22 = (System_String_o *)*v23;
      goto LABEL_10;
    case 61:
      v25 = 0;
      v19 = StringLiteral_19619/*"img_parametergage_bar_ex"*/;
      v20 = StringLiteral_19621/*"img_parametergage_edge_ex"*/;
      v22 = (System_String_o *)StringLiteral_19608/*"img_parameter_EX"*/;
      v24 = 0LL;
      v26 = 0.0;
      v27 = 16.0;
      v21 = 5LL;
      goto LABEL_18;
    default:
      v21 = 0LL;
      if ( rank == 98 )
        v22 = (System_String_o *)StringLiteral_19615/*"img_parameter_question"*/;
      else
        v22 = 0LL;
LABEL_10:
      v24 = 0LL;
      v25 = 0;
      v26 = 0.0;
      v27 = 16.0;
      switch ( rank )
      {
        case 12:
        case 22:
        case 32:
        case 42:
        case 52:
          v28 = &StringLiteral_19614/*"img_parameter_plus"*/;
          goto LABEL_14;
        case 13:
        case 23:
        case 33:
        case 43:
        case 53:
          v29 = &StringLiteral_19614/*"img_parameter_plus"*/;
          v25 = 2;
          goto LABEL_17;
        case 14:
        case 24:
        case 34:
        case 44:
        case 54:
          v28 = &StringLiteral_19612/*"img_parameter_minus"*/;
LABEL_14:
          v24 = (System_String_o *)*v28;
          v25 = 1;
          break;
        case 15:
        case 25:
        case 35:
        case 45:
        case 55:
          v29 = &StringLiteral_19614/*"img_parameter_plus"*/;
          v25 = 3;
          v26 = -2.0;
          v27 = 10.0;
          goto LABEL_17;
        case 16:
        case 26:
        case 36:
        case 46:
        case 56:
          v29 = &StringLiteral_19615/*"img_parameter_question"*/;
          v25 = 1;
          v26 = 5.0;
LABEL_17:
          v24 = (System_String_o *)*v29;
          break;
        default:
          break;
      }
LABEL_18:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      UISprite__set_spriteName(evaluationSprite, v22, 0LL);
      if ( !v22 )
        goto LABEL_22;
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_22:
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v25 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        v37.fields.y = 0.0;
        v37.fields.z = 0.0;
        v37.fields.x = v26;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v37, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        UISprite__set_spriteName(evaluationSprite, v24, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v25 >= 2 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        v38.fields.x = v27 + v26;
        v38.fields.y = 0.0;
        v38.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v38, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        UISprite__set_spriteName(evaluationSprite, v24, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v25 != 3 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
        goto LABEL_46;
      }
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_66;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite
        || (v39.fields.x = v26 + (float)(v27 + v27),
            v39.fields.y = 0.0,
            v39.fields.z = 0.0,
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v39, 0LL),
            (evaluationSprite = this->fields.evaluationAdd3Sprite) == 0LL)
        || (UISprite__set_spriteName(evaluationSprite, v24, 0LL),
            (evaluationSprite = this->fields.evaluationAdd3Sprite) == 0LL) )
      {
LABEL_66:
        sub_B0D97C(evaluationSprite);
      }
      evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
                                         evaluationSprite,
                                         evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_46:
      v31 = 0LL;
      do
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_66;
        if ( v31 >= gaugeSpriteList->max_length )
        {
          v36 = sub_B0D9A8(evaluationSprite);
          sub_B0D948(v36, 0LL);
        }
        evaluationSprite = gaugeSpriteList->m_Items[v31];
        if ( v31 >= v21 )
        {
          if ( !evaluationSprite )
            goto LABEL_66;
          v34 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_66;
          if ( v31 >= 4 )
            v33 = (System_String_o *)v20;
          else
            v33 = (System_String_o *)v19;
          if ( v31 )
            v34 = v33;
          else
            v34 = (System_String_o *)v20;
        }
        UISprite__set_spriteName(evaluationSprite, v34, 0LL);
      }
      while ( v31++ < 4 );
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *parameterTitleSprite; // x21
  UISprite_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42186F9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_19611/*"img_parameter_magic"*/, v5);
    sub_B0D8A4(&StringLiteral_19613/*"img_parameter_np"*/, v6);
    sub_B0D8A4(&StringLiteral_19617/*"img_parameter_strength"*/, v7);
    sub_B0D8A4(&StringLiteral_19610/*"img_parameter_luck"*/, v8);
    sub_B0D8A4(&StringLiteral_19609/*"img_parameter_endurance"*/, v9);
    sub_B0D8A4(&StringLiteral_19616/*"img_parameter_speed"*/, v10);
    byte_42186F9 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19617/*"img_parameter_strength"*/;
        goto LABEL_20;
      case 1:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19609/*"img_parameter_endurance"*/;
        goto LABEL_20;
      case 2:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19616/*"img_parameter_speed"*/;
        goto LABEL_20;
      case 3:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19611/*"img_parameter_magic"*/;
        goto LABEL_20;
      case 4:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19610/*"img_parameter_luck"*/;
        goto LABEL_20;
      case 5:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
LABEL_21:
          sub_B0D97C(v12);
        v13 = &StringLiteral_19613/*"img_parameter_np"*/;
LABEL_20:
        UISprite__set_spriteName(v12, (System_String_o *)*v13, 0LL);
        break;
      default:
        return;
    }
  }
}