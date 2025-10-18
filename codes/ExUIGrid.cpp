void ExUIGrid___ctor(ExUIGrid_o *this, const MethodInfo *method)
{
  UIGrid___ctor((UIGrid_o *)this, 0);
}


void ExUIGrid__ResetPosition(
        ExUIGrid_o *this,
        System_Collections_Generic_List_Transform__o *list,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  int32_t maxPerLine; // w8
  float v7; // s9
  float size; // s8
  float v9; // s8
  unsigned int v10; // w8
  int v11; // w25
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float v13; // s2
  int v14; // w26
  float v15; // s0
  int32_t v16; // w8
  int v17; // w2
  System_Collections_Generic_List_object__o *v18; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s15
  int v21; // w8
  float y; // s12
  float v23; // s0
  float v24; // s14
  int32_t v25; // w23
  float v26; // s13
  UnityEngine_Component_o *v27; // x24
  int32_t arrangement; // w8
  float x; // s9
  float v30; // s10
  float v31; // s8
  float cellWidth; // s0
  float v33; // s9
  double v34; // d0
  double v35; // d0
  float v36; // s1
  __int64 v37; // x8
  float v38; // s0
  float v39; // s1
  float cellHeight; // s0
  float v41; // s10
  double v42; // d0
  double v43; // d0
  float v44; // s1
  __int64 v45; // x8
  float v46; // s0
  float v47; // s1
  float v48; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v50; // [xsp+Ch] [xbp-B4h]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C446BF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__GetRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4C446BF = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)list, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    maxPerLine = this->fields.maxPerLine;
    if ( maxPerLine <= 0 )
    {
      UIGrid__ResetPosition((UIGrid_o *)this, list, 0);
    }
    else
    {
      this->fields.mReposition = 0;
      if ( !list )
LABEL_72:
        sub_1C372B4(IsNullOrEmpty);
      v7 = (float)maxPerLine;
      size = (float)list->fields._size;
      if ( !byte_4C3CFE8 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3CFE8 = 1;
      }
      v9 = size / v7;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v10 = vcvtps_s32_f32(v9);
      if ( ceilf(v9) == INFINITY )
        v11 = 0x80000000;
      else
        v11 = v10;
      PivotOffset = NGUIMath__GetPivotOffset(this->fields.pivot, 0);
      if ( v11 >= 1 )
      {
        v13 = fminf(PivotOffset.fields.x, 1.0);
        v14 = 0;
        if ( PivotOffset.fields.x < 0.0 )
          v15 = 0.0;
        else
          v15 = v13;
        v50 = v15;
        while ( 1 )
        {
          v16 = this->fields.maxPerLine;
          if ( list->fields._size - v16 * v14 >= v16 )
            v17 = this->fields.maxPerLine;
          else
            v17 = list->fields._size - v16 * v14;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)list,
                                     v16 * v14,
                                     v17,
                                     (const MethodInfo_37A3BF4 *)Method_System_Collections_Generic_List_Transform__GetRange__);
          v18 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
          if ( !byte_4C3C921 )
          {
            IsNullOrEmpty = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C921 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          z = static_fields->zeroVector.fields.z;
          if ( this->fields.arrangement )
          {
            if ( !v18 )
              goto LABEL_72;
            v21 = v18->fields._size;
            y = static_fields->zeroVector.fields.y;
            v23 = this->fields.cellHeight * (float)(1 - v21);
            v24 = v23 + (float)(PivotOffset.fields.y * (float)(0.0 - v23));
          }
          else
          {
            if ( !v18 )
              goto LABEL_72;
            v21 = v18->fields._size;
            y = (float)(this->fields.cellHeight * (float)(1 - v11))
              + (float)(PivotOffset.fields.y * (float)(0.0 - (float)(this->fields.cellHeight * (float)(1 - v11))));
            v24 = (float)(v50 * (float)(this->fields.cellWidth * (float)(v21 - 1))) + 0.0;
          }
          if ( v21 >= 1 )
            break;
LABEL_69:
          if ( ++v14 == v11 )
            return;
        }
        v25 = 0;
        v26 = (float)v14;
        while ( 1 )
        {
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v18,
                                     v25,
                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_72;
          v27 = (UnityEngine_Component_o *)IsNullOrEmpty;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, 0);
          arrangement = this->fields.arrangement;
          x = localPosition.fields.x;
          v30 = localPosition.fields.y;
          v31 = localPosition.fields.z;
          if ( arrangement != 2 )
          {
            if ( arrangement == 1 )
            {
              x = this->fields.cellWidth * v26;
              v30 = (float)v25 * (float)-this->fields.cellHeight;
            }
            else if ( !arrangement )
            {
              x = this->fields.cellWidth * (float)v25;
              v30 = v26 * (float)-this->fields.cellHeight;
            }
            goto LABEL_60;
          }
          cellWidth = this->fields.cellWidth;
          if ( cellWidth > 0.0 )
            break;
LABEL_48:
          cellHeight = this->fields.cellHeight;
          if ( cellHeight <= 0.0 )
            goto LABEL_60;
          v41 = v30 / cellHeight;
          v42 = modf(v41, &iptr);
          if ( v41 >= 0.0 )
          {
            if ( v42 == 0.5 )
            {
              v43 = iptr;
              v44 = 1.0;
LABEL_54:
              v45 = (__int64)v43;
              v46 = v43;
              v47 = v46 + v44;
              if ( (v45 & 1) != 0 )
                v46 = v47;
              goto LABEL_59;
            }
            v46 = floorf(v41 + 0.5);
          }
          else
          {
            if ( v42 == -0.5 )
            {
              v43 = iptr;
              v44 = -1.0;
              goto LABEL_54;
            }
            v46 = ceilf(v41 + -0.5);
          }
LABEL_59:
          v30 = v46 * this->fields.cellHeight;
LABEL_60:
          v48 = v31 - z;
          if ( !this->fields.animateSmoothly )
            goto LABEL_66;
          if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
          if ( UnityEngine_Application__get_isPlaying(0) )
          {
            gameObject = UnityEngine_Component__get_gameObject(v27, 0);
            v53.fields.x = x - v24;
            v53.fields.y = v30 - y;
            v53.fields.z = v48;
            IsNullOrEmpty = (__int64)SpringPosition__Begin(gameObject, v53, 15.0, 0);
            if ( !IsNullOrEmpty )
              goto LABEL_72;
            *(_WORD *)(IsNullOrEmpty + 49) = 257;
          }
          else
          {
LABEL_66:
            IsNullOrEmpty = (__int64)UnityEngine_Component__get_transform(v27, 0);
            if ( !IsNullOrEmpty )
              goto LABEL_72;
            v54.fields.x = x - v24;
            v54.fields.y = v30 - y;
            v54.fields.z = v48;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v54, 0);
          }
          if ( ++v25 >= v18->fields._size )
            goto LABEL_69;
        }
        v33 = x / cellWidth;
        v34 = modf(v33, &iptr);
        if ( v33 >= 0.0 )
        {
          if ( v34 == 0.5 )
          {
            v35 = iptr;
            v36 = 1.0;
LABEL_42:
            v37 = (__int64)v35;
            v38 = v35;
            v39 = v38 + v36;
            if ( (v37 & 1) != 0 )
              v38 = v39;
            goto LABEL_47;
          }
          v38 = floorf(v33 + 0.5);
        }
        else
        {
          if ( v34 == -0.5 )
          {
            v35 = iptr;
            v36 = -1.0;
            goto LABEL_42;
          }
          v38 = ceilf(v33 + -0.5);
        }
LABEL_47:
        x = v38 * this->fields.cellWidth;
        goto LABEL_48;
      }
    }
  }
}